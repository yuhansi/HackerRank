/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    Node* current = head;
    while(head != NULL) {
        if((head->next != NULL) && (head->next->next == NULL)) {
            cout << head->next->data << endl;
            head->next = head->next->next;
            head = current;
        }
        else if(head->next == NULL) {
            cout << head->data << endl;
            head = NULL;
        }
        else
            head = head->next;
    }
}
