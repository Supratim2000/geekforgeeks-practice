class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    void dfs(Node *root, int& valid)
    {
        if(!root || (!root->left && !root->right))
            return;
        int sum=0;
        if(root->left)
            sum+=root->left->data;
        if(root->right)
            sum+=root->right->data;
        if(sum!=root->data)
        {
            valid=0;
            return ;
        }
        dfs(root->left, valid);
        dfs(root->right, valid);
    }
    
    int isSumProperty(Node *root)
    {
        int valid=1;
        dfs(root, valid);
        return valid;
    }
};
