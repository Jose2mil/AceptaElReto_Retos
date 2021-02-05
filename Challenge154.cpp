#include <iostream>

using namespace std;

int main()
{
    int numeros;
    string letras;
    
    do
    {
        cin >> numeros >> letras;
        
        if (numeros != 9999 || letras != "ZZZ")
        {
            if (numeros != 9999)
                numeros++;
            
            else
            {
                numeros = 0;
                
                if (letras[2] != 'Z')
                {
                    do
                    {
                        letras[2] ++;
                    }
                    while (letras[2] == 'A' || letras[2] == 'E' 
                        || letras[2] == 'I' || letras[2] == 'O' 
                        || letras[2] == 'U');
                }
                
                else
                {
                    letras[2] = 'B';
                    
                    if (letras[1] != 'Z')
                    {
                        do
                        {
                            letras[1] ++;
                        }
                        while (letras[1] == 'A' || letras[1] == 'E' 
                            || letras[1] == 'I' || letras[1] == 'O' 
                            || letras[1] == 'U');
                    }
                    
                    else
                    {
                        letras[1] = 'B';
                        
                        do
                        {
                            letras[0] ++;
                        }
                        while (letras[0] == 'A' || letras[0] == 'E' 
                            || letras[0] == 'I' || letras[0] == 'O' 
                            || letras[0] == 'U');
                    }
                }
            }
            
            printf("%04d ", numeros);
            cout << letras << endl;
        }
    }
    while(numeros != 9999 || letras != "ZZZ");
    
    return 0;
}
