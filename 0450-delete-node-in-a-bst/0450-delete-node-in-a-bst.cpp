class Solution {
public:

    TreeNode* findMin(TreeNode* node) {
        while(node->left)
            node = node->left;
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;

        if(key < root->val)
            root->left = deleteNode(root->left, key);

        else if(key > root->val)
            root->right = deleteNode(root->right, key);

        else {
            if(!root->left) return root->right;
            if(!root->right) return root->left;

            TreeNode* successor = findMin(root->right);
            root->val = successor->val;
            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};
