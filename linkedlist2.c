#include<stdio.h>
#include<stdlib>
struct node
{
int value;
struct node *next;
};
void printlinkedlist(struct node *p)
{
while(p!=NULL)
{
print("%d",p->value);
p=p->next;
}
}
int main()
{
struct node *head;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));
one->value=1;
two->value=2;
three->value=3;
one->next=two;
two->next=three;
three->next=NULL;
head=one;
printlinkedlist(head);
}




