#include "Persona.h"
#include "Pago.cpp"

class Residente:public Persona
{
private:
	int tipoDeHabitacion; // 1: habitacion individual 2: habitacion compartida
	Pago pago;
public:
	Residente();
};