#include<iostream>
#include <string>


using namespace std;

// Search a 2D Matrix
// LC - 74
/*
class Solution {
public:

     bool searchInRow(vector<vector<int>>& matrix,int target , int midRow){
        int n = matrix[0].size();
        int st=0, end=n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(target==matrix[midRow][mid]){
                return true;
            }else if(target > matrix[midRow][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
     }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int m = matrix.size(), n = matrix[0].size();

           int startRow = 0, endRow = m-1;
           while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;

            if(target >= matrix[midRow][0] && target <=  matrix[midRow][n-1]){
              return searchInRow(matrix, target, midRow);
            }else if(target >= matrix[midRow][n-1]){
                startRow = midRow +1 ;
            }else{
                endRow= midRow -1;
            }
           }
           return false;
    }
};
*/

// lc-240
/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();

        int r=0 , c=n-1;
        while(r<m && c>=0){
            if(target == matrix[r][c]){
                return true;
            }else if(target < matrix[r][c]){
                c--;
            }else{
                r++; 
            }
        }
        return false;
    }
};
*/

int main(){


    return 0 ;
}