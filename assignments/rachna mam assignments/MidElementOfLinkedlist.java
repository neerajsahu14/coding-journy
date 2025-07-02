import java.util.LinkedList;

public class MidElementOfLinkedlist {

    public static Integer findMiddle(LinkedList<Integer> list) {
        if (list.isEmpty()) {
            return null;
        }

        int middleIndex = list.size() / 2;
        return list.get(middleIndex);
    }

    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);

        // Find and print the middle element
        Integer middle = findMiddle(list);
        if (middle != null) {
            System.out.println("The middle element is: " + middle);
        } else {
            System.out.println("The linked list is empty.");
        }
    }
}
