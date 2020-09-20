#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

struct NODE
{
    struct NODE *link;
    int value;
};

typedef struct NODE Node;

Node *insertFirst( Node **ptrToHeadPtr, int val )
{
    Node *node = (Node *)malloc( sizeof( Node ) );
    node->value = val;
    node->link = *ptrToHeadPtr;
    *ptrToHeadPtr = node;
    return node;
}

void traverse( Node *p )
{
    while ( p != NULL )
    {
        printf("%d ", p->value );
        p = p->link;
    }
}

void freeList( Node *p )
{
    Node *temp;
    while ( p != NULL )
    {
        temp = p;
        p = p->link;
        free( temp );
    }
}

#define MAXELT 10

int countTarget(Node *start, int target);
int findMin(Node *start);
int deleteFirst(Node **ptrToHeadPtr);

int insertLast(Node **ptrToHeadPtr, int val);
int deleteLast(Node **ptrToHeadPtr);
int duplicateList(Node **ptrToOldHeadPtr, Node **ptrToNewHeadPtr);

int main() {
    Node *HeadPtr = NULL;
    
    int j, target, llLength;
    srand(time(NULL));
    
    printf("size of list: ");
    scanf(" %d", &llLength);
    
    for(j=0; j<llLength; j++){
        if ( !insertLast( &HeadPtr, rand()%MAXELT) ){
            printf("Insertion %d failed\n", j);
            exit( EXIT_FAILURE );
        }
    }
    
    traverse(HeadPtr);
    
    for ( j=0; j<llLength/2; j++ ){
        deleteLast( &HeadPtr );
        printf("\nnew list:\n");
        traverse( HeadPtr );
    }
    
    
    Node *dupPtr = NULL;
    
    if ( duplicateList( &HeadPtr, &dupPtr) ){
        printf("\nDuplicate List:\n");
        traverse( dupPtr );
    }else{
        printf("Duplication %d failed\n", j);
        freeList( HeadPtr );
        exit( EXIT_FAILURE );
    }
    printf("\n");


    freeList( HeadPtr );
    freeList( dupPtr );
    return 1;
}