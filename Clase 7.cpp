//DEBE CALCULAR DESCUENTO Y TOTAL
// ANALISIS
//ENTRADA MONTOCOMPRA= LO QUE GASTO EL CLIENTE
//PROCESO
//COMPRA>= 500 BS > 20%
//COMPRA >= 300 BS 15%
//COMPRA >= 100 BS 10%
//COMPRA >= 100 BS 0%
//SALIDA = DESCUENTO APLICADO EN BS Y TOTAL A PAGAR
#include <iostream>
using namespace std;
int main(){

    double MontoCompra, Descuento=0, TotalPagar, Porcentaje=0;

    cout << "===== SISTEMA DE DESCUENTO PARA COMPRA ONLINE ====="<<endl;
    cout << "INGRESE EL MONTO DE LA COMPRA DEL CLIENTE EN BS: ";
    cin >>MontoCompra;

    if (MontoCompra>=500){
        Porcentaje= 20;
    }else if (MontoCompra>=300){
        Porcentaje = 15;
    }else if (MontoCompra>=100){
        Porcentaje=10;
    }else if (MontoCompra<=100){
        Porcentaje=0;
    }

    Descuento= MontoCompra*Porcentaje/100;
    TotalPagar = MontoCompra-Descuento;

    cout << endl << "=== RESULTADO DE DESCUENTO ===" << endl;
    cout << "MONTO DE COMPRA: " << MontoCompra << "Bs" << endl;
    cout << "Descuento ("<<Porcentaje<< "%):"<< Descuento<<"Bs" << endl;
    cout << "TOTAL A PAGAR: "<<TotalPagar << "Bs" <<endl;

    return 0;
}

