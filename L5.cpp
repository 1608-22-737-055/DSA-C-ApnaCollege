#include<iostream>
using namespace std;

// int  pirntHello(){
//     cout << "hello \n";
//     return 4;
// }

  int sum(int a , int b) {
    return a + b ;
  }
   
   double minOf2(double a , double b){
     return a < b ?  a : b ;
   }

   double sumOfN(int n){
    return n < 0 ? 1 : n + sumOfN(n-1) ;
   }

   int sumOfNums(int n){
    int dSum =0 ;
      while(n> 0){
        int lD = n % 10;
        n /=10;
        dSum += lD ;
      }
        return dSum ;
   }

   int fact(int n){
    return n>1 ? fact(n-1)*n : 1 ;
   }

   int nCr(int n , int r ){
    return  fact(n)/(fact(r) * fact(n-r)) ;
   }

   bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

    void allP(int n ){
    cout << "All prime numbers from 0 to " << n << "  ";
      
      for (int i = 0; i <= n; i++)
      {
        if (isPrime(i))
        {
            cout << i << " " ;
        }
      }
   }

    int fib(int n){
        int a=0 ,b =1 ,temp=0;
        for (int i=0 ; i<n ; i++){
            cout<< a << " " ;
            temp =a ;
            a = b ;
            b =temp +b ;
        }
    }

    int nthFib(int n){
        if (n<=1){ return n; }
         int a=0,b=1,temp=0;
         for (int i = 2; i <= n; i++)
         {
            temp = a +b ;
            a=b;
            b=temp;
         }         
         return b ;
    }

int main(){

    //cout<< pirntHello() << endl;
     
    //cout<< sum(2,3) << endl;
      
    // cout<< minOf2(2.2563,3) << endl; 

    // Sum of numbers from 1 to N . 

    // cout<< sumOfN(5) << endl;

   // cout << sumOfNums(123) <<endl;
    
    //   cout<< fact(5) << endl ;

    //    cout << nCr(8,2) <<endl;
      
    //cout << (isPrime(7) ? "Prime" : "Not Prime") << endl;

    //  allP(10) ;

     fib(10);
      cout<< "\n Nth fib number is " << nthFib(5) <<endl;
    return 0 ;
}