#include <iostream>


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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* dummyHead = new ListNode(0);
       ListNode* p = l1, *q = l2, *curr = dummyHead;
       int carry = 0;
       while (p != nullptr || q != nullptr) {
           int x = (p != nullptr) ? p->val : 0;
           int y = (q != nullptr) ? q->val : 0;
           int sum = carry + x + y;
           carry = sum / 10;
           curr->next = new ListNode(sum % 10);
           curr = curr->next;
           if (p != nullptr) p = p->next;
           if (q != nullptr) q = q->next;
       }
       if (carry > 0) {
           curr->next = new ListNode(carry);
       }
       return dummyHead->next;
   }
};

// The main function is created to test the `addTwoNumbers` function.

int main() {
   // Create test cases
   ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
   ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

   // Call the addTwoNumbers function
   Solution solution;
   ListNode* result = solution.addTwoNumbers(l1, l2);

   // Output the result
   while (result != nullptr) {
       std::cout << result->val;
       if (result->next != nullptr) {
           std::cout << " -> ";
       }
       result = result->next;
   }

   return 0;
}
