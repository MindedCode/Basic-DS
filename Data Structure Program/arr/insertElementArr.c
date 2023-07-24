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



