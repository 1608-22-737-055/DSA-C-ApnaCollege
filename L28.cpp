#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//Strings and character arrays in c++

int main(){
    //  char str[]="hello";// string literal

    //  cout<< str << endl;// length of string
    //  cout<< sizeof(str) << endl;// size of string

    //  char str1[100];
    //   cout<< "Enter a string: ";
    // //   cin>>str1;
    //   cin.getline(str1, 100 ,'$');  
    //     // cout<< str1 << endl;// length of string

    //  char st[] ="apna college";
    //  int len=0;
    //     while(st[len]!='\0'){
    //         len++;
    //     }
    //     cout<< "Length of string is: "<< len << endl;
     
    //     string sr ="hello";//dynamic in nature
    //     cout<< sr << endl;// length of string

        // string in;
        // getline(cin, in);
        // cout<< in << endl;// length of string

        string ss ="save  soil";
        for(char s :ss){
            cout<< s << " ";
        }
        cout<< endl;

        reverse(ss.begin(), ss.end());
        cout<< ss << endl;

        string input;
        cin>> input;
         string rev = input;
         reverse(rev.begin(), rev.end());
       
         if (input == rev){
            cout << "Palindrome" << endl;
        } else {
            cout << "Not a palindrome" << endl; 
        }
        
      


    return 0;
}