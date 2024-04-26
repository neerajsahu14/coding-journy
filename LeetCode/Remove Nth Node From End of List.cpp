
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
   ListNode* removeNthFromEnd(ListNode* head, int n) {
       int length = 0;
       ListNode* temp = head;

       // Calculate the length of the linked list
       while (temp != nullptr) {
           length++;
           temp = temp->next;
       }

       // Edge case: If n is greater than the length, return original head
       if (n > length) {
           return head;
       }
       // If the node to be removed is the first node
       else if (n == length) {
           return head->next;
       } else {
           int difference = length - n;
           ListNode* current = head;
           ListNode* previous = nullptr;

           // Traverse to the node before the one to be removed
           for (int i = 0; i < difference; i++) {
               previous = current;
               current = current->next;
           }

           // Remove the nth node from the end
           previous->next = current->next;
       }

       // Return the modified head of the linked list
       return head;
   }
};

int main() {
   // Main function for other program logic goes here
   return 0;
}
