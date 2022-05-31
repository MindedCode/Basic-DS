****/insertion  at beginning node in linklist/****
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
