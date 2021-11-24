#include "std_lib_facilities.h"
using namespace std;

int main() {

    double a, b;
    string operation;

    // get user input and assign it to variables
    cout << "Enter an operator followed by two operands : ";
    cin >> operation >> a >> b;

    // add
    if (operation == "+" || operation == "plus")
        cout << a+b;

    // subtract
    else if (operation == "-" || operation == "minus")
        cout << a-b;

    // multiply
    else if (operation == "*" || operation == "mul")
        cout << a*b;

    // divide
    else if (operation == "/" || operation == "div")
        cout << a/b;

    else
        cout << "The operation entered is not valid.";

    return 0;

}