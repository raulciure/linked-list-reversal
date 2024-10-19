#include "Linked-List.h"
#include <stdlib.h>
#include <stdio.h>


ListNode* listAdd(ListNode* list, int value)
{
    ListNode *newNode, *lastNode;

    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->value = value;
    newNode->next = NULL;

    if(list == NULL)
        list = newNode;
    else
    {
        lastNode = getLastNode(list);
        lastNode->next = newNode;
    }

    return list;
}

ListNode* listRemove(ListNode* list, int value)
{
    ListNode *node, *auxNode;

    node = list;

    // Case 1: value is the first node
    if(node->value == value)
    {
        list = node->next;
        free(node);
        return list;
    }
    else
    {
        // Case 2: value is somewhere else in list
        while(node->next != NULL)
        {
            if(node->next->value == value)
            {
                auxNode = node->next;
                node->next = auxNode->next;
                free(auxNode);
                break;
            }
            node = node->next;
        }
    }

    return list;
}

ListNode* listFind(ListNode* list, int value)
{
    ListNode *node;

    node = list;
    while(node != NULL)
    {
        if(node->value == value)
            return node;
        node = node->next;
    }

    return NULL;
}

ListNode* getLastNode(ListNode* list)
{
    ListNode *node;

    if(list == NULL) return NULL;
    
    node = list;
    while(node->next != NULL)
        node = node->next;

    return node;
}

ListNode* getIndexNode(ListNode* list, int index)
{
    ListNode *node;
    int count;

    node = list;
    count = 0;
    while(node != NULL)
    {
        if(count == index)
            return node;
        count++;
        node = node->next;
    }

    return NULL;
}

void listPrint(ListNode* list)
{
    ListNode* node;

    node = list;
    while(node != NULL)
    {
        printf("%d ", node->value);
        node = node->next;
    }
}