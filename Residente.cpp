#include "Residente.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Residente::Residente()
{
	nombre = "";
	matricula = "";
	piso = 0;
	numDeHabitacion = "";
	tipoDeHabitacion = 0;
}

void Residente::buscaResidente(string _numDeHabitacion) { //tiene la misma funcion de setter de todas las variables + puede buscar el residente usando el numero de habitacion.
	bool haEncontrado = false; //para cerrar el while loop.
	string line; //una varibale para guardar los datos en el archivo de texto.
	switch (_numDeHabitacion.front())
	{
	case '2':
	{
		fstream	file_piso2;
		file_piso2.open("InfoDeResidente_piso2.txt", ios::in); //Abirir un archivo de texto del piso 2 para leer.
		if (file_piso2.is_open()) {
			while (!haEncontrado) {
				getline(file_piso2, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso2, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso2, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso2, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso2, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso2, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso2.close();
		}
		break;
	}
	case '3':
	{
		fstream	file_piso3;
		file_piso3.open("InfoDeResidente_piso3.txt", ios::in); //Abirir un archivo de texto del piso para leer.
		if (file_piso3.is_open()) {
			while (!haEncontrado) {
				getline(file_piso3, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso3, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso3, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso3, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso3, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso3, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso3.close();
		}
		break;
	}
	case '4':
	{
		fstream	file_piso4;
		file_piso4.open("InfoDeResidente_piso4.txt", ios::in); //Abirir un archivo de texto del piso 4 para leer.
		if (file_piso4.is_open()) {
			while (!haEncontrado) {
				getline(file_piso4, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso4, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso4, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso4, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso4, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso4, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso4.close();
		}
		break;
	}
	case '5':
	{
		fstream	file_piso5;
		file_piso5.open("InfoDeResidente_piso5.txt", ios::in); //Abirir un archivo de texto del piso 5 para leer.
		if (file_piso5.is_open()) {
			while (!haEncontrado) {
				getline(file_piso5, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso5, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso5, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso5, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso5, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso5, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso5.close();
		}
		break;
	}
	case '6':
	{
		fstream	file_piso6;
		file_piso6.open("InfoDeResidente_piso6.txt", ios::in); //Abirir un archivo de texto del piso 6 para leer.
		if (file_piso6.is_open()) {
			while (!haEncontrado) {
				getline(file_piso6, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso6, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso6, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso6, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso6, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso6, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso6.close();
		}
		break;
	}
	case '7':
	{
		fstream	file_piso7;
		file_piso7.open("InfoDeResidente_piso7.txt", ios::in); //Abirir un archivo de texto del piso 7 para leer.
		if (file_piso7.is_open()) {
			while (!haEncontrado) {
				getline(file_piso7, line, '\t'); //lee el archivo hasta un tab. El archivo : numDeHabitacion(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
				if (line == _numDeHabitacion) {//si el line es igual al parametro _numDeHabitacion
					numDeHabitacion = line;
					getline(file_piso7, line, '\t'); //guarda el siguente dato nombre a la varibale nombre.
					nombre = line;
					getline(file_piso7, line, '\t');//guarda el siguente dato nombre a la varibale matricula.
					matricula = line;
					getline(file_piso7, line, '\t');//guarda el siguente dato nombre a la varibale piso.
					piso = stoi(line);
					getline(file_piso7, line, '\t');//guarda el siguente dato nombre a la varibale tipoDeHabitacion.
					tipoDeHabitacion = stoi(line);
					haEncontrado = true;//para salir del while loop
				}
				else { //si no(else)
					getline(file_piso7, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
				}
			}
			file_piso7.close();
		}
		break;
	}
	}
}

string Residente::getNombre() {
	return nombre;
}
string Residente::getMatricula() {
	return matricula;
}
int Residente::getPiso() {
	return piso;
}
string Residente::getNumDeHabitacion() {
	return numDeHabitacion;
}
int Residente::getTipoDeHabitacion() {
	return tipoDeHabitacion;
}

void Residente::imprimeResidente() {
	std::cout << "Nombre : " + nombre << endl;
	std::cout << "Matricula : " + matricula << endl;
	std::cout << "Piso : " + to_string(piso) << endl;
	std::cout << "Numero de habitacion : " + numDeHabitacion << endl;
	std::cout << "Tipo de habitacion (1: individual 2: doble) :  " + to_string(tipoDeHabitacion) << endl;
}

int Residente::tipoDePago(string _numDeHabitacion) {
	fstream	file_tipoDePago;
	string line;
	file_tipoDePago.open("Pago.txt", ios::in); //Abirir un archivo de texto del piso 7 para leer.
	if (file_tipoDePago.is_open()) {
		while (true || !file_tipoDePago.eof()) {
			getline(file_tipoDePago, line, '\t'); //lee el archivo hasta un tab. 
			////El archivo : numDeHabitacion(\t)tipoDePago(\t)aplicaDescuento(\t)haPagado(\t)faltaMes(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
			if (line == numDeHabitacion) {//si el line es igual a la variable numDeHabitacion
				getline(file_tipoDePago, line, '\t'); //guarda el siguente dato tipoDePago (string en el archivo texto) a la varibale line (string).
				if (line == "anticipado") { return 1; } //anticipado = 1
				else if (line == "parcial") { return 2; } //parcial = 2
			} 
			else { //si no(else)
				getline(file_tipoDePago, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
			}
		}
	}
	file_tipoDePago.close();
}


float Residente::calculaMontoTotalAntc(PagoAnticipado _pagoAnticipado) { //calcula el monto total de pago anticipado
	fstream	file_pagoAntc;
	string line;
	file_pagoAntc.open("Pago.txt", ios::in); //Abirir un archivo de texto del piso 7 para leer.
	if (file_pagoAntc.is_open()) { // si esta abierto
		while (!file_pagoAntc.eof()) { //hasta que llegue el final del archivo
			getline(file_pagoAntc, line, '\t'); //lee el archivo hasta un tab. 
			////El archivo : numDeHabitacion(\t)tipoDePago(\t)aplicaDescuento(\t)haPagado(\t)faltaMes(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
			if (line == numDeHabitacion) {//si el line es igual a la variable numDeHabitacion
				getline(file_pagoAntc, line, '\t'); //guarda el siguente dato tipoDePago (string en el archivo texto) a la varibale line (string).
				if (line == "anticipado") {
					getline(file_pagoAntc, line, '\t'); //guarda el siguente dato aplicaDescuento (string en el archivo texto) a la varibale line (string).
					_pagoAnticipado.setAplicaDescuento((line == "true" ? true : false)); //asigna el siguente dato aplicaDescuento (string en el archivo texto) a la varibale aplicaDescuento (bool).
					getline(file_pagoAntc, line, '\t'); //guarda el siguente dato haPagado (string en el archivo texto) a la varibale line (string).
					_pagoAnticipado.setHaPagado((line == "true" ? true : false)); //asigna el siguente dato haPagado (string en el archivo texto) a la varibale haPagado (bool).
					getline(file_pagoAntc, line, '\t'); //guarda el siguente dato faltaMes (string en el archivo texto) a la varibale line (string).
					_pagoAnticipado.setFaltaMes(stoi(line)); //asigna el siguente dato faltaMes (string en el archivo texto) a la varibale faltaMes (int).

					if (_pagoAnticipado.getHaPagado() == true) { return 0.0; } //si ya ha pagado todo, el monto total sera 0.
					else
					{
						_pagoAnticipado.setDescuento(_pagoAnticipado.getAplicaDescuento()); //si aplica el descuento, regresa el valor de descuento.
						_pagoAnticipado.setMontoAntc(tipoDeHabitacion); // set el monto anticipado de habitacion dependiendo del tipo de habitacion.
						_pagoAnticipado.setInteresDePagoAntc(0.015); // 1.5% interes
						_pagoAnticipado.setMontoTotal(_pagoAnticipado.getMontoAntc(), _pagoAnticipado.getDescuento()); // set el monto total 
						return _pagoAnticipado.calculaMontoTotalAntc(_pagoAnticipado.getFaltaMes()); //resgresa el monto total
					}
				}
			}
			else { //si no(else)
				getline(file_pagoAntc, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
			}
		}
	}
	file_pagoAntc.close();
	std::cout << "No se ha encontrado,";
	return 0.0; //ingresa el tipo de habitacion como parametro del metodo calculaMontoTotal del objeto _pagoAnticipio.
}

float Residente::calculaMontoTotalParc(PagoParcial _pagoParcial) { //calcula el monto total de pago anticipado
	fstream	file_pagoParc;
	string line;
	file_pagoParc.open("Pago.txt", ios::in); //Abirir un archivo de texto del piso 7 para leer.
	if (file_pagoParc.is_open()) {//si esta abierto
		while (!file_pagoParc.eof()) {//hasta que llegue el final del archivo
			getline(file_pagoParc, line, '\t'); //lee el archivo hasta un tab. 
			//El archivo : numDeHabitacion(\t)tipoDePago(\t)aplicaDescuento(\t)haPagado(\t)faltaMes(\t)nombre(\t)matricula(\t)piso(\t)tipoDeHabitacion(\n)
			if (line == numDeHabitacion) {//si el line es igual a la variable numDeHabitacion
				getline(file_pagoParc, line, '\t'); //guarda el siguente dato tipoDePago (string en el archivo texto) a la varibale line (string).
				if (line == "parcial") {
					getline(file_pagoParc, line, '\t'); //guarda el siguente dato aplicaDescuento (string en el archivo texto) a la varibale line (string).
					_pagoParcial.setAplicaDescuento((line == "true" ? true : false)); //asigna el siguente dato aplicaDescuento (string en el archivo texto) a la varibale aplicaDescuento (bool).
					getline(file_pagoParc, line, '\t'); //guarda el siguente dato haPagado (string en el archivo texto) a la varibale line (string).
					_pagoParcial.setHaPagado((line == "true" ? true : false)); //asigna el siguente dato haPagado (string en el archivo texto) a la varibale haPagado (bool).
					getline(file_pagoParc, line, '\t'); //guarda el siguente dato faltaMes (string en el archivo texto) a la varibale line (string).
					_pagoParcial.setFaltaMes(stoi(line)); //asigna el siguente dato faltaMes (string en el archivo texto) a la varibale faltaMes (int).

					if (_pagoParcial.getHaPagado() == true) { return 0.0; } //si ya ha pagado todo, el monto total sera 0.
					else
					{
						_pagoParcial.setDescuento(_pagoParcial.getAplicaDescuento()); //si aplica el descuento, regresa el valor de descuento.
						_pagoParcial.setMontoParc(tipoDeHabitacion); // set el monto anticipado de habitacion dependiendo del tipo de habitacion.
						_pagoParcial.setInteresDePagoParc(0.02); // 2% interes
						_pagoParcial.setMontoTotal(_pagoParcial.getMontoParc(), _pagoParcial.getDescuento()); // set el monto total 
						return _pagoParcial.calculaMontoTotalParc(_pagoParcial.getFaltaMes(), _pagoParcial.getMontoParc()); //resgresa el monto total
					}
				}
			}
			else { //si no(else)
				getline(file_pagoParc, line, '\n');//lee hasta el final del dato de un resdidente. Hasta el dato del tipoDeHabitacion.
			}
		}
	}
	file_pagoParc.close();
	std::cout << "No se ha encontrado,";
	return 0.0; //ingresa el tipo de habitacion como parametro del metodo calculaMontoTotal del objeto _pagoAnticipio.
}