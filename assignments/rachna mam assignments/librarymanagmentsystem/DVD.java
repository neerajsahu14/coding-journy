package librarymanagmentsystem;

public class DVD extends LibraryItem{
    //    this will inherit form library outcomes employed specifically attributes like grans, publications date, or director of each item type

    String director;
    // Constructor for Book class
    public DVD(String title, String author, String ISBN, String director, Boolean available) {
        super(title, author, ISBN, available);
        this.director = director;
    }
    // Method to display book details
    public void display() {
        super.display(); // Call the display method of the parent class
        System.out.println("Genre: " + director);
    }
}
