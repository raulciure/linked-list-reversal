#include "Reverse.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
    ListNode *list = NULL;

    list = listAdd(list, 4);
    list = listAdd(list, 6);
    list = listAdd(list, 12);
    list = listAdd(list, 20);
    list = listAdd(list, 8);
    list = listAdd(list, 7);
    list = listAdd(list, 4);
    list = listAdd(list, 30);

    listPrint(list);
    printf("\n");

    list = listReverse(list, NULL);

    listPrint(list);
    printf("\n");

    list = listReverse(list, NULL);

    listPrint(list);

    return 0;
}