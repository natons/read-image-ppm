#include "cor.hpp"
#include <iostream>
#include <string>

using namespace std;

Cor::Cor(){

}

int Cor::getR(){
	return R;
}

void Cor::setR(int R){
	this->R = R;
}

int Cor::getG(){
	return G;
}

void Cor::setG(int G){
	this->G = G;
}

int Cor::getB(){
	this->B = B;
}

void Cor::setB(int B){
	this->B = B;
}