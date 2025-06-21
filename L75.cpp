#include<iostream> 
#include <vector>
#include <stack>

using namespace std;

//Celebrity problem
// A celebrity is a person who is known by everyone but knows no one.


int getCelebrity(vector<vector<int>> arr){
    int n = arr.size();
    stack<int> s;

    // Step 1: Push all people onto the stack
    for(int i = 0; i < n; i++){
        s.push(i);
    }

    // Step 2: Find a potential celebrity
    while(s.size() > 1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if(arr[a][b] == 1){
            // a knows b, so a cannot be a celebrity
            s.push(b);
        } else {
            // a does not know b, so b cannot be a celebrity
            s.push(a);
        }
    }

    // Step 3: Verify the potential celebrity
    int candidate = s.top();
    for(int i = 0; i < n; i++){
        if(i != candidate){
            if(arr[candidate][i] == 1 || arr[i][candidate] == 0){
                return -1; // No celebrity found
            }
        }
    }
    
    return candidate; // Return the celebrity index
    
}

int main(){

    vector<vector<int>> arr = {
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };
    
    int ans = getCelebrity(arr);

    cout << "Celebrity is: " << ans << endl;
    
    return 0;
}