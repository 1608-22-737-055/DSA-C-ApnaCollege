#include<iostream>
#include<string>

using namespace std;
/*
class Teacher{

    private:
     double salary;
    public:
    
    //properties
    string name;
    string dept;
    string subject;
   

        Teacher(){
            // cout << "Hi, I am constructor \n";
            dept = "Information Technology";
        }
 // parameterized
       Teacher(string name, string dept , string subject, double salary) {
 this->name =name;
this->dept = dept ;
this->subject = subject ;
this->salary = salary ;
       }

    //copy constructor
    Teacher(Teacher &orgObj){
        cout << "This is a custom copy constructor ... \n"; 
        this->name= orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }



    //methods / member functions 
    void changeDept(string newDept){
         dept = newDept;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
        
    }

    // //setter
    // void setSalary(double s){
    //     salary =s;
    // }

    // //getter
    // double getSalary(){
    //     return salary ;
    // }


};


class Account {
private:
    double balance;
    string password;

    public:
      string accountId;
      string username;
};


class Student{
   public:
     string name;
     double* cgpaPtr ;
     Student(string name, double cgpa){
        this->name= name;
       cgpaPtr = new double;
       *cgpaPtr =cgpa ; 
     }  

    //  Student(Student &obj){
    //     this->name = obj.name;
    //     cgpaPtr= new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    //  }

    //destructor
    ~Student(){
       cout << "Hi, I delete everything \n"; 
       delete cgpaPtr;   // if not created may lead to memory leak
     }

     void getInfo(){
        cout<<"name: "<< name << endl; 
        cout<<"cgpa: "<< *cgpaPtr << endl; 
     }
};
*/

class Person{
public:
   string name;
   int age;

//    Person(string name, int age){
//     this->name=name;  
//     this->age=age;
//    }
//       Person(){
//         cout <<"Parent constructor..."<<endl;
//       }


};

class Student: public Person{
  public:
     int rollno;

    //  Student(string name, int age, int rollno): Person(name, age) {
    //     // cout<<"child constructor...\n" <<endl;
    //     this->rollno = rollno;
    //  }

    //  void getInfo(){
    //     cout<<"name: "<<name<<endl;
    //     cout<<"age: "<<age << endl;
    //     cout<<"rollno: "<< rollno<< endl; 
    //  }
};

class Teacher : public Student {
    public:
       string subject;
};

class TA : public Teacher{
    public:
        string researchArea;
};


class Vidyardhi {
 public: 
     string name;
    
    Vidyardhi(){
        cout << "non-parameterized \n";
    }

     Vidyardhi(string name){
        this->name=name;
        cout << "parameterized \n";
     }
};

class Print{
  public:
    void show(int x){
        cout << "int : "<< x << endl;
    }
    void show(char ch){
        cout << "char: "<< ch << endl;
    }
};

class Parent {
 public:
   void getInfo(){
    cout<< "Parent class \n";
    }

    virtual void hello(){
        cout << "hello from parent";
    }
};

class Child: public Parent {
 public:
    void getInfo(){
        cout<<"child class \n";
    }
    virtual void hello(){
        cout << "hello from child";
    }
};

class Shape { //abstract class
virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
  public:
      void draw() {
     cout << "drawing a circle\n";
      }
    };


    void fun(){
        static int x =0 ;
        cout << "x : " << x << endl;
        x++;
    };

    class A {
    public: 
      int x ;
      
      void incX(){
          x=x+1;
      }
    };

class ABC {
public:
ABC() {
cout<<" constructor\n" ;
}
~ABC(){
cout<<"destructor\n";
}
};


int main(){
     
     if (true){
        ABC obj;
     }


     A obj1;
     A obj2;


     obj1.x=100;
     obj2.x=200;
     cout << obj2.x << endl;
    //  obj.incX() ;
    //  cout << obj .x << endl;

     fun();
     fun();
     fun();


    Circle c1;
    c1.draw();


    Parent p1;
    p1.getInfo();


    // Print p1;
    // p1.show(2);

  
    Vidyardhi v1("qwerty");


    // TA t1;
    // t1.name = "tony spark";
    // t1.subject = "Technology";
     
    // cout<< t1.name << endl;

    // GradStudent s1;
    // s1.name= "tony stark";
    // s1.researchArea = "physics";




    // Student s1("ram", 20 , 55);
    // s1.getInfo();


    // Student s1("rahul kumar", 8.9);
    // s1.getInfo();

    // Student s2(s1);
    // // s2.getInfo();

    // s1.getInfo();
    // *(s2.cgpaPtr) = 9.2 ;
    // s1.getInfo();


    // s2.name="neha";
    // s2.getInfo();

    /*
    Teacher t1("mam", " Information tech", "C++", 25000 );
    t1.getInfo();

    Teacher t2(t1); // Copy constructor
    t2.getInfo();


    // t1.name="Shradha mam";
    // t1.subject="C++";
    // // t1.dept="Computer Science";
    // t1.setSalary(25000);

    // cout<<t1.dept<<endl; 
    // cout<<t1.name<<endl; 
    // cout<<t1.getSalary()<<endl; 
    // Teacher t2;
    // Teacher t3;
    // Teacher t4; */
    


    return 0;
}