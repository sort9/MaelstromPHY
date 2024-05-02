#include <iostream> // header to use cout or cin without std:: infront of it
#include <iomanip> // header to use setprecision manipulator
#include <cmath> // header to use multiple math functions to avoid creating them myself
#include "includes/resultant_calc.hpp"
#include "includes/menu.hpp"
using namespace std;

int main() {
    cout << "Welcome to MaelstromPHY\n";
    menu();
    return 0;
}