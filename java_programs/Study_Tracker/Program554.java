import java.util.*;
import java.time.LocalDate;

// Done
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

class StudyTracker{
    // Data structure to hold data about study
    private ArrayList <StudyLog> dbObj = new ArrayList <StudyLog> ();

    public void InsertLog(){

        Scanner scannerObj = new Scanner(System.in);
        System.out.println("------------------------------------------------------------");
        System.out.println("-----Please enter the valid details of your study.----------");
        System.out.println("------------------------------------------------------------");

        LocalDate dateObj = LocalDate.now();
        System.out.println("Please provide the name of subject like c/cpp/java/os/ds.");
        String sub = scannerObj.nextLine();

        System.out.println("Enter the time period of your study in hours.");
        double dur = scannerObj.nextDouble();
        scannerObj.nextLine(); // flushing sathi he taklay

        System.out.println("Please provide the description about the study for future reference.");
        String desc = scannerObj.nextLine();

        StudyLog studyObj = new StudyLog(dateObj, sub, dur, desc);
        dbObj.add(studyObj);

        System.out.println("Study log stored successfully.");
        System.out.println("------------------------------------------------------------");
    }

    public void DisplayLog(){
        System.out.println("------------------------------------------------------------");
        if(dbObj.isEmpty()){
            System.out.println("Nothing to Display as DB is empty.");
            System.out.println("------------------------------------------------------------");
            return;
        }
        System.out.println("------------------------------------------------------------");
        System.out.println("------- Log report from Marvellous Study Tracker. ----------");

        for(StudyLog sobj: dbObj){
            System.out.println(sobj);
        }
        System.out.println("------------------------------------------------------------");
    }
}

class Progra554{ // StudyTrackerStarter
    public static void main(String A[]){
        StudyTracker stobj = new StudyTracker();
        stobj.DisplayLog();
        stobj.InsertLog();
        stobj.InsertLog();
        stobj.InsertLog();
        stobj.DisplayLog();
    }
}