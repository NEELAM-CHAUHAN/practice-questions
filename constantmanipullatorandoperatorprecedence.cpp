#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Manipulators
    int a = 23, b = 45, c = 1234;
    cout << "The value of a without setw is " << a << endl;
    cout << "The value of b without setw is " << b << endl;
    cout << "The value of c without setw is " << c << endl;
    cout << "The value of a with setw is " << setw(4) << a << endl;
    cout << "The value of b with setw is " << setw(4) << b << endl;
    cout << "The value of c with setw is " << setw(4) << c << endl;

    cout << endl;

    // Operator Precedence
    a = 3;
    b = 4;
    int result = ((((a * 5) + b) - 45) + 87);
    cout << "Result of expression is: " << result << endl;

    return 0;
}
