/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    if((headA == NULL) && (headB == NULL))
        return NULL;
    if((headA == NULL) && (headB != NULL))
        return headB;
    if((headB == NULL) && (headA != NULL))
        return headA;
    if(headA->data > headB->data) {
        Node* tmp = headB;
        headB = headA;
        headA = tmp;
    }
    Node* n = headA;
    while(headB) {
        while((headA->next != NULL) && (headB->data > headA->next->data)) {
            headA = headA->next;
        }
        Node* nextNode = headB->next;
        headB->next = headA->next;
        headA->next = headB;
        headB = nextNode;
    }
    return n;
}
