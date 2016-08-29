#include "imagem.hpp"
#include "cor.hpp"
#include <iostream>
#include <string>
#include <list>

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