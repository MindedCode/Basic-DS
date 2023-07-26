#include <stdio.h>

void display(int arr[], int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deletionAtFirst(int arr[], int size){
    int i=0;
    int delete = arr[i];
    for(;i<=size-1; i++ ){
        arr[i] = arr[i+1];
    }
    return delete;
}

int deletionAtIndex(int arr[], int size, int index){
    int d = arr[index];
    printf("%d element is deleted", d);
    for(int i=index; i<=size-1; i++){
        arr[i] = arr[i+1];
        // printf("%d %d \n", arr[i], arr[i+1]);
    }
    // printf("this is deleted element : ");
    return 0;
}

int deletionAtLast(int arr[], int *size){
    
    // printf("Deleted element: %d\n", arr[*size - 1]);
    *size = *size - 1;
    printf("deleted element : %d ", arr[*size]);
    // printf("deleted element : %d ", arr[*size+1]);

    return 0;
}

    // void deleteEnd(int arr[], int *s){
    //     int d = arr[*s-1];
    //     printf("%d", d);
    //     printf("\n");
    //     (*s)--;     // very important set the paranthesis
    // }

int main() {
    int arr[] = {1, 2, 3, 4, 5}, index = 2;

    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    printf("%d ", deletionAtFirst(arr, size));
    size--;
    display(arr, size);
    deletionAtIndex(arr, size, index);
    size--;
    display(arr, size);
    deletionAtLast(arr, &size);
    // size--;
    display(arr, size);
    

    
    return 0;
}



// final output is:
// 1 2 3 4 5 
// 1
// 2 3 4 5
// 4 element is deleted
// 2 3 5
// deleted element : 5
// 2 3







=========================================Second Part -======================================
    /******************************************************************************

                deleteion all operation in array

*******************************************************************************/
#include <stdio.h>

void Traverse(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteFirst(int arr[], int size){
    int d = arr[0];
    // if (size >= 10) {
    //     printf("\nArray is full. Cannot delete element.\n");
    //     return;
    // }
    for(int i = 0; i <= size-1; i++){
        arr[i] = arr[i+1];
    }
    
    printf("Deleted element in this array : %d\n", d);
}

void deleteAtIndex(int arr[], int size, int position){
    int d = arr[position];
    for(int i=position; i<=size-1; i++){
        arr[i] = arr[i+1];
    }
    
    printf("Deleted element in this array : %d\n", d);
    return;
}

void deleteAtEnd(int arr[], int *size){
    // int d = arr[size-1];
    // size--;
    *size = *size - 1;
    printf("Deleted element in this array : %d\n", arr[*size]);      /// used size array how to find nhi to last capacity vali element delete hoga
    
}

int main()
{
    int arr[10] = {1,2,3,4,5}, element = 23, index = 3;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ",arraySize);
    printf("Original array :\n");
    Traverse(arr, arraySize);
    
    printf("\ndeleteed element in First position");
    deleteFirst(arr, arraySize);
    // this arrsize is static so increase the arraySize +1
    arraySize--;
    Traverse(arr, arraySize);
    
    printf("\ndeleteed element At Index");
    deleteAtIndex(arr, arraySize, index);
    arraySize--;
    Traverse(arr, arraySize);
    
    printf("\ndeleteed element in End position\n");
    deleteAtEnd(arr, &arraySize);
    // arraySize--;
    Traverse(arr, arraySize);
    
    return 0;
}



Output is:

// Original array :
// 1 2 3 4 5 0 0 0 0 0 

// deleteed element in First positionDeleted element in this array : 1
// 2 3 4 5 0 0 0 0 0 

// deleteed element At IndexDeleted element in this array : 5
// 2 3 4 0 0 0 0 0 

// deleteed element in End position
// Deleted element in this array : 0
// 2 3 4 0 0 0 0 




