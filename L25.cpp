#include<iostream>
#include<vector>

using namespace std;


// dutch national flag algorithm
// Sort an array of 0s , 1s and 2s
// Given an array of 0s , 1s and 2s , sort the array in a single pass.
// The algorithm is called the Dutch National Flag algorithm.
// The idea is to maintain three pointers : low , mid and high.
// The low pointer will point to the first 0 in the array.
// The mid pointer will point to the first 1 in the array.
// The high pointer will point to the last 2 in the array.
// The algorithm works as follows:
// 1. Initialize low = 0 , mid = 0 and high = n-1.
// 2. While mid <= high , do the following: 
//    a. If arr[mid] == 0 , swap arr[low] and arr[mid] , increment low and mid.
//    b. If arr[mid] == 1 , increment mid.
//    c. If arr[mid] == 2 , swap arr[mid] and arr[high] , decrement high.
// 3. Repeat step 2 until mid > high.
// 4. The array is now sorted.
 


/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
            int n = nums.size();
            int low = 0 , mid =0 , high = n-1 ;

            while(mid <= high){
                if(nums[mid] == 0){
                    swap(nums[low], nums[mid]);
                    mid++;
                    low++;
                }else if(nums[mid] == 1){
                    mid++;
                }else{
                    swap(nums[high], nums[mid]);
                  high--;
                }
            }
    }
};


*/

int main(){


    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();
    int ones = 0 , twos = 0 , zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }else if (arr[i] == 1)
        {
            ones++;
        }else if (arr[i] == 2)
        {
            twos++;
        }else{
            cout << "Invalid input" << endl;
        }
    }
           int idx=0;
    for (int i = 0; i < ones; i++)
    { arr[idx++] = 1 ; }
     
    for (int i = 0; i < twos; i++)
    { arr[idx++] = 2 ; }
    
    for (int i = 0; i < zeros; i++)
    { arr[idx++] = 0 ; }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}