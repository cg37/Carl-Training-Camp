//删除倒数第N个节点
#include <iostream>
using namespace std;
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
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* fast;
        ListNode* slow;
        fast = dummyHead;
        slow = dummyHead;

        ListNode* cur;
        cur = dummyHead;

        while(n-- && fast!=NULL) {
            fast = fast->next;
        }
        fast = fast->next;
        while(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummyHead->next;
    }
};









