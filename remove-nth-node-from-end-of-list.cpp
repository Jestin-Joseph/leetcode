#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //alternatively you cant keep dummy = head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = dummy;
        ListNode* sec = dummy;

        for(int i = 0; i <= n-1; i++){
            first = first->next;
        }

        while(first->next != nullptr){
            first = first->next;
            sec = sec->next;
        }
        //first will reach the last node and second will be at n nodes before the last//

        ListNode* toDelete = sec->next;
        sec->next = sec->next->next;
        delete toDelete;
        
        //  cout << "last Value: " << first->val << endl;
        // cout << "to delete: " << sec->next->next->val << endl;
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};

int main()
{
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int n = 2;
    
    ListNode* result = sol.removeNthFromEnd(head, n);
    
    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }
    // cout << "result: " << result->val << endl;
}