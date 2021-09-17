#include "Dean_flow.h"

Dean_flow::Dean_flow()
{
	Dn = 0;
	p = 0;
	D = 0;
	v = 0;
	nu = 0;
	Rc = 0;
}

Dean_flow::~Dean_flow()
{

}


float Dean_flow::definition_Dn(float p, float D, float v, float nu, float Rc)
{
	float Re = (p * D * v) / nu;
	Dn = Re * sqrt(D / (2 * Rc));
	
	return Dn;
}
