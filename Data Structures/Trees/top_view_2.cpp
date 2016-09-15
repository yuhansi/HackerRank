/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root, int count = 0) {
    if(root == NULL)
        return;
    if(count <= 0)
        top_view(root->left, -1);
    cout << root->data << " ";
    if(count >= 0)
        top_view(root->right, 1);
}
