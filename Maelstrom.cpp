#include <iostream> // header to use cout or cin without std:: infront of it
#include <iomanip> // header to use setprecision manipulator
#include <cmath> // header to use multiple math functions to avoid creating them myself
using namespace std;

void determine_resultant() {
    int choice, decimal_place;
    cout << "Enter how many decimal places you want your answer to be rounded to: ";
    cin >> decimal_place;
    cout << "Input the calculation you want to perform\n";
    cout << "1. Calculate x component\n";
    cout << "2. Calculate y component\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice == 1) {
        double  degree_amount, velocity;
        cout << "Enter degrees: ";
        cin >> degree_amount;
        cout << "Enter velocity: ";
        cin >> velocity;
        
        cout << fixed << setprecision(decimal_place);
    }
    
}

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
    }
    
}

int main() {
    cout << "Welcome to MaelstromPHY\n";
    menu();
    return 0;
}