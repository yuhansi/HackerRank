#include <queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    queue<node*> q;
    node* tmp = root;
    while(tmp != NULL) {
        cout << tmp->data << " ";
        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
        tmp = q.front();
        q.pop();
    }
}
