#include <iostream>

using namespace std;

int main()
{
    int veces, nCom, comG, dif, total = 0;
    
    cin >> veces;
    
    for (int i = 1; i <= veces; i++)
    {
        cin >> nCom >> comG >> dif;
        
        for (int j = 1; j <= nCom;j++)
        {
            
            total += comG;
            comG -= dif;
        }
        
        cout << total << endl;
        
        total = 0;
    }
    
    return 0;
}
