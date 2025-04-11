#include<iostream>

using namespace std;    


int main(){
  //Compute x^n 
  // Binary Exponentiation
  
  // 50 pow(x,n)
      /*
      class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        if n<0:
            return 1/self.myPow(x, -n)
        if n%2 == 1:
            return x*self.myPow(x,n-1)
        return self.myPow(x*x,n//2)
    
      */


  // 121 stock buy and sell   
   /*
   class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0 , bestBuy = prices[0];

        for(int i=1 ; i<prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
   */

   return 0 ;
}