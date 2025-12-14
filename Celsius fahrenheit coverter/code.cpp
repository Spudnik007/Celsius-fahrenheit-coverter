#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int main() {
    double v; int ch;
    while (true) {
        cout << "1: Celsius to Fahrenheit\n0: Fahrenheit to Celsius\n2: Quit\nChoice: ";
        if (!(cin >> ch)) { cin.clear(); cin.ignore(1e9, '\n'); cout << "Invalid.\n"; continue; }
        if (ch == 2) break;

        cout << "Enter temperature: ";
        if (!(cin >> v)) { cin.clear(); cin.ignore(1e9, '\n'); cout << "Invalid.\n"; continue; }

        cout.setf(ios::fixed); cout.precision(2);
        if (ch == 1) cout << v << " Celsius = " << v * 9 / 5 + 32 << " Fahrenheit\n";
        else if (ch == 0) cout << v << " Fahrenheit = " << (v - 32) * 5 / 9 << " Celsius\n";
        else { cout << "Enter 0, 1, or 2.\n"; continue; }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Press Enter to clear...";
        cin.get();

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }
    cout << "Goodbye!\n";
}
