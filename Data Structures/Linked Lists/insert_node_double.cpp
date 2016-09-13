/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
    Node* n = new Node();
    n->data = data;
    if(head == NULL || head->data >= data) {
        n->next = head;
        n->prev = NULL;
        return n;
    }
    Node* current = head;
    Node* prev = NULL;
    while(current != NULL && current->data < data) {
        prev = current;
        current = current->next;
    }
    Node* next = current;
    n->prev = prev;
    n->next = next;
    prev->next = n;
    if(next != NULL)
        next->prev = n;
    return head;
}
