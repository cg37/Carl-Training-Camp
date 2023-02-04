struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution { 
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0); //虚拟头节点
        dummyHead->next = head;
        ListNode* cur;
        cur = dummyHead;
        ListNode* temp_1;
        ListNode* temp_3;
        while(cur->next != nullptr && cur->next->next != nullptr) {
            temp_1 = cur->next;
            temp_3 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next=temp_1;
            cur->next->next->next = temp_1;

            cur = cur->next->next;
        }
        return dummyHead->next;
    }
};