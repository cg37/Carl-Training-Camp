#include <stdio.h>
#include <stdlib.h>
//学生结构体: 姓名，成绩
struct student {
    char name[10];
    float score;
};
//定义别名为 Student
typedef struct student Student;//typedef 关键字，使用它来为类型取一个新的名字。
#include <stdio.h>
int main(void)
{
    //计算单个学生结构体(struct student == Student)的大小
    int a[6] = {1,3,5,7,9,11}; 
    int *b = a + sizeof(int);
    printf("%d", *b);

    return 0;
}