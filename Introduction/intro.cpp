
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



// //   Hierarchical inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B :public A{
// public:
//     void displayB(){
//         cout<<"Class B..."<<endl;
//     }
// };

// class C :public A{

//     public:

//     void displayC(){
//         cout<<"Class C..."<<endl;
//     }
// };

// int main(){
//   C c;
//   c.displayA();

//   B b;

//   b.displayA();
 
// }




//   Hybrid inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B :virtual public A{
// public:
//     void displayB(){
//         cout<<"Class B..."<<endl;
//     }
// };

// class C :virtual public A{

//     public:

//     void displayC(){
//         cout<<"Class C..."<<endl;
//     }
// };

// class D : public B, public C{
//     public :

//     void displayD(){
//         cout<<"Class D.."<<endl;
//     }
// };

// int main(){

//     D d;

//     d.displayA();
 
// }

// DerivedObjName.ParentClassName::SameNamedMemberFunction(); 


// #include<iostream>
// using namespace std;

// class A{
//     public:

//     void displayA(){
//         cout<<"Class A..."<<endl;
//     }
// };

// class B : virtual public A{
// public:
//     void displayB(){
//         cout<<"Class B..."<<endl;
//     }
// };

// class C :virtual public A{

//     public:

//     void displayC(){
//         cout<<"Class C..."<<endl;
//     }
// };

// class D : public B, public C{
//     public :

//     void displayD(){
//         cout<<"Class D.."<<endl;
//     }
// };

// int main(){

//     D d;

//     d.A::displayA();
 
// }


// #include<iostream>
// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Hello Class A"<<endl;
//     }

//     friend class B;
// };

// class B : public A{
//     public:

//     void details(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.details();

// }

// #include <iostream>
// using namespace std;


// class Train {
// private:
//     int trainNumber;
//     string trainName;
//     string source;
//     string destination;
//     string trainTime;
//     static int trainCount;

// public:

//     ~Train() {
//         trainCount--;
//     }
   
//     void input() {
//         cout << "Enter Train Number: ";
//         cin >> trainNumber;
//         cin.ignore();

//         cout << "Enter Train Name: ";
//         cin>>trainName;
//         cin.ignore();

//         cout << "Enter Source: ";
//         cin>>source;
//         cout << "Enter Destination: ";
//         cin>>destination;

//         cout << "Enter Train Time: ";
//         cin>>trainTime;

//         trainCount++;

//     }

//     void display() {
//         cout << "Train Number: " << trainNumber << endl;
//         cout << "Train Name: " << trainName << endl;
//         cout << "Source: " << source << endl;
//         cout << "Destination: " << destination << endl;
//         cout << "Train Time: " << trainTime << endl;
//     }

//     static int getTrainCount(){
//         return trainCount;
//     }

//     int getNumber() {
//         return trainNumber;
//     }
// };

// int Train::trainCount = 0;


// class RailwaySystem {
// private:
//     Train t[100];   
//     int total;    

// public:
//     RailwaySystem() {
//         total = 0;
//     }

//     void addTrain() {
//         t[total++].input();
//         cout << "Train added successfully!\n";
//     }

//     void showAll() {
//         if (total == 0) {
//             cout << "No train record found!\n";
//             return;
//         }

//         for (int i = 0; i < total; i++) {
//             cout << "\nTrain " << i + 1 << " details:\n";
//             t[i].display();
//         }
//     }

//     void search(int num) {
//         for (int i = 0; i < total; i++) {
//             if (t[i].getNumber() == num) {
//                 cout << "\nTrain Found:\n";
//                 t[i].display();
//                 return;
//             }
//         }
//         cout << "Train not found!\n";
//     }
// };

// int main() {
//     RailwaySystem rs;
//     Train t1;
//     int choice, num;

//     do {
//         cout << "\n--- Railway Menu ---\n";
//         cout << "1. Add Train\n";
//         cout << "2. Show All Trains\n";
//         cout << "3. Search Train\n";
//         cout<<"4. Get Train Count"<<endl;
//         cout << "5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             rs.addTrain();
//             break;

//         case 2:
//             rs.showAll();
//             break;

//         case 3:
//             cout << "Enter Train Number: ";
//             cin >> num;
//             rs.search(num);
//             break;

