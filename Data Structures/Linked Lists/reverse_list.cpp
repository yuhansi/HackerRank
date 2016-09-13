/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
    Node* previousNode = NULL;
    Node* currentNode = head;
    Node* nextNode = NULL;
    while(currentNode != NULL) {
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    head = previousNode;
    return head;
}
