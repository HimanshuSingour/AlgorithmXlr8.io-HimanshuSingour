#include <iostream>
using namespace std;

int main() {
    string coordinates;
    cin >> coordinates;

    char column = coordinates[0];
    char row = coordinates[1];

    int columnNumber = column - 'a' + 1;
    int rowNumber = row - '0';

    if ((columnNumber + rowNumber) % 2 == 0) {
        cout << "Black";
    } else {
        cout << "White";
    }

    return 0;
}