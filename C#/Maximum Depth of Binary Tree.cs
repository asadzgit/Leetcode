//********************************************Question Description**************************************************************
//Problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
//Given the root of a binary tree, return its maximum depth.
//A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
//return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.
//Example
//**************************************************************************************************************

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
    if(root == nullptr)
         return 0;
    else if(root->left == nullptr && root->right == nullptr)
        return 1;
    else
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    int max(int a, int b){
        if(a>b)
            return a;
        else
            return b;
    }
};

