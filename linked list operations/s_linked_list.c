****/only create simple linked list/****
#include<stdio.h>
#include<stdlib.h>

// self refrential structure [node]
 struct node{
     int  data;
     struct node *link;
 };
 int main(){
 struct node *head;
 struct node *second;
 
//  allocates heap memory
 head=(struct node *)malloc(sizeof(struct node));
 second=(struct node *)malloc(sizeof(struct node));
 
 head->data=01;
 head->link=second;
 
 second->data=02;
 second->link=NULL;
 
 printf("------------------------Output of the program-----------------------------------\n");
 printf("%d ",head->data);
 printf("%d",second->data);
 
}


------------------------Output of the program-----------------------------------
1 2

