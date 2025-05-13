#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

// Permuatations -> arrangements 
//LC-46 permutations
/*
class Solution {
public:
    void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans){
      if(idx == nums.size()){
        ans.push_back({nums});
        return ;
      }

      for(int i=idx ; i<nums.size();i++){
        swap(nums[idx], nums[i]);
        getPerms(nums, idx+1, ans);

        swap(nums[idx], nums[i]);

      }

    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        getPerms(arr, 0 , ans);
        getPerms(nums, 0 , ans);
        return ans;
    }
};
*/

void getPerms(vector<char> &nums, int idx, vector<vector<char>> &ans){
      if(idx == nums.size()){
        ans.push_back({nums});
        return ;
      }
      for(int i=idx ; i<nums.size();i++){
        swap(nums[idx], nums[i]);
        getPerms(nums, idx+1, ans);

        swap(nums[idx], nums[i]);

      }

    }

using namespace std;

int main(){

    vector<int> arr = {1, 2, 3};
    // total number of subsets = 2^n
    // total number of arrangements = n!

    vector<char> nums = {'a', 'b', 'c'};
    vector<vector<char>> ans;
        getPerms(nums, 0 , ans) ;

    for(auto i: ans){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "Total number of arrangements: " << ans.size() << endl;



    return 0;
}