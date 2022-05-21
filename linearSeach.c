 ****/Linear Search of Array of the progrm/****
#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
     for(int i = 0; i < size; i++)
     {
          if(arr[i]==element)
          {
               return i;
          }
     }
     return -1;
}

int main()
{
int arr[]={1,2,4,5,6,7,8,89,65,4};
int size = sizeof(arr)/sizeof(int);
int element=65;
int searchIndex; 
searchIndex = linearSearch(arr,size,element);
printf("The element is %d was found at index %d ",element, searchIndex);
return 0;


}

The element is 65 was found at index 8 
