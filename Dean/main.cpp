#include "Dean_flow.h"

int main()
{
    Dean_flow De;
    
    De.p = 1;
    De.D = 2;
    De.v = 3;
    De.nu = 4;
    De.Rc = 5;

    cout<<De.definition_Dn(De.p, De.D, De.v, De.nu, De.Rc)<<endl;

    system("pause");
    return 0;
}