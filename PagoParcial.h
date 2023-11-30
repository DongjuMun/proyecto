#pragma once
#ifndef PAGOPARCIAL_H
#define PAGOPARCIAL_H

#include "Pago.h"

class PagoParcial : public Pago
{
private:
	float interesDePagoParc;
	float montoParc; // el monto parcial para pagar 5 veces. Por ejemplo, si el monto parcial es 10500, hay que pagar 52500 en total.
public:
	PagoParcial();
	float getInteresDePagoParcial();
	float getMontoParc();
	void setInteresDePagoParc(float _interesDePagoParc);
	void setMontoParc(int _tipoDeHabitacion); //1: individual 2: doble
	void setMontoTotal(float _montoParc, float _descuento); // calcular el montoTotal original (sin Interes)
	float calculaMontoTotalParc(int _faltaMes, float _montoParc);
};

#endif // PAGOPARCIAL_H