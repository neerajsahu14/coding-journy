package librarymanagmentsystem;

public class Book extends LibraryItem {
//    this will inherit form library outcomes employed specifically attributes like grans, publications date, or director of each item type

    String genre;
    // Constructor for Book class
    public Book(String title, String author, String ISBN, String genre, Boolean available) {
        super(title, author, ISBN, available);
        this.genre = genre;
    }
    // Method to display book details
    public void display() {
        super.display(); // Call the display method of the parent class
        System.out.println("Genre: " + genre);
    }

}
