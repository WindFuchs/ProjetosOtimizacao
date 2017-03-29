// Test1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <array>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 8

void testeCasas(int * arrTeste, int tamanhoArr)
{

	int posLoja = 1;
	/*
	for (int i = 0; i < tamanhoArr - 2; i++)
	{
		somaMin += arrTeste[i];
		somaMax = 0;
		for (int j = tamanhoArr - 1; j - 1 > i; j--)
		{
			//cout << i << " " << j << endl;

			somaMax += arrTeste[j];
			cout << somaMin << " " << somaMax << endl;
			if (somaMin == somaMax)
			{
				cout << "Loja encontrada na posicao: " << i + 2 << endl;
			}
		}
	}
	*/
	while(posLoja != tamanhoArr-1)
	{
		int somaMin = 0;
		int somaMax = 0;

		for (int i = 0; i < posLoja; i++)
		{
			//cout << somaMin << " " << somaMax << endl;
			somaMin += arrTeste[i];
		}
		//cout << "Soma min: " << somaMin << " ";
		for (int i = tamanhoArr-1; posLoja < i; i--)
		{
			//cout << somaMin << " " << somaMax << endl;
			somaMax += arrTeste[i];
		}
		//cout << "Soma max: " << somaMax << " ";
		//cout << "Pos Atual: " << posLoja << endl;
		if (somaMin == somaMax)
		{
			cout << "Encontrado na posicao: " << posLoja + 1 << " Tamanho do Vetor: " << tamanhoArr << endl;
		}
		posLoja++;
	}
}

// um for de 0 a I = soma min
// um for de tamanhoArr a I = soma max


/*
A rua encantada. Você quer comprar doces na confeitaria, mas não lembra onde fica. Você lembra
apenas que, somando o número das casas (1, 2, 3 ...) do início da rua até a confeitaria, e da casa logo após a
confeitaria até o fim da rua, ambas as somas são iguais. Infelizmente, a cidade tem ruas muito longas, com até
400 milhões de casas. Portanto, você precisa descobrir os possíveis números da confeitaria para ruas de
tamanho arbitrário. Por exemplo: a confeitaria pode estar em uma rua de tamanho 8, e seu endereço seria 6
(pois 1+2+3+4+5 = 7+8)
*/

int main()
{
	for (int k = 2; k < 2048; k++)
	{
		int arrSize = k;
	//cout << "Tamanho Array: ";
	//cin >> arrSize;
	//if (arrSize > 0)
	//{
		int * nLote = new int[arrSize];


		for (int i = 0; i < arrSize; i++)
		{
			nLote[i] = i + 1;
		}
		/*
		for(int i = 0; i < arrSize; i++)
		{
		cout << nLote[i] << " ";
		}

		cout << endl;
		*/

		testeCasas(nLote, arrSize);

		delete[] nLote;
		//cout << k << endl;
	}

	cout << "Done";

	return 0;
}

