#include <iostream>
#include <stdlib.h>
//#include <>
using namespace std;
struct ListNode {  //构建节点
    int val;        //节点上存储的元素
    struct ListNode *next; //指向下一个节点的指针
    //ListNode(int x) :val(x), next(NULL){} // 节点的构造函数，可以省略，cpp默认生成
}; 
struct ListNode * createList()
{
    //创建表头,
    struct ListNode* headNode = (struct ListNode*)malloc(sizeof(ListNode));
    headNode->next = NULL;
    return headNode;
};
struct Node* createNode(int data)

int main() {
    ListNode* head = NULL; 
}