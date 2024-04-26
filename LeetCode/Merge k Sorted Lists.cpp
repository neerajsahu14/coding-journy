#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Structure for singly-linked list
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    class compare
    {
    public:
        bool operator()(ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        }
    };

    ListNode *mergeKLists(std::vector<ListNode *> &lists)
    {
        std::priority_queue<ListNode *, std::vector<ListNode *>, compare> minh;
        int k = lists.size();
        if (k == 0)
            return nullptr;
        for (int i = 0; i < k; i++)
        {
            if (lists[i] != nullptr)
            {
                minh.push(lists[i]);
            }
        }

        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        while (!minh.empty())
        {
            ListNode *temp = minh.top();
            minh.pop();
            if (temp->next != nullptr)
            {
                minh.push(temp->next);
            }
            if (head == nullptr)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }

        return head;
    }
};

int main()
{
    // Create lists
    ListNode *list1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode *list3 = new ListNode(2, new ListNode(6));

    // Push lists into a vector
    std::vector<ListNode *> lists = {list1, list2, list3};

    // Create the solution object
    Solution sol;

    // Merge the lists
    ListNode *mergedList = sol.mergeKLists(lists);

    // Print the merged list
    while (mergedList != nullptr)
    {
        std::cout << mergedList->val;
        mergedList = mergedList->next;
        if (mergedList != nullptr)
        {
            std::cout << " -> ";
        }
    }

    return 0;
}
