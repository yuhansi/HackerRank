/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    node* newNode = new node();
    newNode->data = value;
    if(root == NULL)
        return newNode;
    node* n = root;
    while(n != NULL) {
        if(n->data > value) {
            if(n->left == NULL) {
                n->left = newNode;
                break;
            }
            n = n->left;
        }
        else if(n->data < value) {
            if(n->right == NULL) {
                n->right = newNode;
                break;
            }
            n = n->right;
        }
    }
    return root;
}
