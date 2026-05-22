#include <iostream>
using namespace std;

int main() {
    int opcion;
    float consumo, tarifa, subtotal, cargofijo, descuento, iva, total, baseIVA;

    do {
    cout << "calculo de factura" << endl;
    cout << "1 Calcular factura electrica" << endl;
    cout << "2 Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout <<"Ingrese el consumo mensual en kwh:  ";
                cin >> consumo;

                if(consumo <= 0){
                    cout << "El valor tiene que ser mayor a 0 " << endl;
                }else{

                   
                if(consumo <=100){
                        tarifa = 0.12;
                    }
                    else if (consumo <= 200){
                        tarifa = 0.15;
                    } 
            else{
                        tarifa = 0.18;
                    }

                    
                subtotal = consumo*tarifa;

                    
                cargofijo = 5.00;

                    
                if(consumo <=100) {
                        descuento = subtotal*0.10;
                    } else{
                        descuento =0;
                    }

                    
            baseIVA = subtotal + cargofijo - descuento;

                    
                iva = baseIVA* 0.13;

                    
                total = subtotal + cargofijo - descuento + iva;

                    
                  cout << "---RESUMEN----" << endl;
                    cout << "consumo mensual " << consumo << " kwh" <<endl;
                cout << "carifa aplicada $" << tarifa << endl;
                    cout << "subtotal consumo $" << subtotal << endl;
               cout << "cargo fijo $" << cargofijo << endl;
                    cout << "descuento $" << descuento <<endl;
                cout << "IVA $" << iva << endl;
                cout << "total a pagar $" << total <<endl;
                cout << "----------" <<endl;

                   
                }
                break;

            case 2:
                cout << "Saliste del programa" << endl;
                break;

            default:
                cout << "pon un valor dentro del rango " << endl;
        }

    } while(opcion != 2);

    return 0;
}