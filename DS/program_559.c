#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE first, int no){
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL){ // BST is empty
        *first = newn;
    }
    else{               // BST contains at least one node
        temp = *first;
        while(1){
            if(no==(temp->data)){
                printf("Duplicate element, unable to insert node.\n");
                free(newn);
                break;
            }
            else if(no > temp->data) { // motha asel tar rchild
                if(temp->rchild == NULL){
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data) { // lahan asel tar lchild
                if(temp->lchild == NULL){
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

int main(){
    PNODE head = NULL;

    Insert(&head, 11);
    Insert(&head, 9);
    Insert(&head, 17);

    Insert(&head, 9);

    return 0;
}