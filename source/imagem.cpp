#include "imagem.hpp"
#include "validacaoarquivo.hpp"
#include "cor.hpp"
#include <iostream>
#include <string>
#include <list>
#include <fstream>

using namespace std;

Imagem::Imagem(){

}

string Imagem::getFormato(){
	return formato;
}

void Imagem::setFormato(string formato){
	this->formato = formato;
}

int Imagem::getAltura(){
	return altura;
}

void Imagem::setAltura(int altura){
	this->altura = altura;
}
		
int Imagem::getLargura(){
	return largura;
}

void Imagem::setLargura(int largura){
	this->largura = largura;
}

int Imagem::getEscalaMaxima(){
	return escalaMaxima;
}

void Imagem::setEscalaMaxima(int escalaMaxima){
	this->escalaMaxima = escalaMaxima;
}

list<Cor> Imagem::getRGB(){
	return RGB;
}

void Imagem::setRGB(list<Cor> RGB){
	this->RGB = RGB;
}

void Imagem::lerImagem(ifstream * arquivo){

	ValidacaoArquivo va;

	va.validarArquivo(arquivo);

	va.ignorarComentario(arquivo);

	(*arquivo) >> formato;

	va.ignorarComentario(arquivo);

	(*arquivo) >> altura >> largura;

	va.ignorarComentario(arquivo);

	(*arquivo) >> escalaMaxima;

	int R,G,B;
	Cor *cor = new Cor();
	while(!arquivo->eof()){

		//va.ignorarComentario(arquivo);
		(*arquivo) >> R;

		//va.ignorarComentario(arquivo);
		(*arquivo) >> G;

		//va.ignorarComentario(arquivo);
		(*arquivo) >> B;
		
		cor->setR(R);
		cor->setG(G);
		cor->setB(B);

		RGB.push_back(*cor);
	}
}