/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    Node* idx1 = head;
    Node* idx2 = head;
    int i = 0;
    while(idx1 != NULL) {
        idx1 = idx1->next;
        i++;
    }
    while(i - positionFromTail > 1) {
        idx2 = idx2->next;
        i--;
    }
    return idx2->data;
}
