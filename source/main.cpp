#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "imagem.hpp"
#include "cor.hpp"

using namespace std;

void validarArquivo(ifstream * arquivo){
	string nomeImagem;

		cout << "Entre com o nome da imagem: ";
		cout << flush;  
		cin >> nomeImagem;
		arquivo->open(nomeImagem.c_str());

		while(arquivo->fail()){
			cout << "Erro na abertura do arquivo " << endl;
			cout << "Digite o nome corretamente: ";
			cout << flush;  
			cin >> nomeImagem;
			arquivo->open(nomeImagem.c_str());
		}

}

void ignorarComentario(ifstream * arquivo){
	string linha;
	(*arquivo) >> linha;
	
	if(linha[0] != '#'){
		arquivo->seekg(-linha.size(),ios_base::cur);
		return;
	}

	while(linha[0] == '#'){
		
		getline(*arquivo,linha);

		(*arquivo) >> linha;
	}

	arquivo->seekg(-linha.size(),ios_base::cur);

}

int main(){

	ifstream arquivo;

	validarArquivo(&arquivo);

	Imagem *imagem = new Imagem();

	ignorarComentario(&arquivo);
	string formato;
	arquivo >> formato;
	imagem->setFormato(formato);

	cout << "Formato: " << formato << endl;

	ignorarComentario(&arquivo);
	int altura;
	int largura;
	arquivo >> altura >> largura;
	imagem->setAltura(altura);
	imagem->setLargura(largura);

	
	cout << "Dimensão: " << altura << " x " << largura << endl;


	return 0;
}