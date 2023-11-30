#include "PagoParcial.h"

PagoParcial::PagoParcial() {
	interesDePagoParc = 0.0;
	montoParc = 0.0;
}
float PagoParcial::getInteresDePagoParcial() {
	return interesDePagoParc;
}
float PagoParcial::getMontoParc() {
	return montoParc;
}
void PagoParcial::setInteresDePagoParc(float _interesDePagoParc) {
	interesDePagoParc = _interesDePagoParc;
}
void PagoParcial::setMontoParc(int _tipoDeHabitacion) { //1: individual 2: doble
	if (_tipoDeHabitacion == 1) { montoParc = 15750.0; } // habitacion individual
	else { montoParc = 10500.0; } // habitacion doble
}
void PagoParcial::setMontoTotal(float _montoParc, float _descuento) { // calcular el montoTotal original (sin Interes)
	montoParc = _montoParc * _descuento;
}

float PagoParcial::calculaMontoTotalParc(int n, float _montoInicial) {
	// si no ha pagado por 2 meses, eso significa que ya esta en el tercer mes y no ha pagado por dos meses.
	if (n == 0) { return montoTotal; }
	montoTotal *= (1 + interesDePagoParc);
	montoTotal += _montoInicial;
	n -= 1;
	calculaMontoTotalParc(n, _montoInicial);
}