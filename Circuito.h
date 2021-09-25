class Circuito
{
	public:
		Circuito(float r1 = 0.0, float r2 = 0.0, float v = 0.0);
		Circuito(bool serieOuParalelo);
		~Circuito();

		float ResistenciaEquivalente(float r1, float r2, bool serieOuParalelo);
		float CorrenteTotal(float r1, float r2, bool serieOuParalelo);
		float PotenciaTotal(float r1, float r2, float v, bool serieOuParalelo);

		float r1;
		float r2;
		float v;
		bool serieOuParalelo;
		
};
