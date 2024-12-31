#include <stdio.h>
struct student
{
    int id;
    char name[20];
    int score1;
    int score2;
    int score3;
    int sum;
};

struct student input(struct student stu)
{
    printf("请输入学号：");
    scanf("%d",&stu.id);
    printf("请输入姓名：");
    scanf("%s",stu.name);
    printf("请输入三门课的成绩：");
    scanf("%d %d %d",&stu.score1,&stu.score2,&stu.score3);
    stu.sum = stu.score1 + stu.score2 + stu.score3;
    return stu;
}

void max(struct student stu1,struct student stu2,struct student stu3,struct student stu4,struct student stu5,struct student *p)
{
    if(stu2.sum > p->sum)
        p = &stu2;
    if(stu3.sum > p->sum)
        p = &stu3;
    if(stu4.sum > p->sum)
        p = &stu4;
    if(stu5.sum > p->sum)
        p = &stu5;
}

int main()
{
    struct student stu1,stu2,stu3,stu4,stu5,*p = &stu1;
    int sum,avg;
    stu1 = input(stu1);
    stu2 = input(stu2);
    stu3 = input(stu3);
    stu4 = input(stu4);
    stu5 = input(stu5);
    sum = stu1.sum + stu2.sum + stu3.sum + stu4.sum + stu5.sum;
    avg = sum/5;
    printf("五个学生的平均分是：%d\n",avg);
    printf("分数最高的学生是%s，学号是%d，总分是%d\n",p->name,p->id,p->sum);
    return 0;
}