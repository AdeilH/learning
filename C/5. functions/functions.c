#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
// generic swap function

void swap(void *a, void *b, int size){
    void * tmp;
    tmp = malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
    return; 
}

long long recursionFactorial(long n){
    if (n < 0){
        return 0;
    }
    else if (n == 0 || n == 1){
        return 1;
    } 
    else{
        return recursionFactorial(n-1) * n;
    }
}

unsigned long long tailRecursionFactorial(long n, long a){
    if (n < 0){
        return 0;
    }
    else if (n == 0 ){
        return 1;
    } 
    else if (n == 1) {
        return a; 
    }
    else{
        return tailRecursionFactorial(n-1, n*a);
    }
}

int main(){
    printf("%lld \n", recursionFactorial(20));
    printf("%lld \n", tailRecursionFactorial(20, 1));
    int a = 10;
    int b = 20; 
    printf("a = %d, b = %d \n", a, b);
    swap((void *)&a, (void *)&b, sizeof(int));
    printf("a = %d, b = %d \n", a, b);

    return 0;


}