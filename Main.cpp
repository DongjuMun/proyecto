#include "Prefecto.h"
#include "Residente.h"
#include "Pago.h"
#include "PagoAnticipado.h"
#include "PagoParcial.h"
#include <iostream>
#include <string>

using namespace std;

bool esPrefecto(string _prefectoID) {
	string listaDePrfectos[14] = 
	{ "2mE2023a", "2fC2023a", 
		"3mJ2023a", "3fM2023a",
		"4mP2023a", "4fA2023a", 
		"5mM2023a", "5fY2023a", 
		"6mR2023a", "6fS2023a",
		"7mE2023a", "7fD2023a" };

	for (int i = 0; i < 14; i++) {
		if (listaDePrfectos[i] == _prefectoID) {
			return true;
		}
	}
	return false;
}

int main() {
	string prefectoID;
	Prefecto prefecto(prefectoID);
	Residente residente;
	PagoAnticipado pagoAnticipado;
	PagoParcial pagoParcial;
	string getValorString;
	int getValorInt;
	bool getValorBool;

	cout << "Prefecto ID: ";
	std::cin >> prefectoID;


	if (esPrefecto(prefectoID))
	{
		cout << "Cual es el numero de habitacion para checar el estado de pago: ";
		cin >> getValorString; //get el valor string de numero de habitacion
		residente.buscaResidente(getValorString);//ingresa el valor string del numero de habtiacion y set las varibales del objeto residente 1.
		residente.imprimeResidente(); //imprime los datos de residente.
		//Data: numDeHabitacion \t tipoDePago \t aplicaDescuento \t haPagado \t faltaMes \t nombre \t matricula \t piso \t tipoDeHabitacion \n
		if (residente.tipoDePago(residente.getNumDeHabitacion()) == 1) {
			cout << "El monto total es " << residente.calculaMontoTotalAntc(pagoAnticipado) << " mxn" << endl;
		}
		else if (residente.tipoDePago(residente.getNumDeHabitacion()) == 2) {
			cout << "El monto total es " << residente.calculaMontoTotalParc(pagoParcial) << " mxn" << endl;
		}
	}
	else { cout << "ID Invalida." << endl; }

	return 0;
}