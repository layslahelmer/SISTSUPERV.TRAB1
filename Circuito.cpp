#include "Circuito.h"
#include <iostream>
#include <stdlib.h>

Circuito::Circuito(float r1, float r2, float v)
{
    this->r1 = r1;
    this->r2 = r2;
    this->v = v;
    this->serieOuParalelo = serieOuParalelo;
}

Circuito::Circuito(bool serieOuParalelo)
{
    if (serieOuParalelo) {
        std::cout << "Entre R1 (ohms)" << std::endl;
        std::cin >> r1;
        std::cout << "Entre R2 (ohms)" << std::endl;
        std::cin >> r2;
        std::cout << "Entre V (volts)" << std::endl;
        std::cin >> v;

        std::cout << "\nCalculos (configuracao Paralelo):" << std::endl;

        std::cout << "Resistencia Equivalente: " << ResistenciaEquivalente(r1, r2, serieOuParalelo) << std::endl;
        std::cout << "Corrente Total: " << CorrenteTotal(r1, r2, serieOuParalelo) << std::endl;
        std::cout << "Potencia Total: " << PotenciaTotal(r1, r2, v, serieOuParalelo) << std::endl;

        system("pause");
    }
    else {
        std::cout << "Entre R1 (ohms)" << std::endl;
        std::cin >> r1;
        std::cout << "Entre R2 (ohms)" << std::endl;
        std::cin >> r2;
        std::cout << "Entre V (volts)" << std::endl;
        std::cin >> v;

        std::cout << "\nCalculos (configuracao Serie):" << std::endl;

        std::cout << "Resistencia Equivalente: " << ResistenciaEquivalente(r1, r2, serieOuParalelo) << std::endl;
        std::cout << "Corrente Total: " << CorrenteTotal(r1, r2, serieOuParalelo) << std::endl;
        std::cout << "Potencia Total: " << PotenciaTotal(r1, r2, v, serieOuParalelo) << std::endl;
        
        system("pause");
    }
}
Circuito::~Circuito()
{
}

float Circuito::ResistenciaEquivalente(float r1, float r2, bool serieOuParalelo)
{
    float resultado;

    if (serieOuParalelo) {
        resultado = (r1 + r2);
    }
    else {
        resultado = (r1 * r2) / (r1 + r2);
    }
    return resultado;
}

float Circuito::CorrenteTotal(float r1, float r2, bool serieOuParalelo)
{
    return v / ResistenciaEquivalente(r1, r2, serieOuParalelo);
}

float Circuito::PotenciaTotal(float r1, float r2, float v, bool serieOuParalelo)
{
    return v * CorrenteTotal(r1, r2, serieOuParalelo);
}
