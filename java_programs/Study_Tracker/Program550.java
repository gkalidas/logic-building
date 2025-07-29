import java.util.*;
import java.time.LocalDate;

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

class Progra550{
    public static void main(String A[]){
        LocalDate lobj = LocalDate.now();
        System.out.println(lobj);
    }
}