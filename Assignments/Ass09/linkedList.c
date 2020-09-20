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

int main() {
    Node * HeadPtr = NULL;
    int j, target, llLength;
    srand(time(NULL));
    
    printf("size of list: ");
    scanf(" %d", &llLength);
    
    for (j=0; j<llLength; j++) {
        insertFirst(&HeadPtr, rand() % MAXELT);
    }
    
    traverse(HeadPtr);
    
    printf("\nenter target: ");
    scanf(" %d", & target);
    printf("number found: %d\n", countTarget(HeadPtr, target));
    printf("\nminimum: %d\n", findMin(HeadPtr));
    
    while (deleteFirst( & HeadPtr)){
        printf("\nnew list:\n");
        traverse(HeadPtr);
    }
    
    freeList(HeadPtr);
    return 1;
}