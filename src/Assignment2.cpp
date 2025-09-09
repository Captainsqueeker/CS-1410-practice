#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a, b, c, d, e;
    int i;

    while(true){
        cout << "Please enter a number that is greater than 0 and a multiple of 3.\n"; 
        cin >> a;

        if(a < 0 || a % 3 != 0){
            cout << "Invalid Number, not posative or a mulitple of 3." << endl;
        } else {
            i = 1;
            break;
        }
    }
// ----------------------------------------------------------------------------------------------------------------
    while(true){
        cout << "Please enter a number that is greater than 0 and a multiple of 3.\n";
        cin >> b;

        if(b < 0 || b % 3 != 0){
            cout << "Invalid Number, not posative or a mulitple of 3." << endl;
        } else {
            i = 2;
            break;
        }
    }
//-----------------------------------------------------------------------------------------------------------------
    while(true){
        cout << "Please enter a number that is greater than 0 and a multiple of 3.\n";
        cin >> c;

        if(c < 0 || c % 3 != 0){
            cout << "Invalid Number, not posative or a mulitple of 3." << endl;
        } else {
            i = 3;
            break;
        }
    } 
//-----------------------------------------------------------------------------------------------------------------
    while(true){
        cout << "Please enter a number that is greater than 0 and a multiple of 3.\n";
        cin >> d;

        if(d < 0 || d % 3 != 0){
            cout << "Invalid Number, not posative or a mulitple of 3." << endl;
        } else {
            i = 4;
            break;
        }
    }
//-----------------------------------------------------------------------------------------------------------------
    while(true){
        cout << "Please enter a number that is greater than 0 and a multiple of 3.\n";
        cin >> e;

        if(e < 0 || e % 3 != 0){
            cout << "Invalid Number, not posative or a mulitple of 3." << endl;
        } else {
            i = 5;
            break;
        }
    }
// ARITHMATIC -----------------------------------------------------------------------------------------------------
    int min = a;
    int max = a;
    int total;

    if(b > a){
        max = b;
    }
    if(c > a){
        max = c;
    }
    if(d > a){
        max = d;
    }
    if(e > a){
        max = e;
    }

    if(b < a){
        min = b;
    }
    if(c < a){
        min = c;
    }
    if(d < a){
        min = d;
    }
    if(e < a){
        min = e;
    }

    total = (a + b + c + d + e);

// OUTPUT --------------------------------------------------------------------------------------------------------

    cout << setw(6) << "Count" << setw(9) << "Minimum" << setw(9) << "Maximum" << setw(7) << "Total" << setw(9) << "Average" << endl;
    cout << "============================================================================================================" << endl;
    cout << setw(6) << i << setw(9) << min << setw(9) << max << setw(7) << total << setw(9) << (total / i) << endl;


    return 0;
}