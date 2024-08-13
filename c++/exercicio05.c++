#include <iostream>
using namespace std;

int main() {
    int farad;
    cout << "Digite o valor em farad (F): ";
    cin >> farad;

    double resultado = farad * 1e6;
    cout << farad << "F em microfarad é " << resultado << "μF" << endl;

    return 0;
}
