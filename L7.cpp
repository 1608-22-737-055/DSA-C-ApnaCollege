#include<iostream>
using namespace std ;

int main(){
//Bitwise Operator 
// And & 
// cout << (6&10) << endl ;

// // Or |
// cout << (6|10) << endl ;

// // Xor ^
// cout << (6^10) << endl ; // 4 = 0100, 3 = 0011, 4^3 = 0111 = 7

// // left shift << 
// cout << (10<<2) << endl ; // 4 = 0100, 4<<2 = 10000 = 16
// // a<<b  = a*2^b

// // Right shift >>
// cout << (10>>1) << endl ; // 4 = 0100, 4>>2 = 0001 = 1

/*
for(int i = 0 ; i < 5 ; i++){
    cout << (1<<i) << endl ; // 1 = 0001, 1<<i = 0001 << i = 2^i
}


// Bitwise AND (&)
cout << (4&8) << endl ; // 4 = 0100, 8 = 1000, 4&8 = 0000 = 0

// Bitwise OR (|)
cout << (4|8) << endl ; // 4 = 0100, 8 = 1000, 4|8 = 1100 = 12

// Bitwise XOR (^)
cout << (4^8) << endl ; // 4 = 0100, 8 = 1000, 4^8 = 1100 = 12
// Bitwise NOT (~)
cout << (~4) << endl ; // 4 = 0100, ~4 = 1011 = -5
// Left Shift (<<)
cout << (4<<2) << endl ; // 4 = 0100, 4<<2 = 10000 = 16
// Right Shift (>>)
cout << (4>>2) << endl ; // 4 = 0100, 4>>2 = 0001 = 1
// Bitwise AND Assignment (&=)
int a = 4;
a &= 8; // a = a & 8 = 4 & 8 = 0
cout << a << endl ; // 0
// Bitwise OR Assignment (|=)
int b = 4;
b |= 8; // b = b | 8 = 4 | 8 = 12
cout << b << endl ; // 12
// Bitwise XOR Assignment (^=)
int c = 4;
c ^= 8; // c = c ^ 8 = 4 ^ 8 = 12
cout << c << endl ; // 12
// Left Shift Assignment (<<=)
int d = 4;
d <<= 2; // d = d << 2 = 4 << 2 = 16
cout << d << endl ; // 16
// Right Shift Assignment (>>=)
int e = 4;

e >>= 2; // e = e >> 2 = 4 >> 2 = 1
cout << e << endl ; // 1
// Bitwise Complement (~)
int f = 4;
f = ~f; // f = ~4 = -5
cout << f << endl ; // -5
// Bitwise AND (&)
int g = 4;
g = g & 8; // g = 4 & 8 = 0
cout << g << endl ; // 0
*/

// Operators Precendence
//! ,+ , - 
//, *, / , % ,
// + , - ,
// << , >> , < , > , <= , >= ,
// == , != ,
// & , ^ , | ,
// && , || , ?:, =, +=, -=, *=, /=, %=, &=, ^=, |=, <<=, >>=

//cout << (5-2)*6 << endl ;

// Scope 
// area variables 
// variables are declared inside a function or a block of code
// local variables  
// variables are declared inside a function or a block of code
// global variables
// variables are declared outside of any function or block of code
// static variables
// variables are declared inside a function or a block of code and retain their value between function calls
// extern variables
// variables are declared outside of any function or block of code and can be accessed from any file in the program
// register variables
// variables are declared inside a function or a block of code and are stored in the CPU registers instead of RAM for faster access
// auto variables
// variables are declared inside a function or a block of code and are automatically initialized to 0
// mutable variables
// variables are declared inside a class and can be modified even if the class is declared as const
// const variables
// variables are declared inside a class and cannot be modified
// volatile variables
// variables are declared inside a class and can be modified by the compiler
// but not by the program



// data type modifiers 
//  long 
//  short 
//  long long 
//  signed 
//  unsigned 

cout << sizeof(int) << endl ; // 4 bytes
cout << sizeof(long int) << endl ; 
cout << sizeof(short int) << endl ; 
cout << sizeof(long long) << endl ; 
cout << sizeof(signed int) << endl ; // can store negaive and positive numbers
cout << sizeof(unsigned int) << endl ; //always stores positive numbers

    return 0;
}