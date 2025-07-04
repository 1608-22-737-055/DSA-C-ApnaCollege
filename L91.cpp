#include <iostream>
#include<vector>
#include<queue>

using namespace std;

// Transform to summ tree

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

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " "; // Print current node's value
    preOrder(root->left); // Traverse left subtree
    preOrder(root->right); // Traverse right subtree
}

int sumTree(Node* root){
    if(root == NULL){
        return  0;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    root->data += leftSum + rightSum; // Update current node's value to sum of left and right subtrees
    return root->data; // Return the updated value for parent nodes
 
}


int main(){
       vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout << "Preorder before sum tree: ";
    preOrder(root);
    cout << endl;
    
    sumTree(root); // Transform the tree to a sum tree
    cout << "Preorder after sum tree: ";
    preOrder(root);
    cout << endl; 

    return 0;
}