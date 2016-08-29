#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "imagem.hpp"
#include "cor.hpp"
#include <list>

using namespace std;

int main(){

	ifstream arquivo;

	Imagem *imagem = new Imagem();

	imagem->lerImagem(&arquivo);

	cout << "Formato: " << imagem->getFormato() << endl;

	cout << "Dimensao: " << imagem->getAltura() << " X " << imagem->getLargura() << endl;

	cout << "Escala Máxima: " << imagem->getEscalaMaxima() << endl;
	
	/* 
	list<Cor> cores = imagem->getRGB();
	for(list<Cor>::iterator it=cores.begin(); it!=cores.end(); ++it)
		cout << it->getR() << it->getG() << it->getB() << endl;
	*/
	return 0;
}