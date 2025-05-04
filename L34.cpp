#include<iostream>
#include <string>
#include <cmath>
#include <vector>
#include<climits>



using namespace std;

// 2D Arrays in c++

pair<int,int> lS(int matrix[][3],int rows,int cols ,int target){
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(matrix[i][j] == target){
          cout<< matrix[i][j] <<" at i:"<<i<<" j: "<<j <<endl;
          return {i,j};
          }
    }
    cout<<endl;
} 
return {-1,-1};
}

int getMaxRowSum(int matrix[][3],int rows,int cols){
 int maxSum = INT_MIN;
  for (int i = 0; i < rows; i++)
  {
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
       sum+=matrix[i][j];
       maxSum=max(maxSum,sum);
    }
    
  }
  cout<<maxSum<<endl;
  return maxSum;
}

int getMaxColSum(int matrix[][3],int rows,int cols){
  int maxSum = INT_MIN;
  for (int i = 0; i < cols; i++)
  {
    int sum = 0;
    for (int j = 0; j < rows; j++)
    {
       sum+=matrix[i][j];
       maxSum=max(maxSum,sum);
    }
    
  }
  cout<<maxSum<<endl;
  return maxSum;
}

int diagonalSum(int matrix[][3], int rows,int cols){
  int sum =0;
  // for(int i=0 ; i<rows ;i++){
  //   for (int j=0 ; j<cols; j++){
  //     if(i==j){
  //       sum+=matrix[i][j];
  //     }else if(i+j == rows-1){
  //       sum+=matrix[i][j];
  //     }else{
  //       continue;
  //     }
  //   }
  // }
   for(int i=0;i<rows;i++){
      sum+=matrix[i][i];
      if(i!=rows-i-1){
        sum+=matrix[i][rows-i-1];
      }
   }
  cout<<"Sum of diagonal elements : "<<sum<<endl;
  return sum;
}

int main(){
     int arr[5] = {1,2,3,4,5};


   int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int rows =3;
   int cols =3;
   
  //  matrix[0][0] =13;
  //  cout << matrix[0][0] << endl;

  // input

  // for (int i = 0; i < rows; i++)
  // {
  //  for (int j = 0; j < cols; j++)
  //  {
  //      cin >> matrix[i][j];
  //  }
  // }

  //output 
 
  // for (int i = 0; i < rows; i++)
  //  {
  //   for (int j = 0; j < cols; j++)
  //   {
  //       cout << matrix[i][j] << " ";
  //   }
  //   cout << endl;
  //  }
  //  cout<<endl;


  int target =5;
   pair<int, int> result = lS(matrix, rows, cols, target);
   cout << "Row: " << result.first << ", Column: " << result.second << endl;
    
   getMaxRowSum(matrix,rows,cols);
   cout<<endl;

   getMaxColSum(matrix,rows,cols);
   cout<<endl;
   
   diagonalSum(matrix,rows,cols);
    cout<<endl;
   
    //2D vectors
    vector<vector<int>> mat ={{1,2,3},{4,5,6,2,3},{7,8,9,10}};
    // cout<<mat[0][0]<<endl;
    //row => mat.size()
    //col => mat[i].size()
  
    for(int i=0;i<mat.size();i++){
      for(int j=0;j<mat[i].size();j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;

    return 0;
}