//
//  simpleGreeting.cpp
//  Assignment 1
//
//  Created by Luke Contreras on 1/24/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "! Nice to meet you!" << endl;
    return 0;
}
