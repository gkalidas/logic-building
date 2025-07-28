import java.util.*;

class Progra542{
    public static void main(String A[]){
        ArrayList <Double> aobj = new ArrayList <Double> ();

        aobj.add(10.5);
        aobj.add(20.5);
        aobj.add(30.5);
        aobj.add(40.5);
        System.out.println(aobj);

        if(aobj.contains(20.5)){
            System.out.println("Element is present.");
        }
        else{
            System.out.println("Element is not present.");
        }

        aobj.remove(30.5);
        System.out.println(aobj);

        System.out.println("No of elements in Arraylist are : "+ aobj.size());

        for(Double dvalue: aobj){
            System.out.println(dvalue);
        }
        
    }
}