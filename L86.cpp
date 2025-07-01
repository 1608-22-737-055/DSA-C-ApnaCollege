#include<iostream>
#include<vector>


using namespace std;

// Lc-543
/*
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
/*
class Solution {
public:

    int height(TreeNode* root){
        if (root == NULL) return 0 ;

        int rH= height(root->right); // right height
        int lH = height(root->left); // left height

        return max(rH, lH)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int lD = diameterOfBinaryTree(root -> left);// left diameter
        int rD = diameterOfBinaryTree(root -> right);// right diameter
        int cD = height(root->left) + height(root->right); //current diameter

        return max(cD, max(lD,rD));
    }
};
*/


// AFTER OPTIMIZATION 

/*
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
/*
class Solution {
public:

    int ans =0 ;

    int height(TreeNode* root){
        if (root == NULL) return 0 ;

        int rH= height(root->right); // right height
        int lH = height(root->left); // left height
        ans = max(lH + rH, ans);
        return max(rH, lH)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
*/

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }

};

static int idx = -1 ;
Node* buildTree(vector<int> preorder){
   idx ++;
  
   if(preorder[idx] == -1){
       return NULL; // Base case for null node
   }

   Node* root = new Node(preorder[idx]);
   root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);

    return root ;
}

//Height of a Tree
int height(Node* root){
    if(root == NULL){
        return 0; // Base case: height of an empty tree is 0
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1; // Height is max of left
}

// Max diameter of a current node sum of both left and right nodes heights
int diam(Node* root){
    if(root == NULL) return 0;

    int leftDiam = diam(root->left);
    int rightDiam = diam(root->right);
    int currDiam = height(root->left) + height(root->right);
    return max( max(leftDiam, rightDiam), currDiam );
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
 cout << "   diameter max :" << diam(root) << endl;
   

    return 0;

}

