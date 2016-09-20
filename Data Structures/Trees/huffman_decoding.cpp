/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/


void decode_huff(node * root,string s)
{
    node* tmp = root;
    for(char c : s) {
        if(c == '0')
            tmp = tmp->left;
        else
            tmp = tmp->right;
        if(tmp->data) {
            cout << tmp->data;
            tmp = root;
        }
    }
}
