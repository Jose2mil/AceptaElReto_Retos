#include <iostream>

using namespace std;

int main()
{
        long long int filasTotales, filaImpacto, derribo, bolosTotales;
        do
        {
            cin >> filasTotales >> filaImpacto;
            
            if (filasTotales != 0)
            {
                bolosTotales = (filasTotales * (filasTotales + 1))/2;
                
                derribo = ((filasTotales - filaImpacto + 1)  * 
                    (filasTotales - filaImpacto + 2))/ 2;
                    
                cout << bolosTotales-derribo << endl;
            }
        }
        while (filasTotales != 0);
    
	return 0;
}
