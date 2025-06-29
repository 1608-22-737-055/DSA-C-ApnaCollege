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

//preorder
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// postorder
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Level order traversal
void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);   
    q.push(NULL); // To mark the end of the current level

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
    
        if(curr == NULL){
            // End of current level
            if(!q.empty()){
                cout << endl; // Print a new line for the next level
                q.push(NULL); // Push NULL to mark the end of the next level
                
            continue;
            }else {
                break; // If queue is empty, we are done
            }
        }

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout << endl;
}


int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    // cout << root->data<< endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;
    //   preOrder(root);
    // cout << endl;
  
    // inorder(root);
    // cout << endl;

    // postOrder(root);
    // cout << endl;


    levelOrder(root);
    cout << endl;
 
    return 0;
}

