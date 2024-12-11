#include <iostream>
using namespace std;

int main() {
    int month;

    // Ask the user to input a month number
    cout << "Enter a month number (1 to 12): ";
    cin >> month;

    // Check if the month is valid and display the number of days
    switch(month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "The month has 31 days." << endl;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "The month has 30 days." << endl;
            break;
        case 2:  // February
            cout << "The month has 28 or 29 days (depending on leap year)." << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
    }

    return 0;
}
