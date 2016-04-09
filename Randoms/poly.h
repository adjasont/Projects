#pragma once

class poly {
private:
	char variable;
	int exponent;
	int coefficient;
public:
	void setVar(int var) { variable = var; }
	void setExp(int exp) { exponent = exp; }
	void setCoeff(int coeff) { coefficient = coeff; }
	char getVar() const { return variable; }
	int getExp() const { return exponent; }
	int getCoeff() const { return coefficient; }
};
