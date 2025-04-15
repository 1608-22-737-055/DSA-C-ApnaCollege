#include<iostream>
#include<vector>

using namespace std;

//Peak index in mountain array

int peakIndexInMountainArray(vector<int>&arr , int n){
    int st = 1 , end = n-2;

    while (st <=end)
    {
        int mid = st + (end-st)/2;

        if (arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1])
        {
            return mid;
            break;
        }

        if (arr[mid-1] > arr[mid])
        {
            end = mid -1;
        }else{
            st = mid +1;
        }
           
    }
    return -1;
}

int main(){
 vector<int> arr = {0,2,1,0};
 int n = arr.size();

 cout << "Peak index in mountain array is: " << peakIndexInMountainArray(arr, n) << endl;



    return 0;
}