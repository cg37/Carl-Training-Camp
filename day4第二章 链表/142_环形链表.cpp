#include<iostream>
// #include 
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = fast;
        ListNode* index_1;
        ListNode* index_2;
        while (fast!=NULL && fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) {
                index_1 = fast;
                index_2 = head;
                while (index_1 != index_2) {
                    index_1 = index_1->next;
                    index_2 = index_2->next;
                }
                if(index_1 == index_2) {
                    return index_2;
                }   
            }
        }
        return NULL;
    }
};