#include<iostream>
using namespace std ;


int decToBin(int decNum){
    int ans =0 , pow=1;

    while (decNum > 0)
    {
        int r = decNum % 2 ;
        decNum = decNum /2 ;
         
        ans += (r * pow);
        pow *=10 ;
    }
    return ans;
}


int binToDec(int binNum){
    int ans =0 , pow =1 ;
    
    while (binNum > 0)
    {
        int rem = binNum %10 ;
        ans += rem * pow ;
    binNum /= 10;
    pow *= 2;
    }
    return ans ;
}



int power( int n){
int A =0 ;
    for (int i  = 1 ;    i <n     ; i++)
    {
     A = 2 * 2 ;
    }
    return A ;
}


int main() {
  
//   int decNum = 58;

//   for (int i = 0; i < 11; i++)
//   {
//      cout << "binary value of this "<< i <<" decimal is : " <<decToBin(i) << endl;

//   }
  
 cout << binToDec(101010)<<endl;
 
  cout <<power(2 )<< endl ;
  
  return 0 ;

}