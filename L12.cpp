#include<iostream>
#include<vector>
using namespace std;


int main() {
    //Time Complexity 
    /*
     NOT the actual time taken but amount of tiem taken as a function of input size(n)
     highest value in an equation ignoring constants 
    */

    //Space Complexity
    /*
     Amount of space taken by an algorithm as function of input size(n).

    */
     
    int n =9 ;
    for(int i=2 ; i*i<=n ; i++){
        if(i%2 ==0){
            cout<<"Non prime ";
            break;
        }
    }
   
    

    return 0;
}