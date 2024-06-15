#include "linked-list.h"
#include <stdlib.h>
#include <stdio.h>


struct List *list_create()
{
    //TODO implement

    struct List *list ={malloc(sizeof(struct List ))};
   
    return   list;
}

status list_append(struct List *list, int value)
{
    //TODO implement
    if(list == NULL){return -1;}

    struct ListNode *ListNode = {malloc(sizeof(struct ListNode))};
    ListNode->value = value;
    ListNode->next = NULL;
    
    struct ListNode *current = list->first;
    if(current == NULL){
        list->first = ListNode;
        return 1;
    }
    while (current->next!= NULL) {
        current = current->next;
    }
    current->next = ListNode;
    return 1;
}

int list_length(struct List *list)
{
    //TODO implement
    if(list == NULL){return -1;}
    int i =0;
    struct ListNode *current = list->first;
    
    if (current == NULL){return 0;}
    while(current->next!= NULL){
        i = i+1;
        current = current->next;
    }
    
    return i+1;
}

status list_get(struct List *list, int index, int *value)
{
    //TODO implement
    if(list == NULL){return -1;}
    if(list_length(list)<=index){return -3;}
    if(index<0){return -3;}
    if(value == NULL){return -4;}

    int i =0;
    struct ListNode *current = list->first;
    
    while(i<index){
        i = i+1;
        current = current->next;
    }
    int store = current->value;
    *value = store;
    return 1;
    
}

status list_print(struct List *list)
{
    //TODO implement
    if(list == NULL){return -1;}
    struct ListNode *current = list->first;
    while(current!=NULL){
        printf("%d  %p \n",current->value, &current->next);
        current =current ->next;
    }
    exit(-1);
}

status list_remove_item(struct List *list, int index)
{
    //TODO implement
    if(list ==NULL){return -1;}
    if(list_length(list)<=index || index <0){return -3;}
    int i =0;
    struct ListNode *current = list->first;
    
    while(i<index){
        i = i+1;
        current = current->next;
    }

    current->value=current->next->value;
    current->next = current ->next->next;

    return 1;
}

status list_delete(struct List *list)
{
    //TODO implement
    exit(-1);
}

status list_insert(struct List *list, int index, int value)
{
    //TODO implement
    exit(-1);
}

