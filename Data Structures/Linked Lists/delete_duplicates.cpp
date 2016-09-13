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
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node* result = head;
    while(head->next != NULL) {
        if(head->data != head->next->data)
            head = head->next;
        else
            head->next = head->next->next;
    }
    return result;
}
