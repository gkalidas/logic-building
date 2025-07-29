import java.util.*;
import java.time.LocalDate;

class StudyLog{
    public LocalDate Date;
    public String Subject;
    public Double Duration;
    public String Description;
    

    public StudyLog(LocalDate A, String B, Double C, String D){
        this.Date = A;
        this.Subject = B;
        this.Duration = C;
        this.Description = D;
    }

    public void Display(){
        System.out.println();
    }

    @Override
    public String toString(){
        return Date + " | " +Subject +" | "+Duration +" | "+Description +".";
    }

    public LocalDate getDate(){
         return Date;
    }
    public String getSubject(){
        return Subject;
    }
    public Double getDuration(){
        return Duration;
    }
    public String getDescription(){
        return Description;
    }
}

class Progra552{
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
            System.out.println(sobj.getSubject());
            System.out.println(sobj.getDuration());
        }

        
    }
}