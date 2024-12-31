#include <stdio.h>
#include <stdlib.h>
struct List
{
    int data;
    struct List *next;
};

typedef struct List List;

List *create(int n)
{
    List *h = (List *)malloc(sizeof(List)),*p;
    int i;
    h->next = 0;
    printf("请输入%d个数据\n",n);
    for(i = 1;i <=n;i++)
    {
        p = (List *)malloc(sizeof(List));
        scanf("%d",&p->data);
        p->next = h->next;
        h->next = p;
    }
    return h;
}

void print(List *h)
{
    while(h->next)
    {
        printf("%d",h->next->data);
        h = h->next;
    }
}

int main()
{
    List *head;
    int n;
    printf("请输入想创建的链表的长度\n");
    scanf("%d",&n);
    head = create(n);
    print(head);
    return 0;
}