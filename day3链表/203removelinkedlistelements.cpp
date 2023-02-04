#include <iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//创建一个单链表
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head -> val == val) {
            ListNode* tmp = head;
            head = head -> next;
            delete tmp;
        }
        ListNode* cur = head;
        while(cur != NULL && cur->next!=NULL) {
            if(cur->next->val == val) {
                ListNode* tmp = cur->next; 
                cur->next = cur->next->next;
                delete tmp ;
            } else {
                cur = cur ->next;
            }
        }
    return head;
    }
    //虚拟头节点
    ListNode* removeElements_1(ListNode* head, int val) {
        ListNode *dummyHead = new ListNode(0); //设置虚拟头节点
        dummyHead->next = head;             //虚拟头节点指向head
        ListNode* cur = dummyHead;
        while(cur->next !=NULL) {
            if(cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};
