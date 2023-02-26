#include <stdio.h>
#include <stdlib.h>
//学生结构体: 姓名，成绩
struct student {
    char name[10];
    float score;
};
//定义别名为 Student
typedef struct student Student;//typedef 关键字，使用它来为类型取一个新的名字。

int main(void)
{
    //计算单个学生结构体(struct student == Student)的大小
    unsigned size = sizeof(Student);
    int count = 0;
    printf("有多少个学生？");
    scanf_s("%d", &count);
    Student * studs = (Student *)
        malloc(size * count);
    for (int i = 0; i < count; i++) {
        printf ("第%2d个学生：\n", i + 1);
        printf ("姓名：");
        scanf_s ("%s",(studs + i)->name);
        printf ("成绩：");
        scanf_s ("%d",&(studs + i)->score);
        putchar('\n');
        puts("---学生成绩一览表---");
        printf("name\tscore\n");
        for (int i = 0; i < count; i++) {
            printf("%s\t%.1f\n",(studs+i)->name,(studs+i)->score);
        }
    }
    free(studs);
    return 0;
}