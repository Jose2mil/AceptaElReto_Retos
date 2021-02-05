#include <iostream>

using namespace std;

int main()
{
    int casos;
    string titular, mensaje;
    bool encontrado = false;
    int longitudTitular, longitudMensaje, contador = 0, contador2 = 0;
    
    cin >> casos;
    getline(cin, titular);
    
    while(casos > 0)
    {
        getline(cin, titular);
        getline(cin, mensaje);
        
        longitudTitular = titular.length();
        longitudMensaje = mensaje.length();
        contador = 0;
        contador2 = 0;
        encontrado = false;
        
        while(contador < longitudTitular && !encontrado)
        {
            if (toupper(titular[contador]) == toupper(mensaje[contador2]))
            {
                if (contador2 < longitudMensaje - 1)
                {
                    do
                    {
                        contador2 ++;
                    }
                    while (mensaje[contador2] == ' ');
                }
                else
                    encontrado = true;
            }
            
            contador ++;
        }
        
        if (encontrado)
            cout << "SI" << endl;

        
        else
            cout << "NO" << endl;
        
        casos--;
    }
    
    return 0;
}
