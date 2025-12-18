
// #include<iostream>
// // The std is a short form of standard, the std namespace contains the built-in classes and declared functions.
// // using namespace std;

// int main(){
//     //  cout is an object of the ostream class
//     // used to display output to the standard output device
//     // The insertion operator (<<) is used with cout to insert data into the output stream.

//     // cout<<"Hello Class !\n";
//     std::cout<<"Hello Class !"<<std::endl;
//     std::cout<<"Samaj me aa raha hai";
// }

// #include<iostream>
// // The std is a short form of standard, the std namespace contains the built-in classes and declared functions.
// using namespace std;

// int main(){
//     //  cout is an object of the ostream class
//     // used to display output to the standard output device
//     // The insertion operator (<<) is used with cout to insert data into the output stream.

//     // cout<<"Hello Class !\n";
//     cout<<"Hello Class !"<<endl;
//     cout<<"Samaj me aa raha hai";
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int age;
//     cout<<"Enter Age : ";

//     cin>>age;

//     cout<<"Your age : "<<age<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){

//     int age,salary;
//     cout<<"Enter Age and salary : ";

//     // extraction operator (>>)
//     // The cin object reads data from the input
//     cin>>age>>salary;

//     cout<<"Your age : "<<age<<" and your salary : "<<salary<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){

//   string name = "Pawan Maurya";

//   cout<<"Your name is : "<<name<<endl;
//   cout<<"Size name is : "<<sizeof(name)<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){

//     // bool isPresent = true;
//     bool isPresent = false;

//     if(isPresent){
//         cout<<"Ha Bhai Condition true ho gya hai"<<endl;
//     }else{
//         cout<<"Bhai false ho gya!"<<endl;
//     }

// }

// local and global variable

// #include<iostream>
// using namespace std;

// // global valiable
// int age = 25;

// int main(){

// cout<<"Age : "<<age<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){
// int age = 25;
// cout<<"Age : "<<age<<endl;

// }

// #include<iostream>
// using namespace std;

// int age = 50;
// int main(){
// int age = 25;
// cout<<"Age : "<<::age<<endl;

// }

// #include <iostream>
// using namespace std;
// int age = 25; // gloable variable
// int data()
// {
//     cout << "Function age : " << age << endl;
//     // cout << "Salary fun : " << salary << endl;
// }
// int main()
// {
//     int salary = 999999; // local varable
//     data();

//     cout << "Main age : " << age << endl;
//     cout << "Salary fun : " << salary << endl;
// }



// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     void display(){
//         cout<<"Hello Disply Bhai!"<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj;

//     obj.display(); // not ok

// }



// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     void display(){
//         cout<<"Hello Disply Bhai!"<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj;

//     obj.display();

// }





// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     string name;
//     int age;

//     public:
//     void display(){
//        cout<<"Name : "<<name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj;

//     obj.name = "Pawan Maurya";
//     obj.age = 24;

//     obj.display();

// }





// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     string name;
//     int age;

//     public:
//     void display(){
//        cout<<"Name : "<<name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj;

//     obj.name = "Pawan Maurya";
//     obj.age = 24;

//     cout<<"Your name : "<<obj.name<<endl;
//     cout<<"Your age : "<<obj.age<<endl;

// }




// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     string name;
//     int age;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj,obj2;

//     // obj.name = "Pawan Maurya"; // not ok
//     // obj.age = 24; // not ok

//     // cout<<"Your name : "<<obj.name<<endl; // not ok
//     // cout<<"Your age : "<<obj.age<<endl;  // not ok


//     obj.setDetails("Pawan",22);

//     // obj.getDetails();

//     obj2.setDetails("Manish",24);
//     obj2.getDetails();
//     obj.getDetails();

// }



// Array of objects



// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     string name;
//     int age;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();


// }



// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     string name;
//     int age;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//     }

// };

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();


// }




// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     string name;
//     int age;
//     static int salary;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }

// };

// int Parent::salary = 1000;

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();

// }



// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     private:
//     string name;
//     int age;
//     static int salary;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }

// };

// int Parent::salary = 1000;

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();

//     // cout<<"By class : "<<Parent::salary<<endl; // not ok -> due to private

// }


// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     string name;
//     int age;
//     static int salary;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }

// };

// int Parent::salary = 1000;

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();

//     cout<<"By class : "<<Parent::salary<<endl; // ok

// }




// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     string name;
//     int age;
//     static int salary;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }

//     static void display(){
//         // cout<<"Name : "<<name<<endl; // NOt Ok
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int Parent::salary = 1000;

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();

//     cout<<"By class : "<<Parent::salary<<endl; // ok

//     // obj->display();

//     Parent::display();
// }


// #include<iostream>
// using namespace std;

// // class create
// class Parent{
//     public:
//     string name;
//     int age;
//     static int salary;

//     public:
//     // setter method
//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     void getDetails(){
//         cout<<"Your name : "<<name<<endl;
//         cout<<"Your age : "<<age<<endl;
//         cout<<"Your salary : "<<salary<<endl;
//     }

//     static void display(){
//         // cout<<"Name : "<<name<<endl; // NOt Ok
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int Parent::salary = 1000;

// int main(){

//     // object create

//     Parent obj[3]; // array of object

//     obj[0].setDetails("Sachin",26);
//     obj[1].setDetails("Manish",25);
//     obj[2].setDetails("Vivek",24);

//     obj[1].getDetails();
//     obj[0].getDetails();
//     obj[2].getDetails();

//     cout<<"By class : "<<Parent::salary<<endl; // ok

//     // obj->display();

//     Parent::display();
// }


// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // constructor -> parameterless constructor
//     Student(){
//         cout<<"Student constructor ... "<<endl;
//     }
    
// };

// int main(){

//     Student s1; // create object -> autometically invoke constructor

// }



// #include<iostream>
// using namespace std;

// int add(int x , int y){ // x,y -> parameter

// }

// int main(){
//     add(10,30);  // 10,30 -> argument
// }

// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Data member
//     string name;
//     double age;
//     int salary = 23435;

//     // constructor -> parameterless constructor
//     Student(){
//         cout<<"Student constructor ... "<<endl;
//         name = "Pawan";
//         age=24;
//         salary = 3846364;
//     }

//     // parametrised constructor
//     Student(string name, int age){
//         cout<<" int parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     Student(string name, double age){
//         cout<<" double parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     // parametrised constructor
//     Student(string name, int age,int salary){
//         cout<<"Three parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//         this->salary = salary;
//     }

//     void details(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
 
// };

// int main(){

//     Student s1("Manish",25); // create object -> autometically invoke constructor

//     s1.details();

//     // Student s2;
//     // s2.details();

//     // Student s3("Pankaj",30,749283);


//     // s3.details();

// }




// #include<iostream>
// using namespace std;

// int add(int x , int y){ // x,y -> parameter

// }

// int main(){
//     add(10,30);  // 10,30 -> argument
// }

// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Data member
//     string name;
//     double age;
//     int salary = 23435;

//     // constructor -> parameterless constructor
//     Student(){
//         cout<<"Student constructor ... "<<endl;
//         name = "Pawan";
//         age=24;
//         salary = 3846364;
//     }

//     // parametrised constructor
//     Student(string name, int age){
//         cout<<" int parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     Student(string name, double age){
//         cout<<" double parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     // parametrised constructor
//     Student(string name, int age,int salary){
//         cout<<"Three parametrised constructor"<<endl;
//         this->name = name;
//         this->age = age;
//         this->salary = salary;
//     }

//     void details(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
 
// };

// int main(){

//     Student s1("Manish",25); // create object -> autometically invoke constructor

//     s1.details();

//     // Student s2;
//     // s2.details();

//     // Student s3("Pankaj",30,749283);


//     // s3.details();

// }



// distructor

// #include<iostream>

// using namespace std;

// class Vehical{
//     public:
//     int srno;
    
//     // constructor
//     Vehical(int srno){
//         this->srno = srno;
//     }

//     void display(){
//         cout<<"srno : "<<srno<<endl;
//     }

//     // Destructor

//     // distructor is same as constructor name with ~ symbol
//     // it is used to free the memory allocated to object
//     // it is called autometically when object goes out of scope
//     // it has no return type and no parameters
//     // it is called only once for each object
//     // it cannot be overloaded
//     // it is used to clean up resources like closing files, releasing memory, etc.
//     // if you don't define a destructor, the compiler provides a default destructor

//     ~Vehical(){
//        cout<<"Destructor is called..."<<endl;
//     }

// };

// int main(){

//     Vehical v1(123);
//     Vehical v2(112233);

//     v1.display();
//     v2.display();

// }


// #include<iostream>

// using namespace std;

