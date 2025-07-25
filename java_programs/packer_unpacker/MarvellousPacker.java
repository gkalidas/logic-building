package MarvellousPackerUnpacker;

import java.util.*;
import java.io.*;

public class MarvellousPacker{
    private String PackName;
    private String DirName;

    public MarvellousPacker(String A, String B){
        this.PackName = A;
        this.DirName = B;
    }

    public void PackingActivity(){
        try{
            System.out.println("------------------------------------------------------");
            System.out.println("------- Marvellous Packer Unpacker -------------------");
            System.out.println("------------------------------------------------------");
            System.out.println("------- Packing Activity---------- -------------------");
            System.out.println("------------------------------------------------------");

            int i = 0, j = 0, iRet = 0, iCountFile = 0;

            File packObj = new File(PackName);
            boolean bRet = packObj.createNewFile();

            if(bRet == false){
                System.out.println("Unable to create pack file.");
                return;
            }

            File fobj = new File(DirName);
            if(fobj.exists() && fobj.isDirectory()){
                System.out.println("Directory is present...");
                File Arr[] = fobj.listFiles();

                System.out.println("No of files in the directory are "+ Arr.length);

                
                
                // Packed file object
                FileOutputStream foobj = new FileOutputStream(packObj);
                // Buffer for read and write activity
                byte Buffer[] = new byte[1024];

                String Header = null;
                // Directory Traversal
                for(i=0; i< Arr.length; i++){
                    Header = Arr[i].getName()+ " " + Arr[i].length();
                    // Loop to form 100 bytes header
                    for(j = Header.length(); j<100; j++){
                        Header = Header + " ";
                    }

                    // Write header into packed file
                    foobj.write(Header.getBytes());
                    
                    // Open file from directory for reading.
                    FileInputStream fiobj = new FileInputStream(Arr[i]);

                    iCountFile ++;

                    // Write contents of file into packed file
                    while((iRet=fiobj.read(Buffer)) != -1){
                        foobj.write(Buffer, 0, iRet);

                        System.out.println("File name Scanned : "+ Arr[i].getName());
                        System.out.println("File size read is : " + iRet);
                    }
                    fiobj.close();

                }
                System.out.println("Packing activity done.");

                System.out.println("------------------------------------------------------");
                System.out.println("----------- Statical Report--------------");
                System.out.println("------------------------------------------------------");
                System.out.println("Totoal file packed : "+ iCountFile);
                System.out.println("------------------------------------------------------");
            }
            else{
                System.out.println("There is no such directory.");
            }
        }
        catch(Exception eobj){
        }
    }  // End of PackingActivity function
}// End of MarvellousPacker class
