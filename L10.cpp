#include<iostream>
#include<vector>
#include<climits>
using namespace std ;


int main() {

    //Maximum subarray sum
    //subarry = n*(n+1)/2
    //Kadane's algorithm
    
    // int n=5;
    // int arr[5] = {1,2,3,4,5};
    // //brute force
    // for (int st = 0; st < n; st++){
    //     for (int end = st; end < n; end++){
    //         for (int i = st; i <= end; i++){
    //             cout << arr[i] ;
    //         }
    //         cout << " ";
    //     }
    //      cout << endl;
    // }
    
    // for (int st = 0; st < n; st++){
       
    //     for (int end = st; end < n; end++){
    //         int sum = 0;
    //         for (int i = st; i <= end; i++){
    //             sum += arr[i];
    //             cout << sum ;
    //         }
    //         cout << " ";
    //     }
    //      cout << endl;
    // }
    /*
    int n=7;
    int arr[] = {3,-4,5,4,-1,7,-8};
    //brute force
    for (int st = 0; st < n; st++){
        for (int end = st; end < n; end++){
            for (int i = st; i <= end; i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
         cout << endl;
    }
    
    int maxSum = INT_MIN;
 
    for (int st = 0; st < n; st++)
    {
       int  currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
            cout << currSum << " ";
        }
        cout << endl;
    }
    cout << "Max sum is: " << maxSum << endl;
    */
    //Kadane's algorithm
    int n=7;
    int arr[] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Max sum is: " << maxSum << endl;


    return 0;

}