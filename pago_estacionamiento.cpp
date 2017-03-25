#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout<< "test data: 5 / Expected result= 50/ Actual result: " << pago_estacionamiento(5)<<endl;
    cout<< "test data: 8 / Expected result= 72/ Actual result: " << pago_estacionamiento(8)<<endl;
    cout<< "test data: 3 / Expected result= 30/ Actual result: " << pago_estacionamiento(3)<<endl;
    cout<< "test data: 1 / Expected result= 10/ Actual result: " << pago_estacionamiento(1)<<endl;
    cout<< "test data: 9 / Expected result= 81/ Actual result: " << pago_estacionamiento(9)<<endl;
    cout<< "test data: 13 / Expected result= 91/ Actual result: " << pago_estacionamiento(13)<<endl;
    cout<< "test data: 11 / Expected result= 77/ Actual result: " << pago_estacionamiento(11)<<endl;
    cout<< "test data: 2 / Expected result= 20/ Actual result: " << pago_estacionamiento(2)<<endl;
    cout<< "test data: 7 / Expected result= 63/ Actual result: " << pago_estacionamiento(7)<<endl;
    cout<< "test data: 22 / Expected result= 154/ Actual result: " << pago_estacionamiento(22)<<endl;

    // Agrega tus casos de prueba



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
