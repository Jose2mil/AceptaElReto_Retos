#include <iostream>

using namespace std;

int main()
{
    int telara, elefante;
    int pesoTotal = 0, cantidad = 0;
    
    do
    {
        cin >> telara;
        if (telara != 0)
        {
        do
        {
                cin >> elefante;
                
                if (elefante != 0)
                {
                    if (pesoTotal <= telara)
                    {
                        pesoTotal += elefante;
                        
                        if (pesoTotal <= telara)
                        {
                            cantidad ++;
                        }
                    }
                }
            }
            while (elefante != 0);
            
            cout << cantidad << endl;
            cantidad = 0; 
            pesoTotal = 0;
        }
    }
    while (telara != 0);
    return 0;
}
