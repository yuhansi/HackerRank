
/*The tree node has data, left child and right child
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root) {
    if(root == NULL)
        return 0;
    int leftHeight = height(root->left);
    if(root->left != NULL)
        leftHeight++;
    int rightHeight = height(root->right);
    if(root->right != NULL)
        rightHeight++;
    if(leftHeight > rightHeight)
        return leftHeight;
    else
        return rightHeight;

}
