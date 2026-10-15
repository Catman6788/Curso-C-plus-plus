#include <iostream>
using namespace std;

int main() {
    int visualizaciones[7];
    string dias[7] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    int total = 0;
    int mayorVisualizaciones = 0;
    int indiceMayor = 0;
    cout << "=== ANALIZADOR DE VISUALIZACIONES DE TIKTOK ===" << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Ingrese las visualizaciones del dia " << dias[i] << ": ";
        cin >> visualizaciones[i];
        total += visualizaciones[i];
        if(i == 0 || visualizaciones[i] > mayorVisualizaciones) {
            mayorVisualizaciones = visualizaciones[i];
            indiceMayor = i;
    }
    }
    cout << "\n--- VISUALIZACIONES DE CADA DIA ---" << endl;
    for(int i = 0; i < 7; i++) {
    cout << dias[i] << ": " << visualizaciones[i] << endl;
    }
    double promedio = (double)total / 7;
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Total semanal: " << total << endl;
    cout << "Promedio diario: " << promedio << endl;
    cout << "Mayor cantidad de visualizaciones: " << mayorVisualizaciones << endl;
    cout << "Dia en que ocurrio: " << dias[indiceMayor] << endl;

    return 0;
}
