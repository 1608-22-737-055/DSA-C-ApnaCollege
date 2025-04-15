#include<iostream>
#include<vector>

using namespace std; 
 
// Search in Rotated Sorted Array

int search(vector<int> arr, int tar){
    int st = 0 , end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st)/2 ; 
        if (arr[mid] == tar)
        {
            return mid;
        }
       
        if (arr[st] <= arr[mid])
        {// left is sorted
           if (arr[st] <= tar && tar <= arr[mid])
           {
            end = mid -1;
           }
           else
           {
            st= mid+1;
           }
        }else{
            if (arr[mid]<=tar && tar <= arr[end])
            {
                st =mid+1;
            }
            else
            {
                end=mid -1 ;
            }
            
        }
        
    }
    return -1 ;
    
}

int main(){

    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    // int start = 0 , end = arr.size() - 1;
    // int mid = start + (end - start) / 2 ;
 
    //PS 33. search in rooted sorted array 
    cout << search(arr,  target)<< endl;
    

/*class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (A[mid] == tar) {
                return mid;
            }
            if (A[st] <= A[mid]) { // left sorted
                if (A[st] <= tar && tar <= A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else { // right sorted
                if (A[mid] <= tar && tar <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};
*/

    return 0 ;
}