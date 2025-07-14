#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Inserfirst(PPNODE first, PPNODE last, int no){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL){
        *first = newn;
        *last = newn;
    }
    else{
        newn->next = *first;
        *first = newn;
        (*last)->next = *first;
    }
}

void InserLast(PPNODE first, PPNODE last, int no){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL){
        *first = newn;
        *last = newn;
        (*last)->next = *first;
    }
    else{
        printf("else of insertLast.");
        newn->next = *first;
        (*last)->next = newn;
        *last = newn;
    }
}

void Display(PNODE first){
    PNODE temp = NULL;

    temp = first;
    do{
        printf("| %d | ->", temp->data);
        temp = temp->next;
    }
    while(temp != first);
    printf(" NULL\n");
}
int Count(PNODE first){
    PNODE temp = NULL;
    int iCount = 0;

    temp = first;
    do{
        iCount ++;
        temp = temp->next;
    }
    while(temp != first);
    return iCount;
}

void DeleteFirst(PPNODE first, PPNODE last){
    PNODE temp = NULL;
    if(*first == NULL){
        return;
    }
    else if((*first)->next == NULL){
        free(*first);
        *first = NULL;
    }
    else{
        temp = *first;
        *first = (*first)->next;
        (*last)->next = *first;
        free(temp);
    }
}

void DeleteLast(PPNODE first, PPNODE last){
    printf("Inside delete last.\n");
    PNODE temp = NULL;
    PNODE target = NULL;
    if(*first == NULL){
        return;
    }
    else if((*first)->next == NULL){
        free(*first);
        *first = NULL;
    }
    else{
        printf("inside else part.\n");
        temp = *first;
        do{
            temp = temp->next;
        }
        while(temp->next->next != *first);

        target = temp->next;
        temp->next = *first;
        free(target);
    }
}

void InsertAtPos(PPNODE first, int no, int pos){}
void DeleteAtPos(PPNODE first, int no, int pos){}

int main(){
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;
    Inserfirst(&head, &tail, 51);
    Inserfirst(&head, &tail, 21);
    Inserfirst(&head, &tail, 11);
    
    iRet = Count(head);
    printf("\nNo of elements in the Linked list are %d\n", iRet);
    Display(head);

    InserLast(&head, &tail, 101);
    iRet = Count(head);
    printf("\nNo of elements in the Linked list are %d\n", iRet);
    Display(head);

    InserLast(&head, &tail, 111);
    iRet = Count(head);
    printf("\nNo of elements in the Linked list are %d\n", iRet);
    Display(head);
    printf("calling Delete first.\n");

    DeleteFirst(&head, &tail);
    printf("Called deletedFirst.");
    iRet = Count(head);
    printf("\nNo of elements in the Linked list are %d\n", iRet);
    Display(head);

    DeleteLast(&head, &tail);
    iRet = Count(head);
    printf("\nNo of elements in the Linked list are %d\n", iRet);
    Display(head);

    return 0;
}