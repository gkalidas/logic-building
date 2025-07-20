import java.util.*;
import java.io.*;

class Program452{

    public static void main(String A[])
    {
        try{
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of directory that you want to pack : ");
            String DirName = sobj.nextLine();

            System.out.println("Enter the name of file that you want to create for packing : ");
            String PackName = sobj.nextLine();

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

                int i = 0;
                
                FileOutputStream foobj = new FileOutputStream(packObj);
                byte Buffer[] = new byte[1024];
                int iRet = 0;


                for(i=0; i< Arr.length; i++){
                    System.out.print("File name is : " + Arr[i].getName());
                    FileInputStream fiobj = new FileInputStream(Arr[i]);
                    while((iRet=fiobj.read(Buffer)) != -1){
                        foobj.write(Buffer, 0, iRet);
                    }
                    fiobj.close();
                }
                System.out.println("Packing activity done.");
            }
            else{
                System.out.println("There is no such directory.");
            }
        }
        catch(Exception eobj){
        }
    }
}
