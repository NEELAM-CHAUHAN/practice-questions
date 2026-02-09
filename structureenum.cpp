#include<iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid writing std:: repeatedly

// Define a class named 'Employee'
class Employee
{
    // Private members: these variables can only be accessed from within the Employee class
    private:
        int a,b,c;

    // Public members: these variables and functions can be accessed from outside the Employee class
    public:
        int d,e;

        // Function declaration: declares a function named 'setData' that takes three integers
        // This function will be defined outside the class
        void setData(int a1,int b1,int c1);

        // Function definition: defines a function named 'getData'
        // This function will print the values of all member variables (a, b, c, d, e)
        void getData(){
            cout<<"The value of a is " <<a <<endl; // Print value of 'a'
            cout<<"The value of b is " <<b <<endl; // Print value of 'b'
            cout<<"The value of c is " <<c <<endl; // Print value of 'c'
            cout<<"The value of d is " <<d <<endl; // Print value of 'd'
            cout<<"The value of e is " <<e <<endl; // Print value of 'e'
        }
};

// Function definition for 'setData' outside the class
// The '::' (scope resolution operator) tells the compiler that 'setData' belongs to the 'Employee' class
void Employee :: setData(int a1,int b1,int c1){
    a = a1; // Assign the value of a1 to the private member 'a'
    b = b1; // Assign the value of b1 to the private member 'b'
    c = c1; // Assign the value of c1 to the private member 'c'
}

// Main function: the entry point of the program
int main(){
    Employee Neelam; // Create an object (an instance) of the 'Employee' class named 'Neelam'

    Neelam.d = 32; // Access the public member 'd' of the Neelam object and assign it a value
    Neelam.e = 45; // Access the public member 'e' of the Neelam object and assign it a value

    // Call the 'setData' function for the Neelam object
    // This will set the private members 'a', 'b', and 'c'
    Neelam.setData(1,2,4);

    // Call the 'getData' function for the Neelam object
    // This will print the current values of all its members
    Neelam.getData();

    return 0; // Return 0 to indicate successful program execution
}