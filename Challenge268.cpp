#include <iostream>

using namespace std;

struct marcha
{
    int plato;
    int corona;
    double relacion;
};

int main()
{
    int numeroPlatos, numeroCoronas, CantidadCombinaciones;
    
    do
    {
        if (numeroPlatos != 0 && numeroCoronas != 0)
        {
            cin >> numeroPlatos >> numeroCoronas;
            
            CantidadCombinaciones = numeroPlatos * numeroCoronas;
            
            marcha combinacion[CantidadCombinaciones];
            
            int dientesPlato, dientesCorona;
            
            for (int i = 0; i < numeroPlatos; i++)
            {
                cin >> dientesPlato;
                
                for (int j = numeroCoronas * i; j < (numeroCoronas * i) + numeroCoronas; j++)
                {
                    combinacion[j].plato = dientesPlato;
                }
            }
            
            for (int i = 0; i < numeroCoronas; i++)
            {
                cin >> dientesCorona;
                
                for (int j = i; j < CantidadCombinaciones; j+= numeroCoronas)
                {
                    combinacion[j].corona = dientesCorona;
                    combinacion[j].relacion = 
                        combinacion[j].plato / (double) combinacion[j].corona;
                }
            }
            
            marcha aux;
            
            for (int i = 0; i < CantidadCombinaciones - 1; i++)
            {
                for (int j = i + 1; j < CantidadCombinaciones; j++)
                {
                    if (combinacion[i].relacion > combinacion[j].relacion )
                    {
                        aux = combinacion[j];
                        combinacion[j] = combinacion[i];
                        combinacion[i] = aux;
                    }
                }
            }
            
            for (int i = 0; i < CantidadCombinaciones; i++)
            {
                cout << combinacion[i].plato << "-" << combinacion[i].corona;
                
                if (i == CantidadCombinaciones - 1)
                    cout << endl;
                
                else
                    cout << " ";
            }
        }
    }
    while (numeroPlatos != 0 && numeroCoronas != 0);
    
    return 0;
}
