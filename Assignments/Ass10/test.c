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

int insertLast(Node **ptrToHeadPtr, int val);

int main() {
    Node *HeadPtr = NULL;
    int j, target, llLength;
    srand(time(NULL));
    
    printf("size of list: ");
    scanf(" %d", &llLength);
    
    for (j=0; j<llLength; j++) {
        if ( !insertLast( &HeadPtr, rand()%MAXELT) ){
            printf("Insertion %d failed\n", j);
            exit( EXIT_FAILURE );
        }
    }
    
    traverse(HeadPtr);

    freeList( HeadPtr );
    return 1;
}