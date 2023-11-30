#include "Pago.h"

Pago::Pago() {
	aplicaDescuento = false;
	haPagado = false;
	descuento = 0.0;
	montoTotal = 0.0;
	faltaMes = 0;
}

int Pago::getAplicaDescuento() {
	return aplicaDescuento;
}
bool Pago::getHaPagado() {
	return haPagado;
}
float Pago::getDescuento() {
	return descuento;
}
float Pago::getMontoTotal() {
	return montoTotal;
}
int Pago::getFaltaMes() {
	return faltaMes;
}
void Pago::setAplicaDescuento(int _aplicaDescuento) {
	aplicaDescuento = _aplicaDescuento;
}
void Pago::setHaPagado(bool _haPagado) {
	haPagado = _haPagado;
}
void Pago::setDescuento(bool _aplicaDescuento) {
	if (_aplicaDescuento) { descuento = 0.85; }//si aplica el descuento, asigna 15% descuento(*0.85) a la variable descuento.
	else { descuento = 1; } // si no aplica el descuento, asigna 0% descuento (*1) a la variable descuento.
}
void Pago::setFaltaMes(int _faltaMes) {
	faltaMes = _faltaMes;
}