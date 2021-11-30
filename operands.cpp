/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string operation;
    double in1, in2, result = -1;

    cout << "Input an operator followed by two operands: ";
    // get operation followed by values
    cin >> operation;
    cin >> in1;
    cin >> in2;
    // determine operation type.
    if (operation == "+" || operation == "plus" ) {
        result = in1 + in2;
    } else if (operation == "-" || operation == "minus") {
        result = in1 - in2;
    } else if (operation == "*" || operation == "mul") {
        result = in1 * in2;
    } else if (operation == "/" || operation == "div") {
        result = in1 / in2;
    }
    // output result
    cout << in1 << operation << in2 << "=" << result << endl;
    return 0;
}
