package assignment3;

public class Student extends Person {
    String studentId;

    public Student(String name, String DOB, String studentId) {
        this.name = name;
        this.DOB = DOB;
        this.studentId = studentId;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("DOB: " + DOB);
        System.out.println("Roll No: " + studentId);
    }
}
