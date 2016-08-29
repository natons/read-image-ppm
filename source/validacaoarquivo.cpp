#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "validacaoarquivo.hpp"

using namespace std;

void ValidacaoArquivo::validarArquivo(ifstream * arquivo){
	string nomeImagem;

	cout << "Entre com o diretório da imagem (incluindo o nome e extensao) ou  S para sair: ";
	cout << flush;  
	cin >> nomeImagem;

	if(nomeImagem[0] == 's' || nomeImagem[0] == 'S')
		exit(0);

	arquivo->open(nomeImagem.c_str());

	while(arquivo->fail()){
		cout << "Erro na abertura do arquivo! Verifique o diretório" << endl;
		cout << "Digite o diretório novamente (incluindo o nome e extensao) ou S para sair: ";
		cout << flush;  
		cin >> nomeImagem;
		if(nomeImagem[0] == 's' || nomeImagem[0] == 'S')
			exit(0);
		arquivo->open(nomeImagem.c_str());
	}

}

void ValidacaoArquivo::ignorarComentario(ifstream * arquivo){
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