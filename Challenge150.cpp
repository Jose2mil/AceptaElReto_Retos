#include <iostream>

using namespace std;

int main()
{
    int n, espacio, relleno, tope;
    char c;
    
    do
    {
        cin >> n >> c;
        
        if (n != 0 || c != '0')
        {
            espacio = n - 1;
            relleno = n;
            
            tope = n * 2 - 1;
            
            for (int filas = 1; filas <= tope; filas++)
            {
                for (int i = 1; i <= espacio; i++)
                {
                    cout << " ";
                } 
                
                for (int i = 1; i <= relleno; i++)
                {
                    cout << c;
                } 
                cout << endl;
                
                if (filas >= n)
                {
                    espacio++;
                    relleno -= 2;
                }
                
                else
                {
                    espacio--;
                    relleno += 2;
                }
            }
        }
    }
    while (n != 0 || c != '0');
    
    return 0;
}
