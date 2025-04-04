#include<iostream>
using namespace std;

int main() {
    
    //Conditional Statements

    //   int n =4;
    //   if (n>40) {
    //    cout<<"n is more than 40"<< endl ;  
    //   }else{
    //     cout<<"n is less than 40"<<"\n";
    //   }
      
    //   cout<<(n>40? "n is more":"n is less")<<endl;
        
    //    int n1=0;
    //   while (n1<6)
    //   {
    //     cout<< (n1) << " " ;
    //     n1++ ;
    //   }
      
    //   for(int i=0; i<10 ; i++){
    //     cout<<"i :" << i << "\n ";
    //   }
      

      // sum of numbers from 1 to n 
    //    int count = 5 ,sum=0 ;// 1+2+3+4+5
    //   for (size_t i = 0; i <= count; i++)
    //   {
    //     sum =sum +i;
    //   }
    //    cout<< "Sum :" << sum ;

       
       //while loop ex
    //    char ch = 'a';  // Initialize with any non-Q character
    //    while (ch != 'Q' && ch != 'q')  // Continue until Q or q is entered
    //    {
    //     cout << "Enter a character (Q/q to quit): ";
    //     cin >> ch;
    //     cout << "You entered: " << ch << endl;
    //    }
         
         // Sum of all odd numbers from 1 to N 
        //  int sum = 10 ,tot=0; // 1+3+5+7+9
        //  for (int i =1 ; i<=sum ; i+=2){
        //   tot += i ;
        //  }
        // cout<<"  sum is : " << tot ;
          
        //   int n = 10, oddSum=0;
        //   for (int i = 1; i <= n; i++)
        //   { // all odd numbers
        //     if (i%2 !=0){
        //       oddSum+=i ;
        //     }
        //   }
        //   cout<<"odd sum :" <<  oddSum <<endl;          
        

        //  int n =0;        
        // do{
        //  cout << "Hello : " << n <<'\n' ;
        //  n++;
        //  } while ( n>9);
         
         // prime or not 
         /*
         int num;
         bool Prime = true;
         cout << "Enter a number: ";
         cin >> num;
        
        for(int i = 2; i < num/2; i++){
            if (num % i == 0) {
                Prime = false;
                break;
            }
        }
        cout << (Prime ? "Prime" : "not prime") << endl;
        */

        //Nested loops 

        // for (int i = 0; i < 5; i++)
        // {
        //     for (int j = 0; j < 5 ; j++)
        //     {
        //         cout<< " * "  ;
        //     }
        //     cout << "\n" ;
            
        // }


        //Homework
        /*
        1. Sum of all numbers from 1 to N whihc are divisible by 3 
        2. Print factorial of a number N.
        */
       /*
       int N = 5 , sum=0 ;//1+2+3+4+5
       for (int i = 1; i <= N; i++)
       {
        //cout<< sum <<endl ;
         sum += i ;
       }
       cout<<"sum is : " << sum << endl;
        */

       int N = 7 , fact=1 ;
       for (int i = 1; i <= N; i++)
       {
        //cout<< fact <<endl ;
         fact *= i ;
       }
       cout<<"fact is : " << fact << endl;

       // Pattern printing
       for(int i = 0; i < 4; i++) {
           char ch = 'a' + i;  // Start with 'a' and increment for each line
           for(int j = i; j >= 0; j--) {
               cout << ch;
               ch--;  // Decrease the character for each position
           }
           cout << endl;
       }

       // Inverted triangle pattern with letters
       int n = 4;
       for(int i = 0; i < n; i++) {
           // Print spaces
           for(int j = 0; j < i; j++) {
               cout << " ";
           }
           // Print letters
           for(int k = n-i; k > 0; k--) {
               cout << (char)('A' + i);  // Convert to uppercase letter
           }
           cout << endl;
       }

       // Pyramid pattern with numbers
       for(int i = 0; i < n; i++) {
           // Print spaces
           for(int j = 0; j < n-i-1; j++) {
               cout << " ";
           }
           // Print increasing numbers
           for(int j = 1; j <= i+1; j++) {
               cout << j;
           }
           // Print decreasing numbers
           for(int j = i; j >= 1; j--) {
               cout << j;
           }
           cout << endl;
       }

    return 0; 
}