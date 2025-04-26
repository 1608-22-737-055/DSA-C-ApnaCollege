#include<iostream>
#include<vector>

using namespace std;


int main(){
/*LC 88 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {    
         int idx = m+n-1, i= m-1, j =n-1;

         while(i>=0 && j>=0){
             if(nums1[i]>= nums2[j]){
                nums1[idx--] = nums1[i--];
             }else{
                nums1[idx--] = nums2[j--];
             }
         }
         while(j>=0){
            nums1[idx--]=nums2[j--];
         }    
}
};
*/

// LC 31 Next Permutation

/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the pivot

        int pivot = -1 , n=nums.size();

        for(int i = n-2 ;i>=0 ;i-- ){
            if(nums[i]<nums[i+1]){
                pivot =i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //step 2 next larger element
        for(int i = n-1 ; i>pivot ;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        //step 3 reverse (piv+1 to n-1)
        //reverse(nums.begin()+pivot+1, nums.end());
        int i= pivot+1 , j =n-1;

        while(i<=j){
            swap(nums[i++],nums[j--]);
            
        }



    }
};
*/


    return 0;
}