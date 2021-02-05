#include <iostream>

using namespace std;

int main()
{
    int lineas;
    bool trianguloSuperior = true, trianguloInferior = true;
    
    do
    {
        cin >> lineas;
        
        if (lineas != 0)
        {
            int filas[lineas][lineas];
            
            for (int i = 0; i < lineas; i++)
            {
                for (int j = 0; j < lineas; j++)
                {
                    cin >> filas[i][j];
                }
            }
            
            for (int i = 0; i < lineas; i++)
            {
                for (int j = 0; j < lineas; j++)
                {
                    if (i > j && filas[i][j] != 0)
                        trianguloInferior = false;
                    
                    else if (i < j && filas[i][j] != 0)
                        trianguloSuperior = false;
                }
            }
            
            if (trianguloSuperior || trianguloInferior)
                cout << "SI" << endl;
                
            else
                cout << "NO" << endl;
            
            trianguloSuperior = true;
            trianguloInferior = true;
        }
    } 
    while (lineas != 0);
    
    
    return 0;
}
