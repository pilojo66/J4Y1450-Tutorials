#ifndef NEWCLASS_H
#define NEWCLASS_H
#include "RandomClass.h"

class NewClass: public RandomClass{
	float c, d;
	double e, f;
public:
	void print(int);
	void setFloat(float, float);
	void setDouble(float, float);
};

#endif 