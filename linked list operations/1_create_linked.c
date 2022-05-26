****/create simple main function program of Linked list/****
#include <stdio.h>
#include <stdlib.h>

struct Node{
     int data;
     struct Node*next; 
};

//Traversal list
int create_list(struct Node*ptr){
    printf("Linked list element :\n");
     while(ptr!=NULL)
     {
          printf("%d ",ptr->data);
          ptr=ptr->next;
     }
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
return 0;
}


****/Output of Ppogram : /***
Linked list element :
7 11 13 14 15 
