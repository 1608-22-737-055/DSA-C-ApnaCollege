#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Palindrome
// A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).


/*
class Solution {
public:

    bool isAlphaNum(char ch){
        if((ch>='0' && ch<='9')|| 
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {

      int st =0, end=s.length()-1;

        while(st<end){
            if(!isAlphaNum(s[st])){
                st++; continue;
            }
           if(!isAlphaNum(s[end])){
                end--; continue;
            }
            if(tolower(s[st])!= tolower(s[end])){
                return false;
            }

            st++; end--;
        } 
         return true;

    }
};
*/


// Remove all occurrences of a substring from a string
/*
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
*/


int isAlphaN(char c){
    return isalnum(c) ? true : false;
}

int main(){

     string s = "apna college";
     int n = s.length();
   int st =0, end=n-1;
    
   while(st < end){
     if(!isAlphaN(s[st])){
        st++; continue;
     }    
        if(!isAlphaN(s[end])){
            end--; continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            cout<< "Not a palindrome" << endl;
            return false;
        }
        st++; end--;
   }
    cout<< "Palindrome" << endl;
   return true;


   
  
    return 0;
}