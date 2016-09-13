/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* tmp = new Node();
    tmp->data = data;
    tmp->next = NULL;
    if(head == NULL) {
        head = tmp;
        return tmp;
    }
    Node* current = head;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = tmp;
    return head;
}