// class Vehical{
//     public:
//     int srno;
    
//     // constructor
//     Vehical(int srno){
//         this->srno = srno;
//     }

//     void display(){
//         cout<<"srno : "<<srno<<endl;
//     }
//     ~Vehical(){
//        cout<<"Destructor is called..."<<endl;
//     }

// };

// int main(){

//     Vehical v1(123);
//     Vehical v2(112233);

//     v1.display();
//     v2.display();
//     v1.display();

// }


// #include<iostream>

// using namespace std;

// class Vehical{
//     public:
//     int *srno;
    
//     // constructor
//     Vehical(int srno){
//         this->srno = new int;
//         *this->srno = srno;
//     }

//     void display(){
//         cout<<"srno : "<<*srno<<endl;
//     }
//     ~Vehical(){
//        cout<<"Destructor is called..."<<endl;
//        delete srno;
//        cout<<"SRNO : "<<*srno<<endl;
//     }

// };

// int main(){

//     Vehical *v1 = new Vehical(123);
    
//     v1->display();

//     delete v1;

// }


// - Reference Variable : 

// what is reference variable in C++?

// A reference variable in C++ is an alias for another variable.
// It is created using the '&' symbol and must be initialized when declared.
// Once a reference is established to a variable, it cannot be changed to refer to another variable.
// Reference variables are often used to pass arguments to functions by reference, allowing the function to modify the original variable's value without making a copy.


// #include<iostream>
// using namespace std;

// int display(int &x){

//     cout<<"The value of X is : "<<x<<endl;

//     x = 15;

//     cout<<"&x value : "<<&x<<endl;


//   cout<<"The value of X is : "<<x<<endl;

// }

// int main(){
//     int n  = 10;
//     cout<<"&n : "<<&n<<endl;
//     cout<<"The value of n is : "<<n<<endl;
//     display(n);
//     cout<<"The value of n is : "<<n<<endl;
// }



// Copy Constructor : 

// what is copy constructor in C++?

// A copy constructor in C++ is a special constructor that initializes a new object as a copy of an existing object.

// It has the following characteristics:

// It takes a reference to an object of the same class as its parameter.

// If not explicitly defined, the compiler provides a default copy constructor that performs a shallow copy.

// It is used when an object is passed by value, returned from a function, or explicitly copied.
// A user-defined copy constructor can be implemented to perform a deep copy, especially when the class contains pointer members to manage dynamic memory.


// diffrence between shallow copy constructor and deep copy constructor?

// Shallow Copy Constructor:
// memory allocation is not done for pointer members. they point to the same memory location as the original object.

// deep copy constructor:
// memory allocation is done for pointer members. they point to different memory locations.


// shallow Copy

// #include<iostream>
// using namespace std;

// class DiamondCompany{
//     public:
//         int id;
//         string name;

//     DiamondCompany(int id, string name){
//         this->id = id;
//         this->name = name;
//     }

//     void display(){
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     DiamondCompany diamond(1,"kohinoor");

//     // diamond.display();

//     DiamondCompany seconddiamond = diamond;

//     seconddiamond.display();

// }


// #include<iostream>
// using namespace std;

// class DiamondCompany{
//     public:
//         int id;
//         string name;

//     DiamondCompany(int id, string name){
//         this->id = id;
//         this->name = name;
//     }

//     // copy constructor

//     DiamondCompany(DiamondCompany const &object){
//         cout<<"Copy constructor called..."<<endl;
//         this->id = object.id;
//         this->name = object.name;
//     }

//     void display(){
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     DiamondCompany diamond(1,"kohinoor");

//     diamond.display();

//     DiamondCompany seconddiamond = diamond;

//     seconddiamond.display();

// }





// #include<iostream>
// using namespace std;

// class DiamondCompany{
//     public:
//         int id;
//         string *name;

//     DiamondCompany(int id, string name){
//         cout<<"Parametrised constructor..."<<endl;
//         this->id = id;
//         this->name = new string(name);
       
//     }

//     // copy constructor

//     DiamondCompany(DiamondCompany const &object){
//         cout<<"Copy constructor called..."<<endl;
//         this->id = object.id;
//         this->name = new string();
//         name = object.name;
        
//     }

//     void display(){
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<*name<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     DiamondCompany diamond(1,"Pawan");

//     diamond.display();

//     DiamondCompany seconddiamond = diamond;

//     seconddiamond.display();

// }



