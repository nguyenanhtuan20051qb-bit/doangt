class Solution {
public:
    void findPaths(TreeNode* node, string path, vector<string>& result) {
        if (node == nullptr) return;
        
        path += to_string(node->val);
        
        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(path);
        } else {
            path += "->";
            findPaths(node->left, path, result);
            findPaths(node->right, path, result);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root != nullptr) {
            findPaths(root, "", result);
        }
        return result;
    }
};