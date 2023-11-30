#include "PagoAnticipado.h"

PagoAnticipado::PagoAnticipado() {
	interesDePagoAntc = 0.0;
	descuento = 0.0;
}
float PagoAnticipado::getInteresDePagoAnticipado() {
	return interesDePagoAntc;
}
float PagoAnticipado::getMontoAntc() {
	return montoAntc;
}
void PagoAnticipado::setInteresDePagoAntc(float _interesDePagoAntc) {
	interesDePagoAntc = _interesDePagoAntc;
}
void PagoAnticipado::setMontoAntc(int _tipoDeHabitacion) {
	if (_tipoDeHabitacion == 1) { montoAntc = 75150.0; } // habitacion individual
	else { montoAntc = 50100.0; } // habitacion doble
}
void PagoAnticipado::setMontoTotal(float _montoAntc, float _descuento) {
	montoTotal = _montoAntc * _descuento;
}
float PagoAnticipado::calculaMontoTotalAntc(int n) { // recursive funcion. El montoTotal ya es igual a (montoAntc * descuento)
	if (n == 0) { return montoTotal; }
	montoTotal *= (1 + interesDePagoAntc);
	n -= 1;
	calculaMontoTotalAntc(n);
}

