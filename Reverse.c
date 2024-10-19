#include "Reverse.h"
#include <stdlib.h>


ListNode* listReverse(ListNode* list, ListNode* prevNode)
{
    ListNode* returnValue;

    if(list->next == NULL) // Reached last node of list
    {
        list->next = prevNode;
        return list;
    }
    else
    {
        returnValue = listReverse(list->next, list);
        list->next = prevNode;
        return returnValue;
    }
}