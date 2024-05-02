#ifndef MENU_HPP
#define MENU_HPP
#include <iostream>
using namespace std;

void menu() {
    int choice;
    cout << "0. Exit\n";
    cout << "1. Adding vectors to determine a resultant\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 0:
            break;
        case 1:
            determine_resultant();
            break;
    }
}

#endif