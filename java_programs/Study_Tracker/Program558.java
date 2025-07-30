import java.util.*;
import java.time.LocalDate;
import java.io.*;

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
        if(dbObj.isEmpty()){
            System.out.println("------------------------------------------------------------");
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

    public void ExportCSV(){
        if(dbObj.isEmpty()){
            System.out.println("------------------------------------------------------------");
            System.out.println("Nothing to export as DB is empty.");
            System.out.println("------------------------------------------------------------");
            return;
        }
        // Create new CSV File
        String csvName = "MarvellousStudy.csv";
        try(FileWriter fwObj = new FileWriter(csvName)){
            // Write CSV header
            fwObj.write("Date,Subject,Duration,Description\n");

            // Travel Database
            for(StudyLog sobj: dbObj){
                // Write each record in CSV
                fwObj.write(sobj.getDate() +","+sobj.getSubject().replace(","," ")+","+sobj.getDuration()+","+sobj.getDescription().replace(","," ")+ "\n");
            }
            System.out.println("Log Created successfully.");
        }
        catch(Exception eobj){
            System.out.println("Exception occured while creating the CSV.");
            System.out.println("Report this issue to Marvellous Infosystem.");
        }
    }

    public void SummarybyDate(){
        if(dbObj.isEmpty()){
            System.out.println("------------------------------------------------------------");
            System.out.println("Nothing to export as DB is empty.");
            System.out.println("------------------------------------------------------------");
            return;
        }

        System.out.println("------------------------------------------------------------");
        System.out.println("------ Summary By Date from Marvellous Study Tracker. -----.");
        System.out.println("------------------------------------------------------------");

        TreeMap <LocalDate, Double> tobj = new TreeMap <LocalDate, Double> ();
        LocalDate lobj = null;
        double d, old;
        for(StudyLog sobj: dbObj){
            lobj = sobj.getDate();
            d = sobj.getDuration();
            if(tobj.containsKey(lobj)){
                old = tobj.get(lobj);
                tobj.put(lobj, d+old);
            }
            else{
                tobj.put(lobj, d);
            }
        }
        // Display the details as per the date
        System.out.println("------------------------------------------------------------");
        for(LocalDate llobj: tobj.keySet()){
            System.out.println("Date : "+llobj+ " Total Study "+tobj.get(llobj));
        }
        System.out.println("------------------------------------------------------------");
    }

    public void SummarybySubject(){
        if(dbObj.isEmpty()){
            System.out.println("------------------------------------------------------------");
            System.out.println("Nothing to export as DB is empty.");
            System.out.println("------------------------------------------------------------");
            return;
        }

        System.out.println("------------------------------------------------------------");
        System.out.println("------ Summary By Date from Marvellous Study Tracker. -----.");
        System.out.println("------------------------------------------------------------");

        TreeMap <String, Double> tobj = new TreeMap <String, Double> ();
        String strObj = null;
        double d, old;
        for(StudyLog sobj: dbObj){
            strObj = sobj.getSubject();
            d = sobj.getDuration();
            if(tobj.containsKey(strObj)){
                old = tobj.get(strObj);
                tobj.put(strObj, d+old);
            }
            else{
                tobj.put(strObj, d);
            }
        }
        // Display the details as per the date
        System.out.println("------------------------------------------------------------");
        for(String ssobj: tobj.keySet()){
            System.out.println("Subject : "+ssobj+ " Total Study "+tobj.get(ssobj));
        }
        System.out.println("------------------------------------------------------------");
    }
}

class Progra558{ // StudyTrackerStarter
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
                    stobj.SummarybyDate();
                    break;
                case 4:     // Summary of Study Log by Subject.
                    stobj.SummarybySubject();
                    break;
                case 5:     // Export Study Log to CSV.
                    stobj.ExportCSV();
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
