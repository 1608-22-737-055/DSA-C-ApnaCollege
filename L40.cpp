#include<iostream>
#include<vector>

using namespace std;

//   sub array sum equals K

int main(){
  
    vector<int> nums = {9,4,20,3,10,5};
    int tar = 33;
   
    
//     class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
//         vector<int> prefixSum(n, 0);

//         prefixSum[0] = nums[0];
//         for (int i = 1; i < n; i++) { // Start from index 1
//             prefixSum[i] = prefixSum[i - 1] + nums[i];
//         }

//         unordered_map<int, int> m;

//         for (int j = 0; j < n; j++) {
//             if (prefixSum[j] == k) count++;

//             int val = prefixSum[j] - k;
//             if (m.find(val) != m.end()) {
//                 count += m[val];
//             }

//             if (m.find(prefixSum[j]) == m.end()) { // Correct condition
//                 m[prefixSum[j]] = 0;
//             }
//             m[prefixSum[j]]++;
//         }

//         return count;
//     }
// };




    return 0 ;
}