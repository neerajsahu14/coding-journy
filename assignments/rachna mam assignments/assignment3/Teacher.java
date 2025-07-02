package assisment;

public class Teacher extends Person {
    String subject;
    Double salary;

    public Teacher(String name, String DOB, String subject, Double salary) {
        this.name = name;
        this.DOB = DOB;
        this.subject = subject;
        this.salary = salary;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("DOB: " + DOB);
        System.out.println("Subject: " + subject);
        System.out.println("Salary: " + salary);
    }
}
