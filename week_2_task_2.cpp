#include <iostream>

int main()
{
	double **p ; // ptr on prt init

	double a = 2; //usial variable 

	double *p_mid; // prt on var

	p = (double**)malloc(sizeof(double)); //to be able to clean memory
	p_mid = (double*)malloc(sizeof(double));
	
	p_mid = &a; // ptr on var
	p = &p_mid; // ptr on prt

	std::cout << "my gyrus count:\n";
	std::cout << **p;

	return 0;
}