// deep copy constructor




// #include<iostream>
// using namespace std;

// class DiamondCompany{
//     public:
//         int id;
//         string *name;

//     DiamondCompany(int id, string name){
//         cout<<"Parametrised constructor..."<<endl;
//         this->id = id;
//         this->name = new string(name);
       
//     }

//     //deep copy constructor

//       DiamondCompany(DiamondCompany const &object){
//         cout<<"deep copy constructor called..."<<endl;
//         this->id = object.id;
//         this->name = new string(*object.name);  
//     }

//     ~DiamondCompany(){
//         delete name;
//     }

//     void display(){
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<*name<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     DiamondCompany diamond(1,"Pawan");

//     diamond.display();

//     DiamondCompany seconddiamond = diamond;

//     seconddiamond.display();

// }

// vector -> dynamic array -> memory allocation -> non-contiguous

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1 = {12,435,67,78};

//     // v1.push_back(10);
//     // v1.push_back(20);
//     // v1.push_back(30);
//     // v1.push_back(40);
//     // v1.push_back(50);
//     // v1.push_back(60);

//     // cout<<"Size of vector : "<<v1.size()<<endl;
//     // cout<<"Vector empty or not : "<<v1.empty()<<endl;

//     // v1.clear();
//     // cout<<"Size of vector : "<<v1.size()<<endl;
//     // cout<<"Vector empty or not : "<<v1.empty()<<endl;

//     // v1.pop_back();
//     //    cout<<"Size of vector : "<<v1.size()<<endl;
//     // cout<<"Vector empty or not : "<<v1.empty()<<endl;

//     // cout<<"Top : "<<v1.front()<<endl;
//     // cout<<"Top : "<<v1.back()<<endl;

//     // for(int element : v1){
//     //     cout<<element<<" ";
//     // }

//     for(int i = 0; i < v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
// }
// Inheritance


// #include<iostream>
// using namespace std;

// // Parent class
// class Teacher{
//     public:

//     void teach(){
//          cout<<"Teacher agr students nhi padhte to marta bhee hai."<<endl;
//     }
// };

// // Child Class
// class Student:public Teacher{
//     public:

//     void display(){
//         cout<<"Child class..."<<endl;
//     }
// };

// int main(){

//     Student s1; // child class object
//     s1.teach();
//     s1.display();

// }



// #include<iostream>
// using namespace std;

// // Parent class
// class Teacher{
//     public:

//     int salary;
//     string name;

//     Teacher(int salary,string name){
//         this->salary = salary;
//         this->name = name;
//     }

//     void teach(){
//          cout<<"Teacher agr students nhi padhte to marta bhee hai."<<endl;
//          cout<<"Salary : "<<salary<<endl;
//     }
// };

// // Child Class
// class Student:public Teacher{
//     public:

//     int age;

//     Student(int age, int salary,string name):Teacher(salary,name){
//         this->age = age;
//     }

//     // void display(){
//     //     cout<<"Child class..."<<endl;
//     //     cout<<"Age : "<<age<<endl;
//     //     cout<<"salary : "<<salary<<endl;
//     //     cout<<"Name : "<<name<<endl;
//     // }

//     void showDetails(){
//         cout<<"Child class..."<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"salary : "<<salary<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     Student s1(22,999999,"Pawan"); // child class object
//     s1.teach();
//     s1.showDetails();

// }

// single inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B:public A{

// };

// int main(){
//     B b;

//     b.displayA();
// }


// // MultiLevel  inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B:public A{
// public:
//     void displayB(){
//         cout<<"Class B..."<<endl;
//     }
// };

// class C : public B{

// };

// int main(){
//   C c;
//   c.displayA();
//   c.displayB();
// }



// // Multiple  inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B{
// public:
//     void displayB(){
//         cout<<"Class B..."<<endl;
//     }
// };

// class C :public A, public B{

// };

// int main(){
//   C c;
//   c.displayA();
//   c.displayB();
// }



//   Hierarchical inheritance

#include<iostream>
using namespace std;

class A{
    public:

    void displayA(){
        cout<<"Class A..."<<endl;
    }
};

class B :public A{
public:
    void displayB(){
        cout<<"Class B..."<<endl;
    }
};

class C :public A{

    public:

    void displayC(){
        cout<<"Class C..."<<endl;
    }
};

int main(){
  C c;
  c.displayA();

  B b;

  b.displayA();
 
}