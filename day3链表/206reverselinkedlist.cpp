/**
 * 
 */

//Definition for singly-linked list.
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* cur;
        cur = head;
        ListNode* pre;
        pre = NULL;
        while(cur) { //cur指向NULL，遍历结束
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
    ListNode* reverse(ListNode* pre, ListNode* cur) {//专门翻转链表
        if (cur==NULL) {
            return;
        }
        ListNode* temp;
        temp = cur->next;
        cur->next = pre;

        return reverse(cur, temp);
    }
    ListNode* reverseList_1(ListNode* head) {
        reverse(NULL,head);
    }
};