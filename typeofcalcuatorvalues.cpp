#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265;
    cout << "Default: " << pi << endl;
    cout << "Fixed: " << fixed << setprecision(2) << pi << endl;
    cout << "Scientific: " << scientific << setprecision(2) << pi << endl;

    cout << setw(10) << setfill('*') << 123 << endl;
    return 0;
}
