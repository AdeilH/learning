#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *elements;
    int count;
    int capacity;
} vector; 

int main(){
    vector *p;
    // this is lost without freeing
    p = (vector *)malloc(sizeof(vector));

    // this is freed
    p = (vector *)malloc(sizeof(vector) *2);
    free(p);

    // this is lost definitely
    p = (vector *)malloc(sizeof(vector) * 3);

    return 0; 
}