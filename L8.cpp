#include<iostream>
#include<climits>
using namespace std ;

// Arrays

int linearSearch(int arr1[], int size1, int target1  ){
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] == target1)
        {
            return i ;
        }
    }
    return -1 ;
}

void reverse(int arr2[] , int size2  ){
  int start = 0 , end = size2 - 1 ;

  while (start < end)
  {  swap(arr2[start], arr2[end]);
     start++;
     end--;
    
  }
}

void sumProArr(int arr3[] , int size3){
   int sum =0 ;
   long pro=1;
    for (int i = 0; i < size3; i++)
   {   
      cout << arr3[i] << " " ;
      sum  += arr3[i] ;
      pro *= arr3[i] ;
   }
   
   cout << "sum of all elements: " << sum << endl;
   cout << "product of all elements: " << pro << endl;   
}

void swapMaxMin(int arr3[] , int size3){

    int MAXIndex = 0 , MINIndex = 0 ;
    for (int i = 0; i < size3 ; i++)
    {
        if (arr3[i] > arr3[MAXIndex])
        {
            MAXIndex = i ;
        }
        if (arr3[i] < arr3[MINIndex])
        {
            MINIndex = i ;
        }
    }
    swap(arr3[MAXIndex], arr3[MINIndex]);
    cout << "After swapping max and min: " << endl;
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " " ;
    }
    cout<<endl;
}

void uniqueNums(int arr4[] , int size4 ){
    
    for (int i = 0; i < size4; i++) {
        bool isUnique = true;
        for (int j = 0; j < size4; j++) {
            if (i != j && arr4[i] == arr4[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            std::cout << arr4[i] << " ";
        }
    }
    std::cout << std::endl;   
}

void printIntersection(int arr5[], int arr6[] , int size5 , int size6){

    for (int i = 0; i < size5; i++)
    {
        for (int j = 0; j < size6; j++)
        {
            if (arr5[i] == arr6[j])
            {
                cout << arr5[i] << " " ;
            }
        }
        
    }
}

int main() {

    // int marks[5] = {1,2,3,4,5};
    // // cout << marks[0] << endl ;

    // for(int i=0 ; i<sizeof(marks)/sizeof(int) ; i++){
    //     cout<< marks[i] << endl ;
    // }
    
    // int size = 5 ;
    // int marks[size] ;
    
    //  for (int i=0; i <size ; i++){
    //     cin >> marks[i] ;
    //  }

    // for(int i=0 ; i<size ; i++){
    //     cout<< marks[i] << endl ;
    // }



    // int arr[] = {1,2,3,5,15,22,1,-15,24};
    // int size = sizeof(arr)/sizeof(int);

    // int smallest = INT_MAX ;
    // int largest = INT_MIN ;

    // for (int i = 0; i < size; i++)
    // {
    //     smallest = min(arr[i], smallest);
    //     largest = max(arr[i] , largest);
    // }
    

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest=arr[i];
    //     }
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest=arr[i];
    //     }
    // }

    // cout << "smallest is : " << smallest << endl;
    // cout << "largest is : " << largest << endl;




    // int arr1[] = {0,1,2,4,5};
    // int size1 = 5 ;
    // int target1 = 2; 
    
    // cout <<  linearSearch(arr1, size1 , target1 ) << endl;


    // int arr2[] = {4,2,7,8,1,2,5};
    // int size2 = 7 ;
    // reverse(arr2,size2);

    // for (int i = 0; i < size2; i++)
    // {
    //     cout << arr2[i] << " " ;
    // }
    //    cout << endl ; 
     /*
    int arr3[] = {2,4,6,8,9,10} ;
    int size3 = 6 ;
    sumProArr(arr3 , size3);
    swapMaxMin(arr3 , size3);
    */ 
    int arr4[] = {2,4,2,4,8,10,6,8,9,10} ;
    int size4 = sizeof(arr4)/sizeof(int);
    uniqueNums(arr4 , size4);
 

    int arr5[] = {1,2,3,4,5} ;
    int arr6[] = {4,5,6,7,8} ;
    int size5 = sizeof(arr5)/sizeof(int);
    int size6 = sizeof(arr6)/sizeof(int);
    printIntersection(arr5 , arr6 , size5 , size6);
    cout << endl ;

    return 0;
}