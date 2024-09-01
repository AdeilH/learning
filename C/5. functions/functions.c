#include <stdio.h>

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
    return 0;
}