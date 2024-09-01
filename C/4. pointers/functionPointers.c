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
    // test function pointer
    printf("%d \n", testFunctionPtr(&add));

    return 0;
}   
