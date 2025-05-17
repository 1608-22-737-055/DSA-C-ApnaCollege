#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Quick Sort 

int partition(vector<int> &arr, int st, int end){
    int idx=st-1, pivot=arr[end];
      for(int i=st; i<end;i++){
        if(arr[i]<=pivot){
            idx++;
            swap(arr[idx], arr[i]);
        }
      }
      idx++;
      swap(arr[end], arr[idx]);
      return idx;
}

void qSort(vector<int> &arr, int st, int end){
  if (st<end)
  {
    int pivIdx = partition(arr, st, end);
    qSort(arr, st, pivIdx-1);//left half
    qSort(arr, pivIdx+1, end);//right half
  }
  
   
}

int main(){

vector<int> arr={12,31,35,8,32,17,111,145,21,69,96};

qSort(arr,0,arr.size()-1);

   for(int val : arr){
     cout << val << " " ;
   }
   cout<<endl;


    return 0;
}