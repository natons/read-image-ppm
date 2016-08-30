#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <iostream>
#include <string>
#include <list>
#include "validacaoarquivo.hpp"
#include <fstream>

using namespace std;

class Imagem {

private:
		string formato;
		int altura;
		int largura;
		int escalaMaxima;

public:
		Imagem();
		
		string getFormato();

		void setFormato(string formato);

		int getAltura();

		void setAltura(int altura);

		int getLargura();

		void setLargura(int largura);

		int getEscalaMaxima();

		void setEscalaMaxima(int escalaMaxima);

		void lerImagem(ifstream * arquivo);

		void gravarImagem(ifstream * arquivo, ofstream * novoArquivo);
};

#endif