#include<iostream>
#include<vector>
#include<queue>

using namespace std;

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

// Modified buildTree using index as a reference
Node* buildTree(vector<int>& preorder, int& idx){
    if (idx >= preorder.size() || preorder[idx] == -1) {
        idx++;
        return nullptr;
    }

    Node* root = new Node(preorder[idx++]);
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

// Function to print the K-th level of the binary tree
void KthLevel(Node* root, int K){
    if(root == NULL){
        return;
    }

    if(K == 1){
        cout << root->data << " ";
        return;
    }

    KthLevel(root->left, K-1);
    KthLevel(root->right, K-1);
}

int main(){
    vector<int> preorder = {1, 2, 7, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int idx = 0;
    Node* root = buildTree(preorder, idx);

    cout << "Nodes at level 3: ";
    KthLevel(root, 3);
    cout << endl;

    return 0;
}
