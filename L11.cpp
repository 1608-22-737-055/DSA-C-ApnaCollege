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
    int ps ;

    int i=0 , j=n-1;
    while (i<j)
    {
       ps  = nums[i] + nums[j];
       if (ps > target)
       {
            j--;
       }else if (ps < target)
       {
          i++;
       }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
        
    }
    
   return ans;
}

int main() {
   vector<int> nums = {3,7,2,15};
   int target = 9;
  
//    vector<int> ans = pairSum(nums , target);
//     cout << ans[0] << " " << ans[1] << endl;

     
    // vector<int> ans = ps2(nums , target);
    // cout <<nums[ans[0]] << "+" << nums[ans[1]] << "  " << ans[0] << ans[1]<< endl;

    //Majority Element
    vector<int> nums1 = {1,1,1,2,2,3};
    int mj = nums1.size()/2; 

    //Brute force
    //  for(int val: nums1){
    //     int freq = 0;
    //     for(int el : nums1){
    //         if (val == el)
    //         {
    //             freq++;
    //         }
    //     }
    //     if(freq>mj){
    //         cout << val << " " << freq << endl;
    //     }
    //  }
    
    

    // if( cout << "Hello world !" << endl){
       //// printing "hello world !" without semi colon ;
    // }
    return 0 ;
}