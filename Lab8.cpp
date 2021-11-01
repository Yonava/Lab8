#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {

    // challenge 1
    
    double doubles[] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int arr[5];

    for (int i = 0; i < 11; i++) {

        if (i < 5) {
            arr[i] = i + 1;
            cout << arr[i] << " ";
            continue;
        }
        if (i > 5) {
            cout << fixed << setprecision(1) << doubles[i - 6] << " ";
            continue;
        }
        cout << endl;
      
    }

    cout << endl;

    // challenge 2

    string season[] = {
        "Winter",
        "Winter",
        "Spring",
        "Spring",
        "Spring",
        "Summer",
        "Summer",
        "Summer",
        "Fall",
        "Fall",
        "Fall",
        "Winter"
    };
    string months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    int takeInput;
    

    while (true) {
        cout << "\nEnter # of Month (1-12): ";
        cin >> takeInput;
        if (takeInput > 0 && takeInput < 13) {
            cout << "The Month of " << months[takeInput - 1] << " is in " << season[takeInput - 1];
        }
        else {
            cout << "Error: Month '" << takeInput << "' Invalid!";
            takeInput = 1; // to prevent edge case when takeInput is invalid
        }
    }


    return 0;

}
