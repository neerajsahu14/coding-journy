package librarymanagmentsystem;

public class Magazine extends LibraryItem {
    String publicationDate;
    // Constructor for Book class
    public Magazine(String title, String author, String ISBN, String publicationDate, Boolean available) {
        super(title, author, ISBN, available);
        this.publicationDate = publicationDate;
    }
    // Method to display book details
    public void display() {
        super.display(); // Call the display method of the parent class
        System.out.println("Genre: " + publicationDate);
    }
}
