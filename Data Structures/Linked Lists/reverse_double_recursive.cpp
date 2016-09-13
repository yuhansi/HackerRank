/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
    if(head == NULL)
        return NULL;
    Node* tmp = head->next;
    head->next = head->prev;
    head->prev = tmp;
    if(head->prev == NULL)
        return head;
    return Reverse(head->prev);
}
