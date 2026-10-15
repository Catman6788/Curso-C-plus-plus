
#include <iostream>
#include <string>
using namespace std;

int main(){
    double total,venta;
    string nombre;

    total=0;//acumulador
    for(int i=1; i<=5; i++){
        cout<<"INGRESE EL MONTO DE LA VENTA "<<i<<": ";
        cin>>venta;

        total=total+venta;
    }

    cout<<"TOTAL VENTAS: "<<total<<endl;

    return 0;
}
