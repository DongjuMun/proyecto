#pragma once
#ifndef RESIDENTE_H
#define RESIDENTE_H

#include <string>
#include "PagoAnticipado.h"
#include "PagoParcial.h"

class Residente
{
private:
	std::string nombre;
	std::string matricula;
	int piso;
	std::string numDeHabitacion; //ex) case 1: si es cuarto doble, los dos numeros deben ser, por ejemplo, 401A y 401B. Y si es cuarto individual, debe ser solo 401A.
	int tipoDeHabitacion; // 1: habitacion individual 2: habitacion compartida
	//PagoAnticipado pagoAnticipado;
	//PagoParcial pagoParcial;
public:
	Residente();
	void buscaResidente(std::string _numDeHabitacion);
	std::string getNombre();
	std::string getMatricula();
	int getPiso();
	std::string getNumDeHabitacion();
	int getTipoDeHabitacion();
	void imprimeResidente();
	int tipoDePago(std::string _numDeHabitacion);
	float calculaMontoTotalAntc(PagoAnticipado _pagoAnticipado);
	float calculaMontoTotalParc(PagoParcial _pagoParcial);

};

#endif //RESIDENTE_H
