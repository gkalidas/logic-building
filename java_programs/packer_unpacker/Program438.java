import java.util.*;
import java.io.*;

class Program438{

    public static void main(String A[])
    {
        try{
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the name of the file that you want to open.");
            String Fname = sobj.nextLine();
            File fobj = new File(Fname);
            if(fobj.exists()){
                FileInputStream fiobj = new FileInputStream(fobj);

                byte Arr[] = new byte[10];
                fiobj.read(Arr);
                System.out.println("Data from file is "+ Arr);
                
            }
            else{
                System.out.println("file not present in current directory.");
                return; // return value of main in java is void.
            }
        }
        catch(IOException iobj){

        }
        catch(Exception eobj){

        }
    }
}
