package librarymanagmentsystem;

public class LibraryItem {
    String title;
    String author;
    String ISBN;
    boolean isAvailable;

    public LibraryItem(String title, String author, String ISBN, boolean isAvailable) {
        this.title = title;
        this.author = author;
        this.ISBN = ISBN;
        this.isAvailable = isAvailable; // By default, the item is available
    }

    public void display() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("ISBN: " + ISBN);
        System.out.println("Available: " + (isAvailable ? "Yes" : "No"));
    }
}
