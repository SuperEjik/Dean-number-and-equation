#pragma once
#include <iostream>
using namespace std;

class Dean_flow
{
public:
	float p;
	float D;
	float v;
	float nu;
	float Rc;

	Dean_flow();
	~Dean_flow();
	float definition_Dn(float, float, float, float, float);

private:
	float Dn;
};
