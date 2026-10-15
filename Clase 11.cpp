#include <iostream>
using namespace std;

int main(){
    int notas[7];
    int total = 0;
    int mejor = 0;
        cout << "--- SISTEMA DE NOTAS ---\n";
    for (int i = 0; i < 7; i++){
        cout << "NOTA ASIGNADA " << i+1 << ": ";
        cin >> notas[i];

        total += notas[i];

        if (i == 0 || notas[i] > mejor){
            mejor = notas[i];
        }
    }

    double promedio = static_cast<double>(total) / 7;

        cout << "\nRESULTADOS\n";
        cout << "TOTAL DE NOTAS: " << total << endl;
        cout << "PROMEDIO: " << promedio << endl;
        cout << "MEJOR PUNTAJE: " << mejor << endl;

    return 0;
}
