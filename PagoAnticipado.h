#pragma once
#ifndef PAGOANTICIPADO_H
#define PAGOANTICIPADO_H

#include "Pago.h"

class PagoAnticipado : public Pago
{
private:
	float interesDePagoAntc;
	float montoAntc;
public:
	PagoAnticipado();
	float getInteresDePagoAnticipado();
	float getMontoAntc();
	void setInteresDePagoAntc(float _interesDePagoAntc);
	void setMontoAntc(int _tipoDeHabitacion); //1: individual 2: doble
	void setMontoTotal(float _montoAntc, float _descuento); // calcular el montoTotal original (sin Interes)
	float calculaMontoTotalAntc(int _faltaMes);
};

#endif // PAGOANTICIPADO_H