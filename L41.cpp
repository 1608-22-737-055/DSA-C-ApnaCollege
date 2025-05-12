#include<iostream>
#include<vector>


using namespace std;

//   Recursion 

void printNums(int n){
    if(n == 0) {
        cout << endl;
        return;
    }
        cout << n << " ";
    printNums(n-1);
    
}

int printFact(int n){
    if(n == 0) {
        return 1;}
    return n*printFact(n-1);
}

int sumOfNums(int n){
    if(n==0){
        return 0;
    }

    return n + sumOfNums(n-1);
}

int main(){
  
   printNums(5);    

   cout << printFact(4) << endl;

    cout << sumOfNums(4) << endl;
    
    return 0;
}