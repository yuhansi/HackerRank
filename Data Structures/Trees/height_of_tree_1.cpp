
/*The tree node has data, left child and right child
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root) {
    int leftHeight, rightHeight;
    if(root == NULL)
        return -1;
    else {
        leftHeight = height(root->left);
        rightHeight = height(root->right);
        if(leftHeight > rightHeight)
            return leftHeight + 1;
        else
            return rightHeight + 1;
    }
}
