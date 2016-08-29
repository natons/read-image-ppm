#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <iostream>
#include <string>
#include <list>
#include "cor.hpp"
#include "validacaoarquivo.hpp"
#include <fstream>

using namespace std;

class Imagem {

private:
		string formato;
		int altura;
		int largura;
		int escalaMaxima;
		list<Cor> RGB;

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

		list<Cor> getRGB();

		void setRGB(list<Cor> RGB);

		void lerImagem(ifstream * arquivo);
};

#endif