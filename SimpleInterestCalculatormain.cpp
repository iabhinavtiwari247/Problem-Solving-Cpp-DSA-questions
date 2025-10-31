/*cpp-que3*/
/* Build a simple interest calculator*/
#include <iostream>
using namespace std;
int main() {
    double principal, rate, time, interest;

    // Input principal amount
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Input rate of interest
    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    // Input time period in years
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the result
    cout << "The simple interest is: " << interest << endl;

    return 0;
}
