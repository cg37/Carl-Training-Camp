#include <iostream>
using namespace std;
class MyLinkedList {
public:

    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int x):val(x), next(nullptr){}
    };
    MyLinkedList() {
        _dummyNode = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) { //获取链表中第 index 个节点的值。如果索引无效，则返回-1。
        if(index > (_size-1) || index < 0) {
            return -1;
        }

        LinkedNode* cur = _dummyNode->next;
        while(index--) {
            cur = cur->next;
        }
        return cur->val;
    }
    /*
        在链表的第一个元素之前添加一个值为 val 的节点。
        插入后，新节点将成为链表的第一个节点。
    */
    void addAtHead(int val) { 
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = _dummyNode->next;
        _dummyNode->next = newNode;
        _size++;
    }
    //将值为 val 的节点追加到链表的最后一个元素。
    void addAtTail(int val) {  
        LinkedNode* tailNode = new LinkedNode(val);
        LinkedNode* cur = _dummyNode;
        while(cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = tailNode;
        _size++;
    }

    /*
        在链表中的第 index 个节点之前添加值为 val  的节点。
        如果 index 等于链表的长度，则该节点将附加到链表的末尾。
        如果 index 大于链表长度，则不会插入节点。
        如果index小于0，则在头部插入节点。
    */
    void addAtIndex(int index, int val) { 
    
        if(index>_size) {
            return;
        }
            
        if(index<0) {
            index = 0;
        }
        LinkedNode* indexNode = new LinkedNode(val);
        LinkedNode* cur = _dummyNode;
        while(index) {
            cur=cur->next;
            index--;
        }
        indexNode->next = cur->next;
        cur->next = indexNode;
        _size++;
    }
    /*
        如果索引 index 有效，则删除链表中的第 index 个节点。
    */
    void deleteAtIndex(int index) {
        if(index >= _size|| index <0) {
            return;
        }
        LinkedNode* cur = _dummyNode;
        while(index) {
            cur = cur ->next;
            index--;
        }
        LinkedNode* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        _size--;
    }
    void printLinkedList(){
        LinkedNode* cur = _dummyNode;
        while(cur->next != nullptr) {
            cout<< cur->next->val<<" ";
            cur = cur->next;
        } 
        cout<<endl;
    }
private:
    int _size;
    LinkedNode* _dummyNode;
};