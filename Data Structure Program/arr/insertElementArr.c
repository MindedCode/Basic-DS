#include<stdio.h>
#include<conio.h>

void display(int arr[], int n){

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");   // for nextline function call 
}
// int indInsertion(int arr[], int size, int element, int index, int capacity ){
//     if(size >= capacity){
//         return -1;
//         printf("size as grater than capacity");
//     }
//     else{

//         for(int i = size-1; i>= index; i--){
//             arr[i+1] =  arr[i];
//         }
//         arr[index] = element;
//         printf("inserted element : %d\n", element);
//         return 1;
//     }
// }

// int insertAtFirst(int arr[], int size, int element, int capacity){
//     if(size >= capacity){
//         return -1;
//     }
//     else{
//         for(int i=size-1; i>=0; i--){
//             arr[i+1] = arr[i];
//         }
//         arr[0] = element;
//     }
// }

int insertAtEnd(int arr[], int size, int element, int capacity){
    if(size >= capacity){
        return -1;
    }
    arr[size] = element;
    printf("display %d\n", arr[size]);
    getch();
    return 1;
}

int main(){

    int arr[15] = {1,2,3,4,5,6,7,8,9};
    int size = 9, element = 43, index = 7, capacity = 15; 
    display(arr, size); 
    // indInsertion(arr, size, element, index, capacity);
    // size+=1;
    // display(arr, size); 

    // insertAtFirst(arr, size, element, capacity);
    // size+=1;
    // display(arr, size); 

    insertAtEnd(arr, size, element, capacity);
    size+=1;
    display(arr, size); 
    return 0;
}



// // final output is:
// 1 2 3 4 5 6 7 8 9 
// inserted element : 43
// 1 2 3 4 5 6 7 43 8 9
// 43 1 2 3 4 5 6 7 43 8 9
// display 43
// 43 1 2 3 4 5 6 7 43 8 9 43 

















==================================Second Part========================================

    /******************************************************************************

                Insertion all operation in array

*******************************************************************************/
#include <stdio.h>

void Traverse(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertFirst(int arr[], int size, int item){
    // int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = size - 1; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = item;
    printf("\n");
}

void insertAtIndex(int arr[], int size, int position, int item){
    for(int i=size-1; i>=position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = item;
    printf("\n");
    return;
}

void insertAtEnd(int arr[], int size, int element){
    arr[size] = element;
    printf("\n");
}

int main()
{
    int arr[5] = {1,2,3,4,5}, element = 23, index = 3;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ",arraySize);
    printf("Original array :\n");
    Traverse(arr, arraySize);
    
    printf("\nInserted element in First position");
    insertFirst(arr, arraySize, element);
    // this arrsize is static so increase the arraySize +1
    arraySize++;
    Traverse(arr, arraySize);
    
    printf("\nInserted element At Index");
    insertAtIndex(arr, arraySize, index, element);
    arraySize++;
    Traverse(arr, arraySize);
    
    printf("\nInserted element in End position\n");
    insertAtEnd(arr, arraySize, element);
    arraySize++;
    Traverse(arr, arraySize);
    
    return 0;
}


Output is:
// Original array :
// 1 2 3 4 5 

// Inserted element in First position
// 23 1 2 3 4 5 

// Inserted element At Index
// 23 1 2 23 3 4 5 

// Inserted element in End position

// 23 1 2 23 3 4 5 23 
// *** stack smashing detected ***: terminated   //error  hai kya ?








