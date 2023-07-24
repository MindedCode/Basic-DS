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
