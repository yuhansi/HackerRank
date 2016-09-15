/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2) {
    node* currentNode = root;
    while(currentNode->data > v1 && currentNode->data > v2)
        currentNode = currentNode->left;
    while(currentNode->data > v1 && currentNode->data > v2)
        currentNode = currentNode->right;
    return currentNode;
}