//         case 4:
//             cout << "Train Count : "<<Train::getTrainCount()<<endl;
//             break;
//         case 5:
//             cout << "Bye Bye \n";
//             break;

//         default:
//             cout << "Wrong choice!\n";
//         }

//     } while (choice != 5);

//     return 0;
// }


// Pointer Object

// Use the Dot (.) operator when you have a direct object (created on the stack).

// Use the Arrow (->) operator when you have a pointer to an object (created on the heap with new).

// Pointer: Ek "Parchi" (Chit) jis par kisi ghar ka address likha hai.

// Dereferencing: Us parchi ko padhkar us ghar tak jaana aur dekhna ki andar kaun rehta hai.

// In C++, the size of an object is determined by its non-static data members, alignment requirements, and the presence of polymorphic features. Here are the core definitions and rules regarding object size in C++ OOP:

// 1. Non-Static Data Members
// These are the variables defined within a class that belong to each specific instance (object). The size of the object is primarily the sum of the sizes of these members (e.g., int, char, double, or other objects).

// 2. Static Data Members (Exclusion)
// Static members are not part of the object’s size. They are stored in a separate static memory area (global scope) and are shared by all instances of the class.

// #include<iostream>
// using namespace std;

// class Student{

// public:
// int age;

// Student(int age){
//     this->age = age;
// }

// void display(){
//     cout<<"Age : "<<age<<endl;
// }

// };

// int main(){

//     Student *s1 = new Student(21);
//     s1->display();

//     delete s1;
    
//     s1->display();

//     // Student s1(21);

//     // s1.display();

// }

// Array of Pointer objects

// #include<iostream>
// using namespace std;

// class Student{

// public:
// int age;

// Student(int age){
//     this->age = age;
// }

// void display(){
//     cout<<"Age : "<<age<<endl;
// }

// };

// int main(){

//     Student *s1[2];

//     s1[0] = new Student(21);
//     s1[1] = new Student(22);

//     s1[0]->display();
//     s1[1]->display();

//     delete s1[0];
//     // s1[0] = nullptr;
//     s1[0] = NULL;
//     delete s1[1];
//     // s1[1] = nullptr;
//     s1[1] = NULL;
//    s1[1]->display();
// }

// // OOP Interview Point: Dangling Pointer kya hai?
// // Definition: Jab kisi pointer se point ki gayi memory delete ho jati hai, lekin pointer abhi bhi us purane address ko hold karke rakhta hai, toh use Dangling Pointer kehte hain. Isse bachne ke liye hum pointer ko nullptr assign karte hain.

//     // delete s1[0];
//     // s1[0] = nullptr; // Ab s1[0] safe hai

//     // delete s1[1];
//     // s1[1] = nullptr; // Ab s1[1] kisi galat jagah point nahi kar raha

//     // Agar ab aap s1[1]->display() karenge, toh program turant crash hoga 
//     // jo ki "silent garbage value" se behtar hai.


// Polymorphism : https://www.geeksforgeeks.org/cpp/cpp-polymorphism/

// What is polymorphism in C++?

// Polymorphism in C++ is a core concept of Object-Oriented Programming (OOP) that allows objects of different classes to be treated as objects of a common base class. It enables a single interface to represent different underlying forms (data types). The term "polymorphism" means "many forms."

// real - life example of polymorphism?
// A real-life example of polymorphism is the concept of a "shape." Different shapes like circles, squares, and triangles can all be treated as "shapes." Each shape has its own way of calculating area and perimeter, but they can all be referenced through a common interface (the shape). When you call the method to calculate the area, the correct method for the specific shape is executed based on the actual object type.

// Function Overloading:As seen in your code, having multiple functions with the same name but different parameters.

// #include<iostream>
// using namespace std;

// class Student{
//     public : 
//     string name;
//    double salary;

//     // constructor -> constructor overloading -> compile time polymorphism

//     Student(){
//         cout<<"Default Constructor.."<<endl;
//         name = "Vaibhavi";
//         salary = 237288723753;
//     }

//     Student(string name, double salary){
//           cout<<"Paraeterised Constructor.."<<endl;
//         this->name = name;
//         this->salary = salary;
//     }

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){



//     Student s1("Chintan",784628376827),s2;

//     s2.display();

//     s1.display();

// }


// Operator Overloading: Giving special meaning to an operator (like + or <<) for user-defined classes.


// #include<iostream>
// using namespace std;

// class Add{
// public:
// int x;
// int y;

// Add() {
//         x = 0;
//         y = 0;
//     }

// Add(int x, int y){
//     this->x = x;
//     this->y = y;
// }

// Add operator+(const Add & obj){
//     Add ad;
//     ad.x = this->x + obj.x; 
//     ad.y = this->y + obj.y;

//     return ad;
// }


// };


// int main(){
// Add a1(10,20);
// Add a2(30,40);

// Add a3;

// a3 = a1+a2;

// cout<<"X : "<<a3.x<<endl;
// cout<<"Y : "<<a3.y<<endl;

// }


// Run - Time polymorphism 


// #include<iostream>
// using namespace std;

// class Animal{
//     public :

//    virtual void speak(){
//         cout<<"Every Animal Speack!"<<endl;
//     }
// };

// class Dog: public Animal{
// public :
//   void speak()override{
//         cout<<"Dog bark!"<<endl;
//     }
// };

// int main(){

//     Dog d1;

//     d1.speak();

// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Vehicle {
// public:
//     int vehicleID;
//     string manufacturer;
//     string model;
//     int year;
//     static int totalVehicles;

//     Vehicle() {
//         totalVehicles++;
//     }

//     Vehicle(int id, string mfg, string mdl, int y) {
//         vehicleID = id;
//         manufacturer = mfg;
//         model = mdl;
//         year = y;
//         totalVehicles++;
//     }

//     ~Vehicle() {
//         totalVehicles--;
//     }

  
//     int getVehicleID() { return vehicleID; }

//    void display() {
//         cout << "ID: " << vehicleID<< ", Manufacturer: " << manufacturer<< ", Model: " << model<< ", Year: " << year << endl;
//     }
// };

// int Vehicle::totalVehicles = 0;


// class Car : public Vehicle {
// public:
//     string fuelType;

//     Car(int id, string mfg, string mdl, int y, string fuel): Vehicle(id, mfg, mdl, y) {
//         fuelType = fuel;
//     }

// };

// class ElectricCar : public Car {
// public:
//     int batteryCapacity;

//     ElectricCar(int id, string mfg, string mdl, int y, string fuel, int battery): Car(id, mfg, mdl, y, fuel) {
//         batteryCapacity = battery;
//     }

// };

// class SportsCar : public ElectricCar {
//     public:
//     int topSpeed;

//     SportsCar(int id, string mfg, string mdl, int y, string fuel, int battery, int speed): ElectricCar(id, mfg, mdl, y, fuel, battery) {
//         topSpeed = speed;
//     }

// };


// class Sedan : public Car {
// public:
//     Sedan(int id, string mfg, string mdl, int y, string fuel): Car(id, mfg, mdl, y, fuel) {}
// };

// class SUV : public Car {
// public:
//     SUV(int id, string mfg, string mdl, int y, string fuel): Car(id, mfg, mdl, y, fuel) {}
// };


// class Aircraft {

// public:
//     int flightRange;

//     Aircraft(int range) {
//         flightRange = range;
//     }


// };

// class FlyingCar : public Car, public Aircraft {
// public:
//     FlyingCar(int id, string mfg, string mdl, int y, string fuel, int range): Car(id, mfg, mdl, y, fuel), Aircraft(range) {}

// };


// class VehicleRegistry {
//     Vehicle *vehicles[50];
//     int count;

// public:
//     VehicleRegistry() {
//         count = 0;
//     }

//     void addVehicle(Vehicle* v) {
//         vehicles[count++] = v;
//     }

//     void displayAll() {
//         for (int i = 0; i < count; i++) {
//             vehicles[i]->display();
//             cout << "------------------------" << endl;
//         }
//     }

//     void searchByID(int id) {
//         for (int i = 0; i < count; i++) {
//             if (vehicles[i]->getVehicleID() == id) {
//                 vehicles[i]->display();
//                 return;
//             }
//         }
//         cout << "Vehicle not found!" << endl;
//     }
// };

// int main() {
//     VehicleRegistry registry;
//     int choice;

//     do {
//         cout << "\nVehicle Registry Menu\n";
//         cout << "1. Add Sedan\n";
//         cout << "2. Add SUV\n";
//         cout << "3. Add Electric Sports Car\n";
//         cout << "4. View All Vehicles\n";
//         cout << "5. Search by ID\n";
//         cout << "0. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         int id, year, battery, speed;
//         string mfg, model, fuel;

//         switch (choice) {
//         case 1:
//             cout << "Enter ID, Manufacturer, Model, Year, Fuel: ";
//             cin >> id >> mfg >> model >> year >> fuel;
//             registry.addVehicle(new Sedan(id, mfg, model, year, fuel));
//             break;

//         case 2:
//             cout << "Enter ID, Manufacturer, Model, Year, Fuel: ";
//             cin >> id >> mfg >> model >> year >> fuel;
//             registry.addVehicle(new SUV(id, mfg, model, year, fuel));
//             break;

//         case 3:
//             cout << "Enter ID, Manufacturer, Model, Year, Fuel, Battery, Speed: ";
//             cin >> id >> mfg >> model >> year >> fuel >> battery >> speed;
//             registry.addVehicle(new SportsCar(id, mfg, model, year, fuel, battery, speed));
//             break;

//         case 4:
//             registry.displayAll();
//             break;

//         case 5:
//             cout << "Enter Vehicle ID: ";
//             cin >> id;
//             registry.searchByID(id);
//             break;
//         }
//     } while (choice != 0);

//     cout << "Total Vehicles: " << Vehicle::totalVehicles << endl;
//     return 0;
// }


//  Inheritance revision : 

// #include<iostream>

// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Class A"<<endl;
//     }

//     friend class B;
// };

// class B : private A{

//     public :

//     void datadisplay(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.datadisplay();

// }



// #include<iostream>

// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Class A"<<endl;
//     }

//     friend class B;
// };

// class B : protected A{

//     public :

//     void datadisplay(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.datadisplay();

// }



// #include<iostream>
// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Class A"<<endl;
//     }
// };

// int main(){

//     A a;

//     a.private();

// }


// #include<iostream>
// using namespace std;

// class A{
//     protected:
//     void display(){
//         cout<<"Class A"<<endl;
//     }
// };

// int main(){

//     A a;

//     a.display();

// }







// #include<iostream>

// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Class A"<<endl;
//     }

//     friend class B;

// };

// class B : public A{

//     public :

//     void datadisplay(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.datadisplay();

// }




// #include<iostream>

// using namespace std;

// class A{
//     protected:
//     void display(){
//         cout<<"Class A"<<endl;
//     }


// };

// class B : public A{

//     public :

//     void datadisplay(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.datadisplay();

// }


// // public -> public

// #include<iostream>

// using namespace std;

// class A{

//     public :

//         void display(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: public  A{

// };

// int main(){

//     B b;

//     b.display();

// }


// // public -> private

// #include<iostream>

// using namespace std;

// class A{

//     public :

//         void display(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: private  A{


//     public:

//     void print(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.print();

// }

// public -> protected

// #include<iostream>

// using namespace std;

// class A{

//     public :

//         void display(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: protected  A{


//     public:

//     void print(){
//         display();
//     }
// };

// int main(){

//     B b;

//     b.print();

// }

// #include<iostream>

// using namespace std;

// class A{

//     public :

//         void display(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: private  A{

//     public:

//     void print(){
//         display();
//     }

// };

// class C : public B{

//     public:

//     void details(){
//         print();
//     }
// };

// int main(){

//     C c;

//     c.details(); 

// }


// #include<iostream>

// using namespace std;

// class A{

//     public :

//         void display(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: protected  A{

//     public:


// };

// class C : public B{

//     public:

//     void details(){

//     }
// };

// int main(){

//     C c;

//     c.details(); 

// }


// hybrid inheritance


// #include<iostream>
// using namespace std;

// class A{

//     public :

//     void display(){
//         cout<<"Class A.."<<endl;
//     }
// };

// class B:virtual public A{

// };

// class C :virtual public A{

// };

// class D: public B, public C{

// };

// int main(){
//     D d;

//     d.display();
// }



// - Pointer Object

// - Array of Pointer objects

// - new operator

// - delete operator



// #include<iostream>
// using namespace std;

// class A{

//     public :

//     int age;

//     A(int age){
//         cout<<"A constructor..."<<endl;
//         this->age = age;
//     }

//     void display(){
//         cout<<"Class A.."<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){

//     // Pointer Object

//     // A a1(34);

//     A *a = new A(21);  // autometically constructor invoke

//     a->display();


//     delete a;

//     a = nullptr;

//     a = new A(22);
//     a->display();

// }

//  A dangling pointer is a pointer that still holds the memory address of an object after that object has been deleted. 
// Here is how you resolved it in your code and further modern alternatives:
// 1. Manual Resolution (What you did)
// In your code, you followed the standard manual safety procedure:
// Step 1: Use delete a; to free the heap memory.
// Step 2: Immediately assign a = nullptr;. 


// #include<iostream>
// using namespace std;

// class A{

//     public :

//     int age;

//     A(int age){
//         cout<<"A constructor..."<<endl;
//         this->age = age;
//     }

//     void display(){
//         cout<<"Class A.."<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){

//     // Pointer Object

//     // A a1(34);

//     A *a[3];  // autometically constructor invoke

//     a[0] = new A(11);
//     a[1] = new A(12);
//     a[2] = new A(13);

//     a[0]->display();
//     a[1]->display();
//     a[2]->display();
// }


// #include<iostream>

// using namespace std;


// class Physics{

//     public :
//     int force;

//     int friction;

//     double speed(double force, int friction){
//     cout<<"double int..."<<endl;
//         return force-friction;
//     }
//     double speed(double force, double friction){
//     cout<<"double..."<<endl;
//         return force-friction;
//     }

//     int speed(int force, int friction){
//         cout<<"int..."<<endl;
//         return force + friction;
//     }

// };

// int main(){

//     Physics a;

//     // cout<<a.speed(12,35)<<endl;
//     // cout<<a.speed(12.2,35.9)<<endl;
//     cout<<a.speed(12.2,35)<<endl;

// }



// Operator+ overloading


// #include<iostream>

// using namespace std;


// class Addition{

//     public :

//     int x;
//     int y;

//     Addition(){ }

//     Addition(int x, int y){
//         this->x = x;
//         this->y = y;
//     }

//     // operator overloading Cunstructor

//     Addition operator+(Addition &obj){
//         Addition ad;

//         ad.x = this->x + obj.x;
//         ad.y = this->y + obj.y;

//         return ad;
//     }

//     void display(){
//         cout<<"X : "<<x<<endl;
//         cout<<"Y : "<<y<<endl;
//     }
// };

// int main(){

//     Addition add1(10,20);
//     Addition add2(30,40);

//     Addition add3 = add1 + add2;


//     add3.display();

//     // (10+20i)
//     // (30+40i)

// }

// override 

// #include<iostream>
// using namespace std;

// class Fruit{
//     public:

//    virtual void display(){
//         cout<<"Class Fruit..."<<endl;
//     }
// };


// class Apple: public Fruit{
//     public:

//     void display()override{
//         cout<<"Class Apple..."<<endl;
//     }
// };


// int main(){

//     Apple ap;

//     ap.display();

//     return 0;
// }



// #include<iostream>

// using namespace std;

// // function declaration

// int add();

// int main(){
//     // function invoke
//      add();
// }

// // function definition
// int add(){
//     cout<<"Hello World"<<endl;
// }


// #include<iostream>

// using namespace std;

// class Student{
//     public :

//     //    virtual void display() = 0;

//         virtual void print() = 0;

// };

// class Stud : public Student{

//     public :

//     void print()override{
//         cout<<"Pure virtural function implemented."<<endl;
//     }
// };

// int main(){
    
//     Stud st;

//     st.print();
// }

#include<iostream>

using namespace std;

int main(){

    int numerator;
    cout<<"Enter Numerator : ";
    cin>>numerator;

    int denomerator;
    cout<<"Enter Denomerator : ";
    cin>>denomerator;

    try{

        if(denomerator == 0){
            throw("denomerator should not be zero.");
        }else if(denomerator<0){
            throw(denomerator);
        }
        int result  = numerator/denomerator;
        cout<<"Result : "<<result<<endl;
    }
    catch(char const* ex){
        cout<<ex<<endl;
    }
    catch(...){
        cout<<"Invalid denomerator! : "<<endl;
    }
    
    
    // catch(int data){
    //     cout<<"You are enter negative value : "<<data<<endl;
    // }
}