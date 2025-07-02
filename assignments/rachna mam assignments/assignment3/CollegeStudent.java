package assignment3;

public class CollegeStudent extends Student {

    String collegeName;
    String year;

    public CollegeStudent(String name, String DOB, String studentId, String collegeName, String course) {
        super(name, DOB, studentId);
        this.collegeName = collegeName;
        this.year = course;
    }

    public void display() {
        super.display();
        System.out.println("College Name: " + collegeName);
        System.out.println("Year: " + year);
    }

}
