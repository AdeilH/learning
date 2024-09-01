#include <stdio.h>
#include <stdlib.h> 

// function pointer 

typedef int(*functionptr)(int, int);

int testFunctionPtr(functionptr fn){
    return fn(1 ,3);
}
int add(int a, int b){
    return a + b;
}

int main(){
    int a = 10;
    int* b = &a;

    printf("Address of A, %p, value of A %d \n", &a, a);
    printf("Address of B pointer: %p \n", b);

    // changing value of A through B

    *b = 11;
    // value of a
    printf("Address of A, %p, value of A %d \n", &a, a);

    char * word = "ABCD";
    printf("%s \n", word);

    // test function pointer
    printf("%d \n", testFunctionPtr(&add));
}   
