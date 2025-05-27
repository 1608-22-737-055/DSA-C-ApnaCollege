#include<iostream>


using namespace std;

//Lc-20 // Valid Parentheses
bool isValid(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) return false; // More closing than opening
        }
    }
    return count == 0; // All opened parentheses are closed
}

int main(){

isValid("("); // Example usage
    // cout << "The parentheses are valid." << endl;
    isValid("()[]{}"); // Example usage

    return 0;
}