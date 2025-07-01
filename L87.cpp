#include<iostream>
#include<vector>
#include<map>
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


void topView(Node* root){
    queue<pair<Node*, int>> q; //(node, HD)
    map<int, int> m; //<HD, node val>
    q.push({root, 0 });

    while (q.size() > 0)
    {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr->data;
        }

        if(curr-> left != NULL){
            q.push ( {curr->left, currHD-1} );
        }

        if(curr->right != NULL){
            q.push({curr->right, currHD+1});
        }
    }

    for(auto it:m){
        cout<<it.second<<" ";
    }
    cout << endl;
    
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    topView(root);

  
    return 0;
}