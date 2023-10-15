#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertAtBeginning(struct node **head,int data){
    struct node*newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next = *head;
    *head = newNode;
}
void display(struct node *node){
    while(node!=NULL){
        printf("%d",node->data);
    node = node->next; 
    }
printf("\n");    
}


int main()
{
  

struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
struct node *four = NULL;
struct node *five = NULL;

printf("%zu\n",sizeof(struct node));
printf("value of one:%p\n",(void*)one);
one =(struct node*)malloc(sizeof(struct node));
two = (struct node*)malloc(sizeof(struct node));
three = (struct node*)malloc(sizeof(struct node));
four = (struct node*)malloc(sizeof(struct node));
five =(struct node*)malloc(sizeof(struct node));

if(one==NULL||two==NULL||three==NULL||four==NULL||five==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}
one->data = 1;
two->data = 2;
three->data = 3;
four->data = 4;
five->data = 5;

head = one;
one->next=two;
two->next=three;
three->next= four;
four->next=five;
five->next=NULL;




printf("NULL\n");
printf("LinkList :");
display(head);
insertAtBeginning(&head,6);
printf("After inserting:\n");
printf("Linklist :");
return 0;
}





