#include "Persona.h"
#include "Aviso.cpp"
#include "Lista.cpp"
#include "Edificio.cpp"


class Prefecto:public Persona
{
private:
	string prefectoID;
	Aviso aviso;
	Lista lista;
	Edificio edificio;

public:
	Prefecto();
	string getPrefectoID();
	void setPrefectoID(string);
};

