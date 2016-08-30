#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "imagem.hpp"
#include <list>

using namespace std;

int main(){

	
	ifstream arquivo;

	Imagem *imagem = new Imagem();

	imagem->lerImagem(&arquivo);

	cout << "Formato: " << imagem->getFormato() << endl;

	cout << "Dimensao: " << imagem->getAltura() << " X " << imagem->getLargura() << endl;

	cout << "Escala Máxima: " << imagem->getEscalaMaxima() << endl;
	
	ofstream novoArquivo;

	imagem->gravarImagem(&arquivo, &novoArquivo);

	novoArquivo.close();
	arquivo.close();
	
	return 0;
}