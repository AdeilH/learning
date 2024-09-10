#include <stdlib.h>
#include <stdio.h> 
int main(){
    int a = 10;
    int *address_a = &a;
    printf("%p\n", address_a);
    printf("%d\n", *address_a);

    int * heap_a = (int *)malloc(sizeof(int));

    printf("%p\n", heap_a);

    heap_a = (int *)realloc(heap_a, sizeof(int) * 100);

    printf("%p\n", heap_a);

    return 0;
}