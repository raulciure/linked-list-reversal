struct ListNode
{
    int value;
    struct ListNode *next;
};

typedef struct ListNode ListNode;


/// @brief Adds provided value in the list.
/// @param list The pointer to the first node of the list.
/// @param value The value to be added at the end of the list.
/// @return The address of the first node of the list.
ListNode* listAdd(ListNode* list, int value);

/// @brief Removes first occurence of the provided value from the list, if it is present.
/// @param list The pointer to the first node of the list.
/// @param value The value to be removed from the list.
/// @return The address of the first node of the list or NULL if list is empty.
ListNode* listRemove(ListNode* list, int value);

/// @brief Finds the provided value in the list, if it is present.
/// @param list The pointer to the first node of the list.
/// @param value The value to be found in the list.
/// @return The address of the node that contains the value provided or NULL if the value doen not exist in list.
ListNode* listFind(ListNode* list, int value);

/// @brief A function to get the last node of the list.
/// @param list The pointer to the first node of the list.
/// @return The last node of the list or NULL if list is empty(NULL).
ListNode* getLastNode(ListNode* list);

/// @brief A function to get the node at specified index in the list.
/// @param list The pointer to the first node of the list.
/// @param index The index of the wanted node.
/// @return The node at the specified index, or NULL if list is empty or index is out of bounds.
ListNode* getIndexNode(ListNode* list, int index);

/// @brief A function that prints the list's content.
/// @param list The pointer to the first node of the list.
void listPrint(ListNode* list);