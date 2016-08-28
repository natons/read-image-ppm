#ifndef COR_HPP
#define COR_HPP

#include <iostream>

using namespace std;

class Cor {

private:
		int R;
		int G;
		int B;

public:
		Cor();
		
		int getR();

		void setR(int R);

		int getG();

		void setG(int G);

		int getB();

		void setB(int B);
};

#endif