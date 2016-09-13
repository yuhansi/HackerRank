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
    if(head == NULL)
        return n;
    else if(data <= head->data) {
        n->next = head;
        head->prev = n;
        return n;
    }
    else {
        Node* res = SortedInsert(head->next, data);
        head->next = res;
        res->prev = head;
        return head;
    }
}
