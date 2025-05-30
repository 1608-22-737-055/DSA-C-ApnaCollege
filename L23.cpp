#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

// Aggressive cows problem
/*
    You have to place N cows in M stalls such that the minimum distance between any two cows is as large as possible.
    You have to return the largest minimum distance.
*/

bool isPossible(vector<int> &arr , int N , int C , int minAllowedDist){
   int cows  =1 , lastStallPos = arr[0];
   
   for (int i = 1; i < N; i++)
   {
    if(arr[i]-lastStallPos >= minAllowedDist){
        cows++;
        lastStallPos = arr[i];
    }

    if (cows == C)
    {
        return true;
    }
   }
   return false; 
}

int getDistance(vector<int> &arr, int N , int C){
    sort(arr.begin() , arr.end());
    int st =1 , end = arr[N-1] - arr[0], ans=-1 ;

    while (st<=end)
    {
        int mid = st + (end- st)/2;

        if (isPossible(arr , N ,C , mid))
        {
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1; 
        }
    }
    
    return ans ;
}


int main() {

    int N = 5 , C = 3;
    vector<int> arr = {1,2,4,8,9};
    cout << getDistance(arr , N , C) << endl;

    return 0 ;
}

