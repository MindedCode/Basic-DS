****/Deletion an array and traversal/****
#include<stdio.h>

void deletionArr(int arr[], int size, int index )
{

     // if(size>=capacity){
     //      printf("Index is not present\n");
     // }
     for(int i=index; i>=size-1; i++)
     {
          arr[i]=arr[i+1];
     }
}

void displayArr(int arr[], int n)
{
     int i=0;
     for( i=0; i<n; i++)
     {
          printf("%d ",arr[i]);
     }
     printf("\n");
}
int main(){
     int arr[100]={12,55,77,87};
     printf("Privious Output of the program ::\n");
     int size=4, index=1;
     displayArr(arr,4);
     printf("Output of Deletion function:\n");
     deletionArr(arr, size, index );
     size-=1;
     displayArr(arr,size);
     return 0;
}

Privious Output of the program ::
12 55 77 87
Output of Deletion function:
12 55 77 
