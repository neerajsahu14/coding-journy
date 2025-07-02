package assisment;

public class Main {
//    create objects ofd each classes invoke and test methods that are available in each class
    public static void main(String[] args) {
        Person person = new Person();
        person.name = "Dev Sahu";
        person.DOB = "01/01/1990";

        Student student = new Student("Neeraj Sahu", "02/02/1995", "S123");
        student.display();

        CollegeStudent collegeStudent = new CollegeStudent("Sumit", "03/03/2000", "C456", "XYZ University", "Computer Science");
        collegeStudent.display();

        Teacher teacher = new Teacher("Dr. Rakesh", "04/04/1985", "Mathematics", 50000.0);
        teacher.display();
    }
}
