#include<iostream>
#include<vector>

using namespace std;

// L.84 Height of a Binary Tree | Count of Nodes in a Binary Tree

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

//count Nodes
int countNodes(Node* root){
    if(root == NULL){
        return 0; // Base case: no nodes in an empty tree
    }
    return countNodes(root->left) + countNodes(root->right) + 1; // Count current node
}

//Sum of Nodes
int sumOfNodes(Node* root){
    if(root == NULL){
        return 0; // Base case: no nodes in an empty tree
    }
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data; // Sum current node's value
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Count of nodes in the tree: " << countNodes(root) << endl;
    cout << "Sum of nodes in the tree: " << sumOfNodes(root) << endl;

    return 0;
}