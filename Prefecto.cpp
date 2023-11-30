#include "Prefecto.h"
#include <fstream>

using namespace std;

Prefecto::Prefecto(string _prefectoID)
{
	prefectoID = _prefectoID;
}

string Prefecto::getPrefectoID()
{
	return prefectoID;
}

void Prefecto::setPrefectoID(string _prefectoID)
{
	prefectoID = _prefectoID;
}

