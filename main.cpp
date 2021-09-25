#include "Circuito.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	system("CLS");

	Circuito meuCircuito(true);
	Circuito meuCircuito2(false);


	if (meuCircuito.PotenciaTotal(meuCircuito.r1, meuCircuito.r2, meuCircuito.v, true) < meuCircuito2.PotenciaTotal(meuCircuito2.r1, meuCircuito2.r2, meuCircuito2.v, false))
		std::cout << "Menor potencia " << meuCircuito.PotenciaTotal(meuCircuito.r1, meuCircuito.r2, meuCircuito.v, true) << std::endl;
	else
		std::cout << "Menor potencia " << meuCircuito2.PotenciaTotal(meuCircuito2.r1, meuCircuito2.r2, meuCircuito2.v, false) << std::endl;

	return 0;
}
