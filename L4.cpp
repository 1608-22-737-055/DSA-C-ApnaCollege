#include <iostream>
using namespace std;

int main()
{

    //    int count=5;
    //    for ( int  i = 0; i < count; i++)
    //    {
    //       for (int j = 0; j < count; j++)
    //       {
    //          cout<< j ;
    //       }
    //       cout<<endl;
    //    }

    // Prints ABCDE four more times
    /*
    int n=5;
    for ( int  i = 0; i < n; i++)
    {
     char ch= 'A' ;
       for (int j = 0; j < n; j++)
       {
          cout<< ch ;
          ch=ch+1;
       }
       cout<<endl;
    }
    */

    // Square pattern
    /*
    int n=3 ;
    int num=1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
         cout<<num ;
         num +=1;
      }
      cout<<endl;
    }
    */

    // Triangle Pattern
    /*
    int n=4 ;
     char num='*';
     for (int i = 0; i < n; i++)
     {
       for (int j = 0; j < i+1; j++)
       {
          cout<<num ;
       }
       cout<<endl;
     }
     */

    //   int n=4 ;
    //   int num=1;
    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //        cout<<num ;
    //     }
    //     num++;
    //     cout<<endl;
    //   }

    //    int n=4 ;
    //   char num='A';
    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //        cout<<num ;
    //     }
    //     num++;
    //     cout<<endl;
    //   }

    //   int n=4 ;
    //   for (int i = 0; i < n; i++)
    //   {
    //     int num=1;
    //     for (int j = 0; j < i+1; j++)
    //     {
    //        cout<<num ;
    //        num +=1;
    //     }
    //     cout<<endl;
    //   }

    //   int n=4;
    //   for (int i = 0; i<n; i++)
    //   {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //        cout<<j<< " " ;
    //     }
    //     cout<<endl;
    //   }

    // Floyd's Triangle pattern
    //  int n=4;
    //  int num=1;
    //  for(int i =0 ; i<n ; i++){
    //    for (size_t j = 0; j < i+1; j++)
    //    {
    //      cout<<" "<< num ;
    //      num++;
    //    }
    //    cout<<endl;
    //  }

    // Floyd's Triangle pattern with ABCDE
    /*
  int n=4;
  char num='A';
  for(int i =0 ; i<n ; i++){
    for (int j = 0; j < i+1; j++)
    {
      cout<<" "<< num ;
      num++;
    }
    cout<<endl;
  }
  */

    //  // Pattern printing
    //    for(int i = 0; i < 4; i++) {
    //        char ch = 'A' + i;
    //        for(int j = i; j >= 0; j--) {
    //            cout << ch;
    //            ch--;
    //        }
    //        cout << endl;
    //    }

    // Inverted triangle pattern
    //   int n=4 ;
    //   for (int i = 0; i < n; i++)
    //   {
    //    for (int j = 0 ; j < i; j++)
    //    {
    //       cout<<" ";
    //    }
    //    for(int k =n-i; k>0 ; k--){
    //     cout<<i+1;
    //    }
    //    cout<<endl;
    //   }

    // Inverted triangle pattern with letters
    /*
    int n = 4;
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(int k = n-i; k > 0; k--) {
            cout << (char)('A' + i);
        }
        cout << endl;
    }
     */

    // Pyramid Pattern
    //   int n=4;
    //   for (int i = 0; i < n; i++)
    //   {
    //      //spaces:n-i-1
    //      for (int j=0; j<n-i-1; j++)
    //      {cout<< " "; }
    //      //nums1 :i i+1
    //      for (int j = 1; j <= i+1; j++)
    //      {  cout<<j;  }
    //      //nums2
    //      for(int j=i; j>0 ; j--)
    //      {cout << j;  }

    //     cout<<endl;
    //   }

    // Hollow Diamond Pattern
/*
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " " ;
        }
        
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2*i-1; j++)
        {
            cout << " " ;
        }
            cout << "*" ;
        }
      cout<<endl;
    }

     //bottom half
     for(int i=0 ; i<n-1; i++) {
        //spaces
        for (int j = 0; j < i+1; j++)
        {
            cout<< " " ;
        }
        
        cout<< "*" ;
        if (i != n-2)
        {
            //spaces
            for(int j=0; j<2*(n-i)-5; j++){
                cout << " " ;
            }
            cout<<"*";
        }
        cout << endl;
     }      
*/    



   // butterfly Pattern 
   //Top half
   int n=4;
   for(int i =0 ; i<n ; i++){
      //stars
      for (int j = n-i-1; j <n ; j++)
      {
        cout<<" * ";
      }
      //spaces
      for (int j =n-2*i+1 ; j >= 0; j--)
      {
        cout<< "   " ;
      }
      //stars
      for (int j = n-i-1; j < n; j++)
      {
        cout<<" * ";
      }
    cout<<endl;
   }
   //Bottom half

   for (int i = 0; i < n; i++)
   {
    //stars
    for (int j = 0; j < n-i; j++)
    {
    cout<<" * ";
    }
    //spaces 
    for (int j =n- i*2+1 ;j < n+1 ; j++)
    {
        cout<<"   ";
    }
    //starss
    for (int j = 0; j < n-i; j++)
    {
        cout<< " * ";
    }
    
    


    cout<<endl;
   }
   





 
    return 0;
}