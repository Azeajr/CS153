/*
 * CS153 Program Assignment #9
 * Linked List
 * Antonio Zea Jr.
 * 11262019
 */

#include<stdlib.h>

struct NODE
{
    struct NODE *link;
    int value;
};

typedef struct NODE Node;
/*
 * Counts number of instances that target
 * occurs in the linked list and returns
 * it.
 */
int countTarget(Node *start, int target){
    int count = 0;
    
    while(start != NULL){
        if(start -> value == target){
            count++;
        }
        start = start -> link;
    }
    return count;
}
/*
 * Finds the minimum value in the
 * linked list and returns it.
 */
int findMin(Node *start){
    if(start == NULL){
        return 0;
    }
    
    int min = start -> value;
    
    while(start != NULL){
        if(start -> value < min){
            min = start -> value;
        }
        
        start = start -> link;
    }
    
    return min;
}
/*
 * Deletes the first node of a non-empty linked
 * list.  Returns 0 if nothing was deleted
 * and 1 if a node was deleted.
 */
int deleteFirst(Node **ptrToHeadPtr){
    if(*ptrToHeadPtr != NULL){
        Node *temp = *ptrToHeadPtr;
        /*
         * *ptrToHeadPtr = *ptrToHeadPtr -> link;
         * This was my original try. I know
         * this does not work due to the
         * R-value meaning of *ptrToHeadPtr
         * It just feels like it should. Need
         * to spend some time thinking about
         * this.
         * Using temp here gives me the
         * functionality I expected.
         * *ptrToHeadPtr = temp -> link;
         * 
         * So I found the actual reason why
         * *ptrToHeadPtr = *ptrToHeadPtr -> link;
         * was not functioning.
         * It had to do with operator
         * precedence.  The arrow operator
         * has higher precedence than
         * derefrence.  Parentheses
         * clarified the order of
         * operations I desired.
         */
        *ptrToHeadPtr = (*ptrToHeadPtr) ->link;
        free(temp);
        return 1;
    }else{
        return 0;
    }

}