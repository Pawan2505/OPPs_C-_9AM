
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

