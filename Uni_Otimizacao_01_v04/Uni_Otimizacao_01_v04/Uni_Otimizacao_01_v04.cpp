// Test1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <array>
#include <process.h>
//#include <pthread.h>

using namespace std;

//#define NUM_THREADS 8

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
	while (posLoja != tamanhoArr - 1)
	{
		int somaMin = 0;
		int somaMax = 0;

		for (int i = 0; i < posLoja; i++)
		{
			//cout << somaMin << " " << somaMax << endl;
			somaMin += arrTeste[i];
		}
		//cout << "Soma min: " << somaMin << " ";
		for (int i = tamanhoArr - 1; posLoja < i; i--)
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

void testeCasasMat(int i)
{
	for (int j = i / 2; j <= i; j++)
	{
		if (((j*(j + 1)) / 2) == (((i*(i + 1)) / 2) - (((j + 1)*((j + 2))) / 2)))
		{
			cout << "Encontrado #: " << j + 1 << " Tamanho rua " << i << endl;
		}

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
	/*
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

	for(int i = 0; i < arrSize; i++)
	{
	cout << nLote[i] << " ";
	}

	cout << endl;



	testeCasas(nLote, arrSize);

	delete[] nLote;
	//cout << k << endl;

	}*/
	/*
	int static tamanhoTeste = 131072;

	for (int i = 1; i < tamanhoTeste; i++)
	{
		testeCasasMat(i);
	}
	*/

	testeCasasMat(9800);

	cout << "Done";

	return 0;
}


// TODO : 
//		Threads
//		Buscar o código para o comparador de tempo lá no PDF do desafio
//		Testar o algoritmo com 5000 - 10000 - 15000 - 20000 - 25000 - 30000 casos.
//		Analisar a complexidade do algoritmo.
//		Olhar bigocheatsheet.com
//		Olhar https://www.youtube.com/watch?v=N8elxpSu9pw
//
// Desenvolver gráfico pelo # de ruas pelo # de casas para cada código
// Avaliar a curva observada (oh é log(n), ou oh é n²
// Mostrar a solução/as soluções encontradas, fazer a avaliação analitica.
// Avaliar o real com o empirico, procurar comportamente assintótico
// Dar uma olhada em ManyEyes - IBM Analytics
// https://www.tableau.com/
// http://datamatic.io/
// https://infogr.am/
// Dia 25 devemos trazer uma proposta de técnica de real time rendering - como LOD (terreno, objeto, progressivo), image based rendering (relif mapping)
// Idealmente pegar um paper e implementar a ideia
// Recursos: Modelos 3D			
//								https://www.turbosquid.com/3d-models/steam-locomotive-3d-model/782987
//								https://www.turbosquid.com/Search/3D-Models/free/obj
//								http://tf3dm.com/3d-models/all/1/obj
//
// Recursos: PAPERS
//								http://kesen.realtimerendering.com/
//								http://www.realtimerendering.com/blog/
//
//