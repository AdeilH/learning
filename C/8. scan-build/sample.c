#include <stdlib.h>

int free_x(int *x){
    free(x);
}

int malloc_c(){
    int *c = (int *)malloc(sizeof(int));
    return *c; // garbage value
}

int main(){
    int *x = (int *) malloc(sizeof(int));
    free_x(x);
    free(x); // Double free

    int a;
    int z = a + 10;  // Undefined Behaviour

    for (int i = 0; i < 10; i++){
       malloc_c(); 
    }
}