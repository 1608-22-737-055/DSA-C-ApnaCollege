#include<iostream>
#include <string>
#include <cmath>

using namespace std;

//  Euclid's Algorithm | Sieve of Eratosthenes | Modular Arithmetics


/*
What we'll cover...
• Prime Logic & Sieve of Eratosthenes
• GCD with Euclid's Algorithm & LCM
• Digits in a number
• Reverse a num
• Check Palindrome
• Armstrong Logic
• Modular Arithmetics
• Fast Exponentiation
*/

std::string checkPrime(int n){
    if(n<=1) return "Not Prime";
    for(int i=2; i*i<=n; i++){
        if (n%i==0) return "Not Prime";
    }
    return "Prime";
}

void printDigits(int n){
    int count =0 ;
    int sum = 0;
    while (n !=0)
    {
        count++;
        int res = n %10;
        sum += res;
        cout<< res << endl;
        n = n / 10;    
    }
    cout<< "Count of Digits: " << count << endl;
    cout<< "Sum of Digits: " << sum << endl;
}


void isArmstrong(int n){
    int sum = 0;
    int temp = n;

    while(temp != 0){
        int dig = temp%10;
        sum += (dig*dig*dig);
        // sum += pow(dig,3);
        temp/=10;
    }
     sum == n ? cout<<"Armstrong" <<endl : cout<< "Not Armstrong" << endl;

}

int gcd(int a, int b){
    while(a > 0 && b > 0){
       if( a > b){
        a=a%b;
       }else{
        b=b%a;
       }
    }
    if(a==0) return b;
    return a;   
}

int gcdRec(int a, int b){
    if(b==0) return a;
    return gcdRec(b, a%b);
}

int lcm(int a , int b){
    return (a*b)/gcd(a,b);
}

int main(){

    //1. Prime Logic & Sieve of Eratosthenes
    // cout<< checkPrime(7) << endl;
    // cout<< checkPrime(10) << endl;
    // cout<< checkPrime(13) << endl;
    //LC 204 
    /*
    class Solution {
public:
    int countPrimes(int n) {

        int count=0;
        vector<bool> isPrime(n+1, true);
        
        for(int i=2 ; i<n ; i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2 ; j<n ; j=j+i){
                    isPrime[j] = false;
                }
            }
        }
        return count ;
    }
};
    */


    // 2. Digits in a number
    // printDigits(12345);

    // std::cout << (int)(std::log10(123) + 1) << std::endl;


    //3. Armstrong number
    int n = 153;
    isArmstrong(n);

    //4. GCD / HCF (gratest common divisor/ highest common factor)
    //brute force
    // int gcd1=1;
    // int a=23, b=46;

    // for (int i = 0; i < min(a,b); i++)
    // {
    //     if(a%i ==0 && b%i==0){
    //         gcd1=i;
    //     }
    // }
    // cout<<gcd1<<endl;
    
    // GCD with Euclid's Algorithm
     int n1 = 12,n2=20;
      
     cout<< gcd( n1,  n2) <<endl;
        cout<< gcdRec( n1,  n2) <<endl;

    
    //5. LCM (Least Common Multiple)

    
    cout<< lcm( 20,  28) <<endl;



    //Reverse a number
    int num =4537;
    int rev = 0;

    while(num !=0){
        int res =num%10;
        rev = rev*10 + res;
        num = num /10;
    }
    cout<< "Reversed Number: " << rev << endl;
    
    /*
    class Solution {
public:
    int reverse(int n) {
        int revNum=0;

        while(n!=0){
            int dig = n%10;
            if (revNum < INT_MIN/10 || revNum > INT_MAX/10){
               return 0 ;
            }  
            revNum = (revNum*10) + dig ;
            n=n/10; 
        }
        return revNum;
        
    }
};
    */
     //6. Check Palindrome
    //Check Palindrome
    /*
    class Solution {
public:
  int reverse(int n) {
        int revNum=0;

        while(n!=0){
            int dig = n%10;
            if (revNum < INT_MIN/10 || revNum > INT_MAX/10){
               return 0 ;
            }  
            revNum = (revNum*10) + dig ;
            n=n/10; 
        }
        return revNum;
        
    }
    bool isPalindrome(int x) {
         if (x<0) return false;
         int revNum = reverse(x);

         return x==revNum;
    }
};
    */
 

    //7. Modular Arithmetics
    /*
    Modulo Arithmetics
properties
(x + y) % m = x%m + y%m
(x - y) % m = x%m - y%m
(x • Y) % m = x%m . y%m
    
    */

    return 0;
}