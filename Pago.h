#pragma once
#ifndef PAGO_H
#define PAGO_H

class Pago
{
protected:
	bool aplicaDescuento;
	bool haPagado;
	float descuento;
	float montoTotal;
	int faltaMes;
public:
	Pago();
	int getAplicaDescuento();
	bool getHaPagado();
	float getDescuento();
	float getMontoTotal();
	int getFaltaMes();
	void setAplicaDescuento(int _aplicaDescuento);
	void setHaPagado(bool _haPagado);
	void setDescuento(bool _aplicaDescuento); //depende de que si aplica el descuento o no, asigna diferente valor a la variable descuento
	void setFaltaMes(int _faltaMes);
};

#endif // PAGO_H
