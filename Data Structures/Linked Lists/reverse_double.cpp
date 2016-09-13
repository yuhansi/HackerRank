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
    Node* tmp = head;
    Node* newHead = head;
    while(tmp != NULL) {
        Node* prev = tmp->prev;
        tmp->prev = tmp->next;
        tmp->next = prev;
        newHead = tmp;
        tmp = tmp->prev;
    }
    return newHead;
}
