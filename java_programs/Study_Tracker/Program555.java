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

class Progra555{ // StudyTrackerStarter
    public static void main(String A[]){
        StudyTracker stobj = new StudyTracker();
        System.out.println("------------------------------------------------------------");
        System.out.println("----- Welcome to Marvellous Study Tracker Application ------");
        System.out.println("------------------------------------------------------------");

        Scanner scannerObj = new Scanner(System.in);
        int iChoice = 0;
        do{
            System.out.println("Please select the appropriate option.");
            System.out.println("1 : Insert new Study Logs.");
            System.out.println("2 : View all Study Logs.");
            System.out.println("3 : Summary of Study Log by Day.");
            System.out.println("4 : Summary of Study Log by Subject.");
            System.out.println("5 : Export Study Log to csv.");
            System.out.println("6 : Exit.");

            iChoice = scannerObj.nextInt();

            switch(iChoice){
                case 1:     // Insert new Study Log into DB.
                    stobj.InsertLog();
                    break;
                case 2:     // View all Study Log
                    stobj.DisplayLog();
                    break;
                case 3:     // Summary of Study Log by Day.
                    break;
                case 4:     // Summary of Study Log by Subject.
                    break;
                case 5:     // Export Study Log to CSV.
                    break;
                case 6:     // Exit the application
                    System.out.println("------------------------------------------------------------");
                    System.out.println("---- Thank you for using Marvellous Study application. -----");
                    System.out.println("------------------------------------------------------------");
                    break;
                default:
                    System.out.println("Please enter valid option.");
            }
        }while(iChoice != 6);
    }
}