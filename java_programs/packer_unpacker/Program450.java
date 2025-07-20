import java.util.*;
import java.io.*;

class Program450{

    public static void main(String A[])
    {
        try{
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of directory : ");
            String DirName = sobj.nextLine();

            File fobj = new File(DirName);
            if(fobj.exists() && fobj.isDirectory()){
                System.out.println("Directory is present...");
                File Arr[] = fobj.listFiles();

                System.out.println("No of files in the directory are "+ Arr.length);

                int i = 0;

                for(i=0; i< Arr.length; i++){
                    System.out.print("File name is : " + Arr[i].getName());
                    System.out.println(" File size is : " + Arr[i].length());
                }
            }
            else{
                System.out.println("There is no such directory.")
            }
        }
        catch(Exception eobj){
        }
    }
}
