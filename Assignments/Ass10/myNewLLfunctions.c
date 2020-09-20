/*
 * CS153 Program Assignment #10
 * Even More Linked List Functions
 * Antonio Zea Jr.
 * 12052019
 */
#include <stdlib.h>

struct NODE{
    struct NODE *link;
    int value;
};
typedef struct NODE Node;

/*
 * This function claridfied what insertFirst was
 * actaully acomplishing.
 * size of list: 10
 * INSERTLAST
 * The values are created in the following order.
 * 1 0 6 4 1 8 5 0 2 4
 * Inserting these values as the last node keeps
 * the order of the(expected) linked list.
 * 1 0 6 4 1 8 5 0 2 4
 * 
 * 
 * INSERTFIRST
 * The values are created in the following order.
 * 8 9 7 0 9 0 3 5 5 2
 * Inserting these values as the first node
 * reverses the order of the(expected) linked list.
 * 2 5 5 3 0 9 0 7 9 8
 * 
 */

/*
 * Inserts a node at the end of a linked list.
 */
int insertLast(Node **ptrToHeadPtr, int val){
    Node *node = (Node *)malloc( sizeof( Node ) );
    if( node == NULL ){
        return 0;
    }
    
    node->value = val;
    Node *temp = *ptrToHeadPtr;

    if(*ptrToHeadPtr == NULL){
        node->link = *ptrToHeadPtr;
        *ptrToHeadPtr = node;
        return 1;
    }else{
        while ( temp->link != NULL ){
            temp = temp->link;
        }
            
        temp->link = node;
        node->link = NULL;
        return 1;
    }
}
/*
 * Finds the last node and deletes it.
 */
int deleteLast(Node **ptrToHeadPtr){
    Node *current = *ptrToHeadPtr;
    Node *previous;
    
    /*
     * This if-else-if statement was intersesting
     * because I needed to check for an empty list,
     * as well as a list with a single value in it
     * and lastly handle a list with more than one 
     * value.
     */
    if(*ptrToHeadPtr == NULL){
        return 0;
    }else if(current->link == NULL){
        *ptrToHeadPtr = NULL;
        free(current);
        return 1;
    }else{
        while ( current->link != NULL ){
            previous = current;
            current = current->link;
        }
        previous->link = NULL;
        free(current);
        return 1;
    }
}

/*
 * This function prototype is necessary so that
 * I can use it in duplicateList function.
 * Would it be more clear to place this right
 * before duplicateList definition or above at
 * very begining.
 */
Node *insertFirst( Node **ptrToHeadPtr, int val );
/*
 * Takes the values of one linked list and inserts then into an
 * empty list in reverse order.
 */
int duplicateList(Node **ptrToOldHeadPtr, Node **ptrToNewHeadPtr){
    if(*ptrToNewHeadPtr != NULL){
        return 0;
    }else if(*ptrToOldHeadPtr == NULL){
        *ptrToNewHeadPtr = NULL;
        return 1;
    }else{
        Node *temp = *ptrToOldHeadPtr;
        while( temp != NULL ){
            /*
             * I originally used insertFirst here istead of redefining that functionality.
             * This has the draw back of creating a point of failure located
             * in a different function.  This might prove to be a hassel if
             * I need to track down a bug.  Although it did save time.
             * Opted to define it here so that my function is completely modular.
             */
            Node *node = (Node *)malloc( sizeof( Node ) );
            
            node->value = temp->value;
            
            node->link = *ptrToNewHeadPtr;
            *ptrToNewHeadPtr = node;
            
            temp = temp->link;
        }
        return 1;
    }
}