#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;    
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no){
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*first == NULL){
        *first = newn;
    }
    else{
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no){
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;
    newn->data = no;
    newn->next = NULL;
    if(*first == NULL){
        *first = newn;
    }
    else{
        temp = *first;
        while(temp->next != NULL){
            temp = temp->next;
        }   
        temp->next = newn;
    }
}

void Display(PNODE first){
    PNODE temp = NULL;
    temp = first;
    while(temp != NULL){
        printf(" | %d | ->",temp->data);
        temp = temp->next;
    }
    printf(" NULL\n");
}

int Count(PNODE first){
    PNODE temp = NULL;
    int iCount = 0;
    temp = first;
    while(temp != NULL){
        iCount ++;
        temp = temp->next;
    }
    return iCount;
}

void InsertAtPos(PPNODE first, int no, int pos){
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    int iCount = 0;
    iCount = Count(*first);

    if(*first == NULL || pos == 1){
        InsertFirst(first, no);
    }
    else if(pos > (iCount + 1)){
        printf("Invalid position.");
        return;
    }
    else if(pos == (iCount + 1)){
        InsertLast(first, no);
    }
    else{
            temp = *first;
            for(int i=1; i < (pos-1); i++){
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
    }
}

void DeleteFirst(PPNODE first){
    PNODE temp = NULL;
    temp = *first;

    if(*first == NULL){
        printf("Linked list is empty.");
        return;
    }
    else{
        *first = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first){
    PNODE temp = NULL;
    PNODE target = NULL;

    if(*first == NULL){
        printf("Linked list is empty.");
        return;
    }
    else{
        temp = *first;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        target = temp->next;
        printf("Target data is %d", target->data);
        temp->next = NULL;
        free(target);
    }
}

void DeleteAtPos(PPNODE first, int pos){
    PNODE target = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    iCount = Count(*first);

    if(*first == NULL || pos == 1){
        DeleteFirst(first);
    }
    else if(pos > iCount){
        printf("Invalid position.");
        return;
    }
    else if(pos == iCount){
        printf("Calling delete last");
        DeleteLast(first);
    }
    else{
            temp = *first;
            for(int i=1; i < (pos-1); i++){
                temp = temp->next;
            }
            target = temp->next;
            temp->next = temp->next->next;
    }
}

int main(){
    PNODE head = NULL;
    int iRet = 0;
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    InsertAtPos(&head, 101, 2);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    InsertAtPos(&head, 111, 1);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    InsertAtPos(&head, 121, 7);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    InsertAtPos(&head, 121, 6);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    DeleteAtPos(&head, 3);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    DeleteAtPos(&head, 1);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    DeleteAtPos(&head, 4);
    iRet = Count(head);
    printf("No of elements in the linked list are %d",iRet);
    Display(head);

    return 0;
}
