#include<iostream>
#include<vector>

using namespace std;


// dutch national flag algorithm
 




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