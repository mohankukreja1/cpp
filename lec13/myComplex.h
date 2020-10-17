#include <iostream>
class myComplex{
	double re, im;
public:
	myComplex(double r, double i);
	myComplex(double r);
	myComplex();

	myComplex operator+(const myComplex& b);
	myComplex subtract(const myComplex& b);
	bool isEqual(const myComplex& b) const;
	double absolute() const;
	myComplex conjugate() const;
	friend std::ostream& operator<<(std::ostream& p, const myComplex& c);
	// friend void operator<<(ostream obj, const myComplex& c);
};
