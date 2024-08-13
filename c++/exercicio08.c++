#include <iostream>
using namespace std;

int main() {
    int gigawatts;
    cout << "Digite o valor em gigawatts (GW): ";
    cin >> gigawatts;

    int resultado = gigawatts * 1000;
    cout << gigawatts << "GW em megawatts é " << resultado << "MW" << endl;

    return 0;
}
