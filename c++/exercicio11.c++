#include <iostream>
using namespace std;

int main() {
    int megaohms;
    cout << "Digite o valor em megaohms (MΩ): ";
    cin >> megaohms;

    int resultado = megaohms * 1000;
    cout << megaohms << "MΩ em kilohms é " << resultado << "kΩ" << endl;

    return 0;
}
