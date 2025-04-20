#include<iostream>
#include<vector>

using namespace std;

//  Book allocation or allocate books problem

/*
There are N books, each ith book has Ali] number of pages.
You have to allocate books to M number of students so that the maximum number of
pages allocated to a student is minimum.
• Each book should be allocated to a student.
• Each student has to be allocated at least one book.
• Allotment should be in contiguous order.
Calculate and return that minimum possible number.
Return -1 if a valid assignment is not possible.
*/

bool isValid(vector<int> &arr , int n , int m ,int maxAllowedPages){
   int stu =1 , pages =0;

   for (int i=0 ; i<n ; i++)
    {
        if (arr[i]>maxAllowedPages)
        {    return false;  }
        
        if (pages + arr[i]<= maxAllowedPages)
        {
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
     return stu > m ? false : true;
   }
   
int allocationBooks(vector<int> &arr , int n , int m ){
         if (m>n){ return -1 ;}
         
        int sum = 0 ;
        for (int i = 0; i < n; i++)
        { sum += arr[i];}
         
        int ans = -1 ;
        int st = 0 , end =sum ;

        while(st <= end){
            int mid = st + (end-st)/2 ;
            
            if(isValid(arr , n , m , mid)){ // left 
                ans = mid;
                end = mid -1;
            }else{ //right
                st = mid +1;
            }
        }
        return ans;
}

int main(){
    vector<int> arr = {15,17,20};
    int n =3 , m =2 ;

    cout<< allocationBooks(arr , n , m)<<endl;

    return 0;
}