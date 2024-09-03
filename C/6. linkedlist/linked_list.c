#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef void(*Destructor)(void * data);

typedef struct _node{
    void * data;
    struct _node *next;
} node;

typedef struct _LinkedList{
    int size;

    Destructor destructor;

    node* head;
    node* tail;
} LinkedList;

void initList(LinkedList *list, Destructor destructor){
    list->size = 0;
    list->destructor = destructor;
    list->head = NULL;
    list->tail = NULL;
}

int addToList(LinkedList *list, node *nodeToAddAfter, void *dataToAdd){
    node *nodeToAdd;
    nodeToAdd = (node *)malloc(sizeof(node));
    if (nodeToAdd == NULL){
        return -1; 
    }
    nodeToAdd->data = dataToAdd;
    // Insert to Head
    if (nodeToAddAfter == NULL){
        if (list->size == 0){
            list->tail = nodeToAdd;
        }
        nodeToAdd->next = list->head;
        list->head = nodeToAdd;
    }else{
        if (nodeToAddAfter->next == NULL){
            list->tail = nodeToAdd;
        }
        nodeToAdd->next = nodeToAddAfter->next;
        nodeToAddAfter->next = nodeToAdd;
    }

    list->size++;
    return 0;
}

int removeFromList(LinkedList *list, node* nodeToRemoveAfter, void **dataFromDeletedNode){
    node * oldNode;
    if(list->size == 0){
        return -1;
    }
    
    if(nodeToRemoveAfter == NULL){
        *dataFromDeletedNode = list->head->data;
        oldNode = list->head;
        list->head = list->head->next;
        if (list->size == 1){
            list->tail == NULL;
        }
    }else{
       
        *dataFromDeletedNode = nodeToRemoveAfter->next->data;
        oldNode = nodeToRemoveAfter->next;
        nodeToRemoveAfter->next = nodeToRemoveAfter->next->next;
        if(nodeToRemoveAfter->next == NULL){
            list->tail = nodeToRemoveAfter;
        }
    }

    free(oldNode);
    list->size--;
    return 0; 
}

void destroyList(LinkedList *list){
    void *data;
    if (list->destructor == NULL){
        // throw an error
        return;
    }
    while(list->size > 0){
        if(removeFromList(list, NULL, (void**)&data)==0){
            list->destructor(data);
        }
    }
    memset(list, 0, sizeof(LinkedList));
    return; 
}

void destructorInt(void *data){
    free((int *)data);
}

int main(){
    LinkedList* list;
    list = (LinkedList *)malloc(sizeof(LinkedList));
    initList(list, destructorInt);
    int * data;
    data = (int*)malloc(sizeof(int));
    *data = 100; 
    addToList(list, NULL, (void *)data);
    printf("%d\n", *(int*)list->tail->data);
    int * data2;
    data2 = (int*)malloc(sizeof(int));
    *data2 = 200; 
    addToList(list, list->head, (void *)data2);
    printf("%d\n", *(int*)list->tail->data);
    int * data3;
    data3 = (int*)malloc(sizeof(int));
    removeFromList(list, list->head, (void*)&data3);
    printf("%d\n", *data3);

    destroyList(list);
    printf("%d\n", list->size);
    return 0; 
}