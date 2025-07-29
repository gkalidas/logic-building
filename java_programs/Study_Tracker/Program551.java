import java.util.*;
import java.time.LocalDate;

class StudyLog{
    public LocalDate Date;
    public String Subject;
    public Double duration;
    public String description;
    

    public StudyLog(LocalDate A, String B, Double C, String D){
        this.Date = A;
        this.Subject = B;
        this.duration = C;
        this.description = D;
    }

    public void Display(){
        System.out.println();
    }

    @Override
    public String toString(){
        return Date + " | " +Subject +" | "+duration +" | "+description +".";
    }
}

class Progra551{
    public static void main(String A[]){
        LocalDate lobj = LocalDate.now();
        
        StudyLog sobj1 = new StudyLog(LocalDate.now(), "C", 2.5, "Pointer and Array.");
        StudyLog sobj2 = new StudyLog(LocalDate.now(), "C++", 2.0, "Polymorphism.");
        StudyLog sobj3 = new StudyLog(LocalDate.now(), "Java", 3.5, "Inheritance.");
        StudyLog sobj4 = new StudyLog(LocalDate.now(), "C", 1.5, "Pointer and Array.");
        StudyLog sobj5 = new StudyLog(LocalDate.now(), "C", 1.0, "Pointer and Array.");

        ArrayList <StudyLog> aobj = new ArrayList <StudyLog> ();

        aobj.add(sobj1);
        aobj.add(sobj2);
        aobj.add(sobj3);
        aobj.add(sobj4);
        aobj.add(sobj5);

        for(StudyLog sobj: aobj){
            // if((sobj.subject).equals("C")){
            //     System.out.println(sobj);
            // }
            if((sobj.duration) > 1.5){
                System.out.println(sobj);
            }
        }

        
    }
}