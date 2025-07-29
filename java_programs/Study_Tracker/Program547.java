import java.util.*;


class StudyLog{
    public String subject;
    public Double duration;
    public String description;

    public StudyLog(String A, Double B, String C){
        this.subject = A;
        this.duration = B;
        this.description = C;
    }

    public void Display(){
        System.out.println();
    }

    @Override
    public String toString(){
        return subject +" | "+duration +" | "+description +".";
    }
}

class Progra547{
    public static void main(String A[]){
        StudyLog sobj1 = new StudyLog("C", 2.5, "Pointer and Array.");
        StudyLog sobj2 = new StudyLog("C++", 2.0, "Polymorphism.");
        StudyLog sobj3 = new StudyLog("Java", 3.5, "Inheritance.");
        StudyLog sobj4 = new StudyLog("C", 1.5, "Pointer and Array.");
        StudyLog sobj5 = new StudyLog("C", 1.0, "Pointer and Array.");

        ArrayList <StudyLog> aobj = new ArrayList <StudyLog> ();

        aobj.add(sobj1);
        aobj.add(sobj2);
        aobj.add(sobj3);
        aobj.add(sobj4);
        aobj.add(sobj5);

        for(StudyLog sobj: aobj){
            System.out.println(sobj);
        }

    }
}