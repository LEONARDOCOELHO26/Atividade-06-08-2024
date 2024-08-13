#include <iostream>
using namespace std;

int main() {
    int joules;
    cout << "Digite o valor em joules (J): ";
    cin >> joules;

    double resultado = joules / 1000.0;
    cout << joules << "J em kilojoules é " << resultado << "kJ" << endl;

    return 0;
}
