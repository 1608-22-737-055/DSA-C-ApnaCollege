#include<iostream>
#include<vector>

using namespace std;

//PS 540: Single Element in Sorted Array
// in an array if the mid value is odd the the seperated half s are odd and 
//if the mid value is even the sepearted left & right halfs are even


int BS(vector<int> &nums , int n){

     if (n == 1) return nums[0];    

    int st=0 , end=n-1;
    while (st<=end)
    {
        int mid = st -(st-end)/2;

        if(nums[mid -1 ] != nums[mid] &&  nums[mid] != nums[mid+1])
        return mid;

        if (mid ==0 && nums[0] != nums[1]) return mid;         
        if ( mid == n-1 && nums[n-1] != nums[n-2]) return mid;         
 
        
        if (mid%2==0)
        {
            if (nums[mid]==nums[mid-1])
            {
                end = mid -1 ; 
            }else{
                st = mid +1;
            }
        }else{
            if (nums[mid-1]==nums[mid])
            {
                st = mid +1;
            }else{
                end = mid -1;
            }
            
        }
    }
    return -1 ;
}

int main(){
  vector <int> nums = {1,1,2,2,3,3,4,4,8,8,7};
   
    int n = nums.size();
     cout<< BS(nums , n)<<endl;


    return 0;
}
