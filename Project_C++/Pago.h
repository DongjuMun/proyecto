class Pago 
{
private:
	int tipoDePago;
	bool haPagado;
	float montoTotal;
	int faltaMes;

public:
	void imprimeFaltante(void);
	float calculaInteres(float);
};