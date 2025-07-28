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
        System.out.println(subject +" | "+duration +" | "+description +".");
    }
}
class Progra544{
    public static void main(String A[]){
        StudyLog sobj1 = new StudyLog("C", 2.5, "Pointer and Array.");
        StudyLog sobj2 = new StudyLog("C++", 2.0, "Polymorphism.");
        StudyLog sobj3 = new StudyLog("Java", 3.5, "Inheritance.");
        
        System.out.println(sobj1);
        System.out.println(sobj2);
        System.out.println(sobj3);

    }
}