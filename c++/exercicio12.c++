#include <iostream>
using namespace std;

int main() {
    int nanometros;
    cout << "Digite o valor em nanometros (nm): ";
    cin >> nanometros;

    double resultado = nanometros / 1000.0;
    cout << nanometros << "nm em micrometros é " << resultado << "μm" << endl;

    return 0;
}
