#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

 //LC -1 TwoSum 

int main(){

    vector <int> nums = {5,2,11,7,15};
    vector <int> original_nums = nums; // Keep a copy of the original vector
    int target = 9;

    // Sort the vector for two-pointer approach
    sort(nums.begin(), nums.end());

    // for(int i=0 ; i<nums.size() ; i++){
    //     for(int j=i+1 ; j<nums.size(); j++){
    //         if(nums[i] + nums[j]== target){
    //             cout<<"i: "<<i<<endl;
    //             cout<<"j: "<<j<<endl;
    //         }
    //     }
    // }
   /*
    int st = 0;
    int end = nums.size()-1;
    while (st<=end)
    {
        if(nums[st] + nums[end]== target){
            cout<<"i: "<<nums[st]<<endl;
            cout<<"j: "<<nums[end]<<endl;
            break;
        }else if(nums[st]+nums[end]<target){
            st++;
        }else{
            end--;
        }
    }
    unordered_map<int , int> m;

    for(int i=0 ; i<original_nums.size() ; i++){
       int first = original_nums[i];
         int second = target - first;
           if (m.find(second)!=m.end()){
               cout<<"i: "<<m[second]<<endl;
               cout<<"j: "<<i<<endl;
            }else{
                m[first] = i;
            }
           
    }
            */


            //Finding Missing and repeating values

            vector<int> grid= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    //LC_2965 
    /*
    class Solution {
     public:
     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int a, b ;
          
        int expSum=0, actualSum=0;

          for(int i=0;i<n ; i++){
            for(int j=0;j<n;j++){
                actualSum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
          }
      
      expSum=(n*n)*(n*n +1)/2;
      b = expSum + a - actualSum;
      ans.push_back(b);
      
      return ans;
      }
     };
    */


//Lc-287 duplicate number in an array
/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];

        do{
            slow=nums[slow];
            fast = nums[nums[fast]];

        }while(slow!=fast);

        slow=nums[0];
        
        while(slow != fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
};
*/


    return 0;
}