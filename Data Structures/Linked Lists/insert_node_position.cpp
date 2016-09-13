/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node* tmp = head;
    if(head == NULL) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;
        return head;
    }
    else {
        int count = 0;
        while(tmp != NULL) {
            count++;
            tmp = tmp->next;
        }
        if(position == 0) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            head = newNode;
            return head;
        }
        else if(position >= count) {
            tmp = head;
            while(tmp->next != NULL) {
                tmp = tmp->next;
            }
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = NULL;
            tmp->next = newNode;
            return head;
        }
        else {
            tmp = head;
            int idx = 0;
            while(tmp->next != NULL && idx < position - 1) {
                ++idx;
                tmp = tmp->next;
            }
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = tmp->next;
            tmp->next = newNode;
            return head;
        }
    }
}
