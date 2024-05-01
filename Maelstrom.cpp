#include <iostream> // header to use cout or cin without std:: infront of it
#include <iomanip> // header to use setprecision manipulator
#include <cmath> // header to use multiple math functions to avoid creating them myself
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

void determine_resultant() {
    int choice, decimal_place, x_component_choice, y_component_choice;
    double  degree_amount, velocity, x_component, y_component;
    cout << "Enter how many decimal places you want your answer to be rounded to: ";
    cin >> decimal_place;
    cout << "Input the calculation you want to perform\n";
    cout << "1. Calculate x component\n";
    cout << "2. Calculate y component\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter degrees: ";
        cin >> degree_amount;
        cout << "Enter velocity: ";
        cin >> velocity;
        x_component = velocity * (cos(degree_amount));
        cout << fixed << setprecision(decimal_place);
        cout << "X Component: " << x_component;
        cout << "Would you like to go back to the main menu or calculate something else in here? \n";
        cout << "1. Return to the menu\n";
        cout << "2. Calculate something else in this area";
        cout << "\n Enter your choice: ";
        cin >> x_component_choice;
        
        switch (x_component_choice) {
            case 1:
                menu();
                break;
            case 2:
                determine_resultant();
                break;
        } 
    }

    if (choice == 2) {
        cout << "Enter degrees: ";
        cin >> degree_amount;
        cout << "Enter velocity: ";
        cin >> velocity;
        x_component = velocity * (sin(degree_amount));
        cout << fixed << setprecision(decimal_place);
        cout << "Y Component: " << y_component;
        cout << "Would you like to go back to the main menu or calculate something else in here? \n";
        cout << "1. Return to the menu\n";
        cout << "2. Calculate something else in this area";
        cout << "\n Enter your choice: ";
        cin >> y_component_choice;
        
        switch (y_component_choice) {
            case 1:
                menu();
                break;
            case 2:
                determine_resultant();
                break;
        }
    }
}

int main() {
    cout << "Welcome to MaelstromPHY\n";
    menu();
    return 0;
}