#include<stdio.h>
#include<stdlib.h>


struct Arr{
    int Total_size;
    int Used_size;
    int *ptr;   // define the assign the all struct var address
};

void createArr(struct Arr *p, int totalS, int usedS){
    printf("New Created Arr : ");
    p->Total_size = totalS;
    p->Used_size = usedS;
    p->ptr = (int *)malloc(totalS *sizeof(int));
}

void showNewArr(struct Arr *p, int us){
    if(p->Used_size == 0){
        printf("New Array is empty\n");
    }
    printf("\nRemain Arr : ");
    for(int i=0; i<p->Used_size; i++){
        printf("%d ",p->ptr[i]);
    }
    printf("\n");
}

void setVal(struct Arr *p, int us){
    printf("Set Array value : ");
    for(int i=0; i<=p->Used_size-1; i++){
        printf("%d ", i+1);
        (p->ptr)[i] = i+1; 
    }
    
    printf("\n");
}

void delVal(struct Arr *p, int us, int posi){
    
    int d1 = (p->ptr)[0];
    int d2 = (p->ptr)[posi];
    int d3 = (p->ptr)[p->Used_size-1];
    
    printf("Remove at first : ");
    for(int i=0; i<=p->Used_size-1; i++){
        (p->ptr)[i] = (p->ptr)[i+1];
    }
    p->Used_size--;
    printf("Remove : %d", d1);
    printf("\n");
    
    
    printf("Remove at mid : ");
    for(int i=posi; i<=p->Used_size-1; i++){
        (p->ptr)[i] = (p->ptr)[i+1];
    }
    p->Used_size--;
    printf("Remove : %d", d2);
    printf("\n");
    
    printf("Remove at last : ");
    p->Used_size--;
    printf("Remove %d", d3);
    
}

int main(){
    struct Arr marks;   // struct type ka var hai
    int tSiz = 5;
    int uSiz = 4;
    
    createArr(&marks, tSiz, uSiz);
    showNewArr(&marks, uSiz);
    
    printf("\n");
    
    setVal(&marks, uSiz);
    showNewArr(&marks, uSiz);
    
    printf("\n");
    int index = 1;
    delVal(&marks, uSiz, index);
    printf("\n");
    // uSiz--;
    showNewArr(&marks, uSiz);
    
    printf("\n");
    
    setVal(&marks, uSiz);
    showNewArr(&marks, uSiz);
    
    printf("\n");
    // int index = 1;
    delVal(&marks, uSiz, index);
    showNewArr(&marks, uSiz);
    
    printf("\n");
    // int index = 1;
    delVal(&marks, uSiz, index);
    showNewArr(&marks, uSiz);
    
    delVal(&marks, uSiz, index);
    showNewArr(&marks, uSiz);
    
}



Output is:
// New Created Arr : 
// Remain Arr : 0 0 0 0 

// Set Array value : 1 2 3 4 

// Remain Arr : 1 2 3 4 

// Remove at first : Remove : 1
// Remove at mid : Remove : 2
// Remove at last : Remove 4

// Remain Arr : 2 

// Set Array value : 1 

// Remain Arr : 1 

// Remove at first : Remove : 1
// Remove at mid : Remove : 4
// Remove at last : Remove 1
// Remain Arr : 

// Remove at first : Remove : 4
// Remove at mid : Remove : 4
// Remove at last : Remove 0
// Remain Arr : 
// Remove at first : Remove : 4
// Remove at mid : Remove : 4
// Remove at last : Remove 0
// Remain Arr : 
