#include<iostream>
using namespace std;
int main(){
    int a=3 ,b=5;
    // there are two types of header file 
    // 1. system defined header file : it comes with compiler
    // 2. user defined header file : it will produce by the programmer 
    // #include "this.h" //--> this will produce an error if this.h is not present in the current directory
     cout<< "Operators in C++ " <<endl;
     cout<<"Following are the types of operators in C++" <<endl;
    cout <<"1. Arithmetic operators"<<endl;
    cout<<"The value of a + b is "<< a+b <<endl;
    cout<<"The value of a - b is "<< a-b <<endl;
    cout<<"The value of a * b is "<< a*b <<endl;
    cout<<"The value of a / b is "<< a/b <<endl;
    cout<<"The value of a % b is "<< a%b <<endl;
    cout<<"The value of a ++ is "<< a++<<endl;
    cout<<"The value of a -- is "<< a-- <<endl;
    cout<<"The value of ++a is "<< ++a <<endl;
    cout<<"The value of --a is "<< --a <<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"2. Assignment operators --> used to assign values to variables"<<endl;
    // int a =3 ,b=9;
    // char d = 'd';
    

    cout<<"3. Comparision Opeartors" <<endl;
    cout<<"The value of a == b is "<< (a == b)<<endl;
    cout<<"The value of a!= b is "<< (a != b)<<endl;
    cout<<"The value of a > b is "<< (a > b)<<endl;
    cout<<"The value of a < b is "<< (a < b)<<endl;
    cout<<"The value of a <= b is "<< (a <= b)<<endl;
    cout<<"The value of a >= b is "<< (a >= b)<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<"4.Logical Operators"<<endl;
    cout<<"The value of this logial and operator ((a==b))&& ((a <b)) is : "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logial or operator ((a==b))||((a <b)) is : "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logial not operator ((!a==b)) is : "<<((!a==b))<<endl;



    return 0;

}