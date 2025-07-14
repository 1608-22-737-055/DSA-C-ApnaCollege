#include<iostream>


using namespace std;

//LC-235 Lowest common ancestor of a binary search tree
/*
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }

        if(root->val > p->val && root->val > q->val){
            return lowestCommonAncestor(root->left, p, q);
        }else if(root->val < p->val && root->val < q->val){
            return  lowestCommonAncestor(root->right, p, q);
        }else{
            return root;
        }
    }
};
*/


int main(){



    return 0;
}