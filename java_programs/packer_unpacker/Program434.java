import java.util.*;
import java.io.*;

class Program434{

    public static void main(String A[])
    {
        try{
            
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the name of the file that you want to create.");
            String Fname = sobj.nextLine();
            File fobj = new File(Fname);
            if(fobj.exists()){
                System.out.println("File already exists.");
            }
            else{
                fobj.createNewFile();
                System.out.println("file successfully created.");
            }
        }
        catch(IOException iobj){

        }
        catch(Exception eobj){

        }
    }
}
