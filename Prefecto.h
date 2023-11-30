#pragma once
#ifndef PREFECTO_H
#define PREFECTO_H

#include <string>
#include "Residente.h"

class Prefecto {
private:
	std::string prefectoID; //El prefectID empieza con un numero y ese significa el piso de que se carga el prefecto.
	//Residente residente;
public:
	Prefecto(std::string _prefectoID);
	std::string getPrefectoID();
	void setPrefectoID(std::string _prefectoID);
};

#endif // PREFECTO_H
