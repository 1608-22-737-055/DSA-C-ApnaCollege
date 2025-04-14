#include<iostream>
#include<vector>

using namespace std;

// Pointers in C++
// A pointer is a variable that stores the address of another variable.
// Pointers are used to store the address of a variable in C++.
// A pointer is declared using the * operator.
// The address of a variable is obtained using the & operator.
// The value of a pointer is obtained using the * operator.
// The pointer can be dereferenced using the * operator.
// The pointer can be incremented or decremented using the ++ or -- operator.
// The pointer can be compared using the == or != operator.
// The pointer can be assigned to another pointer using the = operator.
// The pointer can be used to access the value of the variable using the * operator.
// The pointer can be used to access the address of the variable using the & operator.
// The pointer can be used to access the value of the variable using the -> operator.
// The pointer can be used to access the value of the variable using the [] operator.
// The pointer can be used to access the value of the variable using the () operator.


void changeA(int *a){  // pass by reference using pointers
   *a = 20;
}
void changeA1(int &b){  // pass by reference using alias
    b = 21;
 }


int main(){
/*  int n = 99;
  int* p = &n; 
  int  **p1 = &p; // pointer to pointer
  int ***p2 = &p1; // pointer to pointer to pointer
  int ****p3 = &p2; // pointer to pointer to pointer to pointer

//   cout << &n << endl;
  cout << &p << endl;
  cout << p << endl;
  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;
  //dereference
  cout<< *(&n) << endl;
  cout<< **(&p) << endl;
*/
/*
int a = 5;
int *p = &a;
int **q = &p; 

cout << *p << endl; // 5
cout<< &a <<endl;//add p
cout << **q << endl; // 5
cout << p << endl; //add p
cout << *q << endl; //add p
*/
/*
//pass by reference 

int a =11 ;
changeA(&a);//pass by reference usin g pointers 
changeA1(a);// pass by reference usign alias
cout << a << endl; 
*/
/*
// Array Pointers
// An array is a collection of similar data types.
int arr[] = {1,2,3,4,5};

// int a1 = 15;
// arr[0] = a1; // change the first element

cout << *arr << endl; // address of the first element

//Pointer Arithematic
//increment / decrement
// The pointer can be incremented or decremented using the ++ or -- operator.
int a = 10;
int*  ptr = &a; // pointer to a

cout << ptr << endl;
ptr++;
cout << ptr << endl; 
ptr--;
cout << ptr << endl; 
ptr+=2;
cout << ptr << endl; 
ptr-=2;
cout << ptr << endl; 

for (int i = 0; i < 4; i++)
{
  cout<< &arr[i] << " ";
}
cout << endl;
*/
//pointers can not be added to each other but can be subtracted tehn we'll be getting the integers inbetween.

// int* p1 ;
// int* p2 = p1 +2 ;

// cout << p1 << " "<< p2 << endl;
// cout << p2 - p1 << endl; // will give the difference between the two pointers

// The pointer can be compared using the == or != operator.
// The pointer can be assigned to another pointer using the = operator.


//Qs practice

int arr[] = {1,2,3,4,5};
int *ptr = arr; 

cout<< *ptr << endl; // 1
cout<< *(ptr +1) << endl;
cout<< *(ptr +3) << endl;
ptr++;
cout<< *ptr  << endl;




    return 0;
}