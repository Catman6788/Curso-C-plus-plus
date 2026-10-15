/*

    Principales bibliotecas

    <iostream> -> Entrada y Salida: cout/cin
    <iomanip>  -> Dar formato a la salida
    <string>   -> Trabajar con cadenas de texto

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

string nombre;
double salario;
double horasTrabajadas;
int pagoporHora;

cout << "Ingrese su nombre: " ;

cin >> nombre;

cout << "Ingrese las hora trabajadas: ";

cin >> horasTrabajadas;

cout << "Ingrese pago por hora: ";

cin >> pagoporHora;

salario = pagoporHora * horasTrabajadas;

cout << "======== EL SALARI0 DE "<<nombre<<" =========";

cout << endl;

cout << "El salario total es: " << salario << endl;
}
