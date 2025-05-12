#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// Recursion

int fib(int n){
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}   

void printFibUntilN(int n, int a = 0, int b = 1) {
    if (a > n) return;
    cout << a << " ";
    printFibUntilN(n, b, a + b);
}


bool isSorted(vector<int> arr , int n){
    if(n ==0 || n == 1){ return true; }

    return arr[n-1] >= arr[n-2] && isSorted(arr , n-1);
}

int BS(vector<int> arr , int s , int end , int tar){
    if(s > end) return -1;
    int mid = (s+end)/2;
    if( arr[mid] == tar) return mid;
    if(arr[mid] > tar) return BS(arr , s ,mid-1 , tar);
    return BS(arr , mid+1 , end , tar);
} 




int main(){

    // fib(12);
cout << fib(5) << endl; 
    printFibUntilN(12);

    // isSorted

vector<int> arr = {1, 2, 3, 4, 5};
cout << isSorted(arr , arr.size()) << endl;

cout <<BS(arr , 0 , arr.size()-1 , 5) << endl;
    return 0 ;
}