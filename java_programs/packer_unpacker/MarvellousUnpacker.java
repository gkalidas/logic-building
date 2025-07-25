package MarvellousPackerUnpacker;

import java.util.*;
import java.io.*;

public class MarvellousUnpacker{
    private String PackName;
    
    public MarvellousUnpacker(String A){
        this.PackName = A;
    }

    public void UnpackingActivity(){
        try{

            System.out.println("------------------------------------------------------");
            System.out.println("------- Marvellous Packer Unpacker -------------------");
            System.out.println("------------------------------------------------------");
            System.out.println("------------ Un Packing Activity----------------------");
            System.out.println("------------------------------------------------------");

            String Header = null;
            File fobjnew = null;
            int FileSize = 0, iRet = 0, iCountFile = 0;

            File fobj = new File(PackName);
            
            // If packed file does not exists
            if(!fobj.exists()){
                System.out.println("Unable to access Packed file.");
                return;
            }
            
            System.out.println("Packed file opened successfully.");
            FileInputStream fiobj = new FileInputStream(fobj);

            // Buffer to read the header
            byte HeaderBuffer[] = new byte[100];

            // Scan the packed file to extract files from it
            while((iRet=fiobj.read(HeaderBuffer, 0, 100)) != -1){
                // Convert byteArray to string
                Header = new String(HeaderBuffer);
                
                Header = Header.trim();

                // Tokenise the header into two parts
                String tokens[] = Header.split(" ");

                fobjnew = new File(tokens[0]);
                // Create new file to extract
                fobjnew.createNewFile();

                FileSize = Integer.parseInt(tokens[1]);

                // Create new Buffere to store files (Meta)data
                byte Buffer[] = new byte[FileSize];

                FileOutputStream foobj = new FileOutputStream(fobjnew);

                // Read the data from packed file
                // fiobj.read[kuthe, kuthun, kiti];
                fiobj.read(Buffer, 0, FileSize);

                // Write the data into extracted file
                foobj.write(Buffer, 0, FileSize);
                System.out.println("File unpacked with name : "+ tokens[0] + " having size " + FileSize);

                iCountFile ++;
                foobj.close();
            }// End of while
            System.out.println("------------------------------------------------------");
            System.out.println("----------- Statical Report---------------------------");
            System.out.println("------------------------------------------------------");
            System.out.println("Total no of files unpacked : " + iCountFile);
            System.out.println("------------------------------------------------------");
            System.out.println("---------- Thanks you for using our application ------");
            System.out.println("------------------------------------------------------");
            fiobj.close();

        }
        catch(Exception eobj){
        }
    }
}
