/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    if(head == NULL)
        return NULL;
    Node* nextNode = head->next;
    while(nextNode != NULL && head->data == nextNode->data) {
        nextNode = nextNode->next;
    }
    head->next = RemoveDuplicates(nextNode);
    return head;
}
