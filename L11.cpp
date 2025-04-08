#include<iostream>
#include<vector>
using namespace std;


// brute force approach
vector<int> pairSum(vector<int> nums, int target ){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i!=j && nums[i]+nums[j] == target)
           {
             ans.push_back(i);
             ans.push_back(j);
             return ans;
           }
        }
    }
     return ans;
}

vector<int> ps2(vector<int> nums, int target ){
    vector<int> ans;
    int n = nums.size();
    
    int i=0 , j=n-1;
    while (i<j)
    {
        ans = nums[i] + nums[j];
        
    }
    
   
}

int main() {
   vector<int> nums = {3,7,2,15};
   int target = 9;
  
//    vector<int> ans = pairSum(nums , target);
//     cout << ans[0] << " " << ans[1] << endl;

     





    // if( cout << "Hello world !" << endl){
       //// printing "hello world !" without semi colon ;
    // }
    return 0 ;
}