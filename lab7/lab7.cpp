#include <iostream>
#include <string>
using namespace std;

int main() {
    string capital;

    // Введення назви столиці
    cout << "Enter the name of the capital: ";
    cin >> capital;

    // Перевірка на відповідність столиці країні
    if (capital == "Kyiv") {
        cout << "Ukraine" << endl;
    }
    else if (capital == "Washington") {
        cout << "USA" << endl;
    }
    else if (capital == "London") {
        cout << "United Kingdom" << endl;
    }
    else if (capital == "Paris") {
        cout << "France" << endl;
    }
    else if (capital == "Berlin") {
        cout << "Germany" << endl;
    }
    else if (capital == "Tokyo") {
        cout << "Japan" << endl;
    }
    else if (capital == "Moscow") {
        cout << "Russia" << endl;
    }
    else if (capital == "Beijing") {
        cout << "China" << endl;
    }
    else if (capital == "Ottawa") {
        cout << "Canada" << endl;
    }
    else if (capital == "Canberra") {
        cout << "Australia" << endl;
    }
    else {
        cout << "Capital not found in the database." << endl;
    }

    return 0;
}
