#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter day: ";
    string day;

    cin >> day;
    if(day == "sun" || day == "sat"){
        cout << "It is a weekend." << endl;
    } else {
        cout << "It is a weekday." << endl;
    }

    return 0;
}
