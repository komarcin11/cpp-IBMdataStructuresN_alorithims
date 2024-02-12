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
}