****/"This is program of Index Insertion function. It is program of insertion and traversal"/****
#include<stdio.h>
//Program of Index Insertion
void indInsertArr(int arr[], int size, int element, int capacity, int index )
// void indInsertArr(int arr[], int size, int capacity)
{

     if(size>=capacity){
          printf("array is full\n");
     }
     for(int i=size-1; i>=index; i--)
     {
          arr[i+1]=arr[i];
     }
     arr[index]=element;
     // return index;
    //  printf("success insertion\n");}
}
//Program of the Traversal
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
     int size=4, element=45, index=3;
     displayArr(arr,4);
     printf("Output of inserted function:\n");
     indInsertArr(arr, size, element, 100, index );
     size+=1;
     displayArr(arr,size);
     return 0;

}


Privious Output of the program ::
12 55 77 87 
Output of inserted function:
12 55 77 45 87
