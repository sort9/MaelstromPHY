#ifndef RESULTANT_CALC_HPP
#define RESULTANT_CALC_HPP
#include <iostream>
using namespace std;

void menu();

void determine_resultant() {
    int choice, decimal_place, x_component_choice, y_component_choice, resultant_choice;
    double  degree_amount, velocity, x_component, y_component, x1, x2, y1, y2, resultant;
    cout << "Enter how many decimal places you want your answer to be rounded to: ";
    cin >> decimal_place;
    cout << "Input the calculation you want to perform\n";
    cout << "1. Calculate x component\n";
    cout << "2. Calculate y component\n";
    cout << "3. Calculate Resultant\n";
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
        cout << "\nWould you like to go back to the main menu or calculate something else in here? \n";
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
        y_component = velocity * (sin(degree_amount));
        cout << fixed << setprecision(decimal_place);
        cout << "Y Component: " << y_component;
        cout << "\nWould you like to go back to the main menu or calculate something else in here? \n";
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

    if (choice == 3) {
        cout << "Enter the value for X1: ";
        cin >> x1;
        cout << "Enter the value for Y1: ";
        cin >> y1;
        cout << "Enter the value for X2: ";
        cin >> x2;
        cout << "Enter the value for Y2: ";
        cin >> y2;
        resultant = sqrt ( (pow((x1 + x2), 2)) + (pow((y1 + y2), 2)) ); // broken calculation
        cout << fixed << setprecision(decimal_place);
        cout << "Resultant: " << resultant;
        cout << "\nWould you like to go back to the main menu or calculate something else in here? \n";
        cout << "1. Return to the menu\n";
        cout << "2. Calculate something else in this area";
        cout << "\n Enter your choice: ";
        cin >> resultant_choice;
        
        switch (resultant_choice) {
            case 1:
                menu();
                break;
            case 2:
                determine_resultant();
                break;
        } 
    }
}

#endif