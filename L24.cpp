#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

// Sorting  

//Bubble Sort
/*
loop for n-1 times and compare with adjacent elements then coampare and swap
if the first element is greater than the second element then swap them
if the first element is smaller than the second element then do nothing
// Time Complexity: O(n^2)
// Space Complexity: O(1)

*/ 

void bubbleSort(vector<int> &arr , int n){
   for (int i = 0; i < n-1; i++)
   {  bool isSwap = false;
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j] > arr[j+1])    // change the greater than to less than for descending order
        {   swap(arr[j], arr[j+1]);
            isSwap = true;
        }
    }
    if (isSwap == false)
    {
        break;
    }
   }
}

void printArray(vector<int> &arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// Selection Sort
void selectionSort(vector<int> &arr , int n){
    for (int i = 0; i < n; i++)
    {
        int SI = i; //smallest Index unsorted part starting
        for(int j = i+1 ; j<n ;j++){
            if (arr[j]< arr[SI])
            {
                SI = j;
            }
        }
        swap(arr[i], arr[SI]);
    }   
}


// Insertion Sort
/*
loop for n-1 times and compare with adjacent elements then coampare and swap
if the first element is greater than the second element then swap them
if the first element is smaller than the second element then do nothing
// Time Complexity: O(n^2)
// Space Complexity: O(1)
*/

void insertionSort(vector<int> &arr, int n){
    for(int i =1; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]<curr) //arr[prev]<curr descending order of output , arr[prev]>curr ascending order of output 
        {    arr[prev+1] = arr[prev];
            prev--; 
        }
        arr[prev+1] = curr; //placing the curr element in its correct position
    }
}



int main() {

     int n =5 ;
     vector<int> arr = {5, 4, 3, 2,1};
     
    // bubbleSort(arr, n);
    
    //selectionSort(arr, n);
    
    // insertionSort(arr, n);

    cout << "Sorted array: ";

    printArray(arr, n);


    return 0;
}