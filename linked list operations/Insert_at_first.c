****/insertion  at beginning node in linklist/****
// 1-----------------------
#include <stdio.h>
#include <stdlib.h>

struct Node{
     int data;
     struct Node*next; 
};

//Traversal list
int create_list(struct Node*ptr){
     while(ptr!=NULL)
     {
          printf("Element= %d\n ",ptr->data);
          ptr=ptr->next;
     }
}

// insert_at_first 
struct Node* insert_at_first(struct Node* head, int data)
{
     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
     ptr->next=head;
     ptr->data=data;
     return ptr;
}

int main()
{
     struct Node * head;
     struct Node * second;
     struct Node * third;
     struct Node * forth;
     struct Node * fifth;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
forth = (struct Node*)malloc(sizeof(struct Node));
fifth = (struct Node*)malloc(sizeof(struct Node));
//Link nodes
head->data=7;
head->next=second;

second->data = 11;
second->next = third;

third->data = 13;
third -> next = forth;

forth->data = 14;
forth->next = fifth;

fifth->data = 15;
fifth->next = NULL;

create_list(head);
head = insert_at_first(head, 56);
printf("Insert at first Element\n ");
create_list(head);

return 0;
}

Output Of the program :

Element= 7
 Element= 11
 Element= 13
 Element= 14
 Element= 15
 Insert at first Element
 Element= 56
 Element= 7
 Element= 11
 Element= 13
 Element= 14
 Element= 15
 
 
 2------------------------------
 #include<stdio.h>
#include<stdlib.h>
 struct node{
     int data;
     struct node *next;
 };
 
//  struct node *insert(struct node *head,int data){
struct node *insert(struct node *head){
    int d = 2;
     struct node *newnode=(struct node *)malloc(sizeof(struct node));
     
    //  newnode->data=data;
    newnode->data=d;
     newnode->next=head;
     head=newnode;
     return head;
 }
 
 int print(struct node *ptr){
     while(ptr!=0){
         printf("%d \n", ptr->data);
         ptr=ptr->next;
     }
 }
 
int main (){
    printf("Element : \n");
    struct node *head;
    head= (struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=0;
    
    print(head);
    // printf("Element");
    head=insert(head);
    // head=insert(head,2);
    printf("inserted Element\n");
    print(head);
}

Output Of the program :
Element : 1  //this is a first position
inserted Element
2  //insert at first position
1  // this is a now second position
