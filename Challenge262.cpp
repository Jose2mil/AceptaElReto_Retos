#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n, p;
    long long int numero, total;
    
    do
    {
        cin >> n >> p;
        
        if (n != 0 && p != 0)
        {
            total = 0;
            
            for (long long int i = 1; i <= n; i++)
            {
                numero = 1;
                
                for (long long int j = 1; j <= p; j++)
                {
                    numero = ((numero%46337) * (i%46337)) % 46337;
                }
                
                total = ((total%46337) + (numero%46337)) % 46337;
            }
            
            cout << total << endl;
        }
    }
    while (n != 0 && p != 0);
    
    return 0;
}



