#include<iostream>
#include<vector>
using namespace std;

// Binary Search
/**
 * Performs a binary search on a sorted array to find the target element.
 *
 * Algorithm:
 * 1. Initialize two pointers, `low` and `high`, to represent the search range.
 *    - `low` starts at the beginning of the array (index 0).
 *    - `high` starts at the end of the array (last index).
 * 2. Enter a loop that continues as long as `low` is less than or equal to `high`.
 * 3. Calculate the middle index `mid` using the formula:
 *    - `mid = low + (high - low) / 2` (to prevent integer overflow).
 * 4. Compare the element at `mid` with the target:
 *    - If `arr[mid]` equals the target, return `mid` (target found).
 *    - If `arr[mid]` is less than the target, adjust the search range to the right half:
 *      - Set `low = mid + 1`.
 *    - If `arr[mid]` is greater than the target, adjust the search range to the left half:
 *      - Set `high = mid - 1`.
 * 5. If the loop ends without finding the target, return -1 (target not found).
 *
 * Time Complexity: O(log N), where N is the size of the array.
 * Space Complexity: O(1), as it uses constant extra space.
 
*/ 


int binarySearch(vector<int> arr , int tar){
    int start = 0 , end = arr.size() - 1;
    int mid =  ( start + end )/2;

    while (start <= end)
    {
      //mid =  ( start + end )/2;
       mid = start + (end - start) / 2; // to prevent overflow


      if (tar <  arr[mid])
      {
        end = mid - 1;
      }
      else if (tar > arr[mid])
      {
        start = mid + 1;
      }
     else{
        cout << "Found " << arr[mid] <<" at index " << mid << endl;
       
        return mid;
        break;
      }
}
return -1;
}

int BSrecursion(vector<int> arr , int target , int start , int end){
 
    if (start>end)
    {return -1;}
    
    int mid = start +(end-start)/2;

    if (target > arr[mid])
    {
        return BSrecursion(  arr , target , mid+1, end);
    }else if(target < arr[mid]){
        return BSrecursion(  arr  , target , start , mid-1);
    }else{return mid;}
    
    
  return -1;

}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target = 6;
    cout << binarySearch(arr, target) <<  endl;  
    cout << BSrecursion(arr, target , arr[0] , arr.size()) <<  endl;  

    
    






    return 0;
}