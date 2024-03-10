// ALL THE CPP CODE I KNOW //
//COMPILING WITH CLANG
// comand to compile is clang++ (insted clang in c)


//__________PRINT/COUNT comand________________

// first_cpp_code.cpp
#include <iostream> // this a header file,is calling std lib that conteain cout (for example)
using namespace std;  // namespace is used to organize code to logical groups.
// the std is part of the <iostream> headder

int main() {// the main function, the function that is an entry point for code
    cout << "Hello world\n"; //cout means C output that is the code to output the values, after every statement u need to add ;
    std:: cout<<"hello world\n"; // the std:: is needed if u dong include "using namespace std;" before the main function
    cout << "hello there"<<endl; // <<endl "end line" is the substitude of the "newline" \n symbol
    cout << "hello" << "there" << endl; // this is the way for cancantination (or whatever this is )
}


//_____________________COMMENTS_______________________
//single line comment is done with // prefixing 
/* multiple are use with /* at the begining 
and at the end - */


//____________VARIABLES__________________
// fist_variables.cpp
// variables mutable need to declare the type
#include <iostream> 
using namespace std;

int main() {
    string message = "hi"; // declaring a string variables with value
    message = "hello";// changing the value
    
    int points = 128; //declaring a int variable with a value
    float length = 5.31f;//declaring a float variable with a value// the "f" at the end is needed (dont know why) but without the f it still works
    double temp = 84.2; //the double is a float that contain more memory but is precise
    char a = 'a'; // like in C use ' not " char is a single letter
    bool is = false; // it can have true or flase values (or 0 and not 0 values)
    cout << message<<endl;
    cout << points<<endl;
    cout << length<<endl;
    cout << temp <<endl;
    cout << is <<endl;
}


//_______________________OPERATION ON VARIABLES__________________________

//MATEMATICAL OPERATIONS
// with int  float double long  you can do all math operations in stdin.h + - * / and % - the rest of division

//first_math.cpp
#include <iostream> 
using namespace std;
int main(){
    int a = 28;
    int b = 3;
    int result = a*b;
    cout<< result << endl;
    int e = 500;
    double f = e/24;
    cout<< f << endl;
    int g = e % 7;
    cout<< g << endl;
}

//declaring_varibales.cpp
#include <iostream> 
using namespace std;
int main(){
    int a=8, b =2; // you can declare two variables of the same type like so
    //auto variable automaticly the variable type by its value BUT you need to declare the value, you cannot declare a variable and in another line assign a value
    auto x = 4;
    auto y = 3.37;
    auto z = "hello ";
    //naming variables
    //variable needs to star with a letter, canot have special characters and whitespaces beside _ and its capitalization sensitive
}

// _______________________INPUT_____________________________
// cin>>input.cpp
#include <iostream> 
using namespace std;
int main(){
    int age;//you need to declare a variable first before asking for an input from the user
    cout << "whats your age: "; // cout 
    cin >> age;
    cout << "your age is: "<<age<<endl; 
    int a,b;
    cin >> a; // you can ask for input for two variables one line at a time
    cin >> b;
    cin >> a >> b; // or in one line
    cout << a << b; 
}


// _______________________CONDITIONALS_____________________________

// ___________if, else if, else____________
// the conditionals deped on boolen values if true it will execute if not will skip
// it will operate on folowing symbols == < > >= != ect. 
// first_if_conditionals.cpp
#include <iostream>
using namespace std;

int main () {
    int value;
    cout << "insert a value between 1 - 100: ";
    cin >> value;
    if (value > 50){
        cout << "is more than 70" << endl;
    }
    else if (value < 25){
        cout << "is less than 25" << endl;
    }
    else {
        cout << "is more than 25 and less than 70" << endl;
    }
}

//_____________combining conditionals_______________
//conditionals_ands_ors.cpp
#include <iostream>
using namespace std;

int main (void){
    int temp;
    cout << "insert x : ";
    cin >> temp;
    if(temp >= 36 && temp <= 38){// && - and
        cout <<"ok";
    }
    else if (temp < 36 || temp < 38){// || - or
        cout << "maby ok";
    }
    else if (!(temp < 2)){ // ! means NOT , so if the value in the () is true then adding ! will reverse this 
        cout << "is not smaler than two";
    }
    // you can combine conditions in to very long statement like ((c =="NY"|| c=="LA")|| price < 1000)
}


//_______________switch_____________
//switch conditional will execute if the value of the variable is exual to the vale in the cases 
#include <iostream>
using namespace std;

int main (void){
    cout << "enter nubmer(1-3): ";
    int c;
    cin >> c ;
    switch(c){
        cout << "enter nubmer(1-3): ";
        cin >> c ;
        case 1:
            cout << "number is 1";
            break; // need to enter a break, if not it will execute the case in the indent and  the following up to the break commend;
        case 2:
            cout << "number is 2";
            break;
        case 3:
            cout << "number is 3";
            break;
        default: // if the value of the switch variable isnt mached with the cases vale it will you can assign a defaul value
            cout << "you havent entered value 1 or 2  or 3"<< endl;
    }
}


//_________________________LOOPS_____________________________

//_________while loops________________
//while loop execut while the condition is true
//first_while_loop.cpp
#include <iostream>
using namespace std;

int main (void){
    int num = 5;
    while(num > 0){
        cout << num <<endl;
        num = num - 1;
    }
}

//_____________do while loops______________
//do_while_loops.cpp
//do while loop is similar to while loop it checks the condition at the end
#include <iostream>
using namespace std;

int main (void){
    int num = 5;
    do {
        cout << num <<endl;
        num = num - 1;
    }while(num > 0);
}

//first_for_loop.cpp
//for loop has 3 elements, (first the element executed once; the condiotion; end element that runs every time when loops runs)
#include <iostream>
using namespace std;

int main (void){
    for (int i = 0; i < 5; i++){
        cout<<i<<endl;
    }
}

//__________increasing_____________
//increasing_the_values.cpp
#include <iostream>
using namespace std;
int main (void){
    int num = 5;
    while (num >0){
        cout << num <<endl;
        num --; // is the same as num = num - 1
    }
    cout  <<endl;
    while (num <=5){
        cout << num <<endl;
        num ++; // is the same as num = num + 1
    }
    cout  <<endl;
    while (num >0){
        cout << num <<endl;
        num -=2; // is the same as num = num - 2
    }
    cout  <<endl;
    int n =2;
    while (num <=5){
        cout << num <<endl;
        num += n; // is the same as num = num + n
    }
}

//___________break, continue in loops________________
//break_continue_in_loops.cpp
#include <iostream>
using namespace std;

int main (void){
    for (int i = 0; i < 10; i++){
        if(i == 2){
            continue;// restarts the loop
        }
        else if(i==5){
            break;//breaks from the loop
        }
        cout<< i<<endl;
    }
}


//___________________ARRYAS___________________
//first_arays.cpp
#include <iostream>
using namespace std;

int main (void){
    //declaring arryas
    double price[5]; //arrays need to be declared whith the sized declared
    dobrle price price[2]=8; //after declaring a array you can acces the elements (by their index) in the array(to change or read or ...)
    cout << price [2]; //and output it
    double prices[]={5.22,3.2,34,2.3} // you can declate an arrya by sepcifing the elements, you dont need to specify the size of array
    // you canot change the size of an array
}


//_____________LOOPING THRUE THE ARRYAS_______________
//looping_thought_arays.cpp
#include <iostream>
using namespace std;

int main (void){
    double prices[]={5.22,3.2,34,2.3};
    double sum=0;
    for(int i=0; i<4; i++){//you can loop thrught the elements
        cout<< prices[i]<<endl; //display them
        sum += prices[i];// or just access them
    }
    cout << sum<<endl;
    //fore-each loop
    for(auto x: prices){//you can iterath thought the elements as so
        cout << x<<endl;//the x varable could be declared as double or an auto
    }
}


//_____________ MULTI-DIM ARRYAS_____________________
//multidim_arays.cpp
#include <iostream>
using namespace std;

int main (void){
    //declaring multidimensional arryas
    int p[2][3]; // one way of declaring of multi-dim array
    int price[][3] = {{1,2,3},{4,5,6}}; // you need to declare at least the second dim of the array while declaring
    int num[2][3] ={
        {1,2,3},
        {4,5,6}
    };//its easyer to understand a double dim arrya if its organised as so

    for (int i = 0; i <2; i ++){
        for(int j=0; j<3; j++){
            cout << num[i][j]<< endl;//you can itereate thur it with double dim array
        }
    }
}


//__________________POINTERS__________________
//first_pointers.cpp
#include <iostream>
using namespace std;
//pointers store a memory adress 
int main (void){
    int* a; //declaring a pointer to a int value (without assing the adress)
    int num =42;
    int* p = &num; //& - give ma an adres // here we declare a pointer to a int value and assigning its adress
    cout <<p<<endl; // outputing the adress that the pointer points to
    cout << &num <<endl; // outputing the adress of the variable
    cout << &p <<endl; //outputing the adress of the pointer not what the pointer points to
    cout <<*p<<endl; // outputing the value that the pointer points to// that is called derefrencing. * in this context means go to this adress
    *p = 52; // here we can derefrence the pointer and acces the value that the pointer points to, and change the value stored in this adress
    cout << num <<endl;  // and output the changed value
}


//__________________POINTERS & ARRYAS__________________
//pointers_and_arrys.cpp
#include <iostream>
using namespace std;
//the array variable points to the first adress of the variable
int main (void){
    int arr[] = {1,2,3,4};
    cout <<arr<<endl; // as you can see here you dont output the array values you are outputing the adress of the first element
    cout <<&arr<<endl; // this is the same as above 
    cout <<&arr[0]<<endl; // this is the same as above as well
    cout <<&arr[1]<<endl; // this is different becouse its the second element (its a int so it should be 4 bytes away)
    
    int *p = arr; // you dont need to use &arr becous it is already an adress
    cout << *p<<endl;
    cout << *(p+1) <<endl; // this is the adres arytmecy, here we will output the second element 
    cout << arr[1]<<endl; // this is the same as above
    cout << (p+1) <<endl;
    cout <<&arr[1]<<endl;//this is the same as above

    // you can iteret thru the elements as so
    for (int i=0; i<4; i++){
        cout << *(p+i)<<endl;
    }
    // or
    for (int i=0; i<4; i++){
        cout << *p<<endl;
        p++;
    }

    //swap.cpp
#include <iostream>
using namespace std;
void swap(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main() {
    int a =1;
    int b =2;
    cout << "a is: "<< a<<endl;
    cout << "b is: "<< b<<endl;
    
    swap(&a,&b);
    cout<< "After change"<< endl;
    cout << "a is: "<< a<<endl;
    cout << "b is: "<< b<<endl;
    return 0;
}
}

//____________MEMORY_________
//dynamic_allocating_memory.cpp
#include <iostream>
using namespace std;

int main (void){
    int size = 8;
    int* p = new int[size]; //new is a key word to allocate memory
    for (int i = 0; i<size;i++){
        p[i]=i;//becouse an array is already an adress to a first element you can allocate a new element of size which iin this example is the same as int p[size]
    }
    for (int j = 0; j<size; j++){
        cout << p[j] << endl;
    }
    delete[] p; // when you ask for memory you need to free it
}

//searchig_for_the_biggest_numb.cpp
#include <iostream>
using namespace std;

int main (void){
    int n;
    cout << "how much numbers?: ";
    cin >> n; // size of array

    int* nums = NULL;
    nums = new int [n];

    int max = 0;
    for(int i=1; i<=n; i++){
        cout << "insert the "<<i<<" number: ";
        cin  >> nums[i];
        if(nums[i]>max){
            max = nums[i];
            // cout << "current max is : "<< max<<endl;
        }
    }
    cout << "the bigest number is: " <<max;
    delete[] nums;
}

//______________FUNCTIONS_______________
//first_functions.cpp
#include <iostream>
using namespace std;

void hello(string name);//inserting a function prototype//like in C// not nessesery but you can signal for te function existance before defining it

int main (void){
    string x;
    cout << "what is your name: ";
    cin >> x;
    hello(x);//calling for a function, you can call how may times you want
}

void hello(string name){//defining a function// void means it does not output anything// inside the () are the arguments
    cout << "hello "<<name<<endl;
}

//multiple_arguments.cpp
#include <iostream>
using namespace std;

void sum(int x,int y){
    cout<< x+y <<endl;
}
int main (void){
    sum(1,2);
}

//function_returning_values.cpp
#include <iostream>
using namespace std;

void add(int x,int y){// in this example the function will not return a values to the main fuction // void
    cout<< x+y <<endl;
}

int sum(int x,int y){// in this example the function will return a int values to the main fuction // int
    return x+y ;// keyword return will return the valueafter
}

int main (void){
    add(1,2);
    int a = sum(1,2);
    cout<< a<<endl;
}

//overloadinf_a_function.cpp
//oveerloading is a proces where you redefine a fun with different type of arguments
#include <iostream>
using namespace std;

int sum(int x,int y){
    return x+y ;
}

int sum(double x,double y){//here we redefine the function with double arrguments
    return x+y ;
}

// double sum(double x,double y){// we canot redefine a fun. with different return type
//     return x+y ;
// }

int main (void){
    int a = sum(1,2);
    cout<< a<<endl;
    int b = sum(1.2,2.03);
    cout<< b<<endl;
}

//defult_arguments.cpp
//oveerloading is a proces where you redefine a fun with different type of arguments
#include <iostream>
using namespace std;

int sum(int x,int y=2){//where you a def a function you can def a default value for the function arguments
    return x+y ;
}

int main (void){
    int a = sum(1);
    cout<< a<<endl;
}


//_________OBJECT ORIENTED PROGRAMING___________
//OOP is a proces where you use a object to program
//an object has its attributes (characteristics), identyty and functionality(behavior)
//exapme a car (identyty) is read (attribute) and can drive (functionality)


//________CLASSES___________
//CLASS is a object blueprint, it defines the object name functionalytie and attributes
//METHODS are the class function
// instane is an object of particular class

//declaring_a_class.cpp
#include <iostream>
using namespace std;

class BankAccount{//class name //object name usualy are starting with a capital letter
    public: //public is a access specifier
    // the values declared as "public" are accesable from the outside of the class// and in contrast u an use "private"
        void sayHi(){ // defining a method
            cout<<"Hi"<<endl;
        }
};

int main (void){
    BankAccount test;//creating a instance
    test.sayHi();// using a class method
}


//___________ABSTRACTION___________
//abstraction is a proces of leting only the nessesary info/data out of the class
//abstraction is a black bo philosophy, you what a function does not how it work beacuse it is not importatne

//__________ENCAPSULATION_________
// in OOP encapsulation is a process of restricting acces to praticular data/metods in an object
//key principle is to reveal only what is nessesery (data hiding)

//ACCESS SPECIFIERS are used to set access levels to class members - public, protect, private // if not sepcified default is privates
//declaring_a_class.cpp
#include <iostream>
#include <string>
using namespace std;

class myClass{
    public: // public parts
        void setName (string x){ // this method is defined to give access to the name attribute
            name = x;
        }
        string getName(){
            return name; // this method is writen to return the private attributes
        }
    private: // private parts
        string name; // that is not acceessable from the outside of the class
};

int main (void){
    myClass myObj;
    myObj.setName("Tom");
    cout<<myObj.getName() <<endl;
    return 0;
}


//__________CONSTRUCTOR_______________
//first_constructor.cpp
//constructor is a special function member of the class that is executed whenever an class instance is created
#include <iostream>
using namespace std;

class myClass{
    public: 
        myClass(string n){//the constructor name has to be the same as the class
            cout<<"hey"<<endl;
            setName(n);//constructor can be usefool the set the initial data
        }
        void setName (string x){ 
            name = x;
        }
        string getName(){
            return name;
        }
    private: 
        string name; 
};

int main (void){
    myClass myObj("tom"); //but while creating an object u need to specifiy he attribute
    cout<<myObj.getName() <<endl;
    return 0;
}


//______________DESTRUCTOR_______________
//first_destructor.cpp
//as construtor is executed while the obj is created the destructor is a function that is executed when the obj is deleted
// since destructors can't take parameters they cant alsow be ovverloaded, one class have one destructor
#include <iostream>
using namespace std;

class myClass{
    public: 
        myClass(string n){//the constructor 
            cout<<"hey"<<endl;
            setName(n);
        }
        ~myClass(){//the destructor name has to be the same as the class with ~ prior to the name
            cout<< "ending program"<<endl;
        }
        void setName (string x){ 
            name = x;
        }
        string getName(){
            return name;
        }
    private: 
        string name; 
};

int main (void){
    myClass myObj("tom"); //but while creating an object u need to specifiy he attribute
    cout<<myObj.getName() <<endl;
    return 0;
}


//______________CLASSES IN SEPARATE FILE____________
//Source & Header - is nessesary to implement a class frome a separate file
// header .h file// source .cpp the source code (with the class definition)
//the header holds the function declarations (protypes) and variable declaration
//source will hold its implementation and its methods 

//below is an example of moving a class to a separate file from a previous example 
//MyClass.h
#ifndef MYCLASS_H // stand - for if not defined // that tells the program to define the MyClass header if it has not beed definess
#define MYCLASS_H

#include <string>
using namespace std;

class myClass {
public:
    myClass(string n);
    ~myClass();
    void setName(string x);
    void myPrint();   
    string getName();
private:
    string name;
};
#endif

//MyClass.cpp
#include "MyClass.h"
#include <iostream>
using namespace std;
myClass::myClass(string n) { // def constructor
    cout << "hey" << endl;
    setName(n);
}

myClass::~myClass(){ // def destructor
    cout << "end program"<<endl;
}

void myClass::setName(string x) {
    name = x;
}

string myClass::getName() {
    return name;
}

void myClass::myPrint(){
    cout<<"hello"<<endl;
}

//my_first_class_implementation.cpp
#include "MyClass.h"
#include <iostream>
using namespace std;

int main() {
    myClass myObj("tom");
    cout << myObj.getName() << endl;
    return 0;
}
//to correcty compile the comiler function should be as follows: clang++ .\my_first_class_implementation.cpp .\MyClass.cpp -o .\my_first_class_implementation or -.exe

// you can preper all the above file in one file as so
//first_class_definition_prepared_for diferent_files.cpp
#include <iostream>
using namespace std;

class myClass {
public:
    myClass(string n);
    ~myClass();
    void setName(string x);
    void myPrint();   
    string getName();
private:
    string name;
};

myClass::myClass(string n) { // def constructor
    cout << "hey" << endl;
    setName(n);
}

myClass::~myClass(){ // def destructor
    cout << "end program"<<endl;
}

void myClass::setName(string x) {
    name = x;
}

string myClass::getName() {
    return name;
}

void myClass::myPrint(){
    cout<<"hello"<<endl;
}

int main() {
    myClass myObj("tom");
    cout << myObj.getName() << endl;
    myObj.myPrint();
    return 0;
}

//________________POINTERS IN CLASSES__________________
//pointer as used to get access to obj members 
//first_pointer_with_classes.cpp
#include <iostream>
using namespace std;

class myClass {
public:
    myClass();
    void myPrint();
};

myClass::myClass() {
}
void myClass::myPrint(){
    cout<<"hello"<<endl;
}

int main() {
    myClass myObj;
    myObj.myPrint();
    myClass* ptr = &myObj;//here we assign a pointer to obj adress
    ptr->myPrint(); //this is how to access the obj. members
    (*ptr).myPrint();// the -> is the same as (*__). // as can be seen here
    return 0;
}

//______________CONSTANTS_____________
//first_constats.cpp
//const varabiles/obj are are inmutable and canot be changed after its initialization
// only non-constant obj can call non-constant functions
// a const obj cant call regualr functions
// so if you want to use constant obj you need const function in you class definiotions
#include <iostream>
using namespace std;

class myClass {
public:
    myClass(string x);
    void myPrint();
    void justPrint() const; // const function declaration
};

myClass::myClass(string x) {
    cout<<"hello "<<x<<endl;
}
void myClass::myPrint(){
    cout<<"hello"<<endl;
}

void myClass::justPrint() const{  // const function definition
    cout<<"constant hello"<<endl;
}

int main() {
    const int i = 1;//constant variables with value delcare within initialization
    const myClass obj("tom"); //in case if constant classes u need to initialize by use of constructors
    obj.justPrint();
    // obj.myPrint(); // attempt to call a regural function on a const obj will resault in an error
    return 0;
}
