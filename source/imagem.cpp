#include "imagem.hpp"
#include "validacaoarquivo.hpp"
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

void Imagem::lerImagem(ifstream * arquivo){

	ValidacaoArquivo va;

	va.validarArquivo(arquivo);

	va.ignorarComentario(arquivo);

	(*arquivo) >> formato;

	va.ignorarComentario(arquivo);

	(*arquivo) >> altura >> largura;

	va.ignorarComentario(arquivo);

	(*arquivo) >> escalaMaxima;

}

void Imagem::gravarImagem(ifstream * arquivo, ofstream * novoArquivo){

	arquivo->seekg(0,arquivo->beg);

	ValidacaoArquivo va;
	
	va.validarNovoArquivo(novoArquivo);

	string linha;

	while(!arquivo->eof()){
		getline(*arquivo,linha);
		(*novoArquivo) << linha << endl;
	}

	cout << "Nova imagem criada com sucesso! " << endl;
}