# Basic-DS
this folder use the basic  operation perform

# Create a linked list
include header file
#include <stdio.h>
And #include <stdlib> both r must used header file  
  
fistly write struct keyword **** (struct ...struct name...) 

#include <stdio.h>
#include < stdlib.h >
  struct node 
  {
    int data or info ;
    struct node *next or *link;
  }
  we has create the structure;
  
  now----
  allocate the memory size nodes
  __head used the such that start the making nodes __
  struct node *head=NULL
  temp = malloc(sizeof(struct node));
  
