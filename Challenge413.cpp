#include <iostream>

using namespace std;

int main()
{
    int veces, alto, ancho, total, color1, color2;
    
    cin >> veces;
    
    for(int i = 1; i <= veces; i++)
    {
        cin >> alto >> ancho;
        
        total = (alto * ancho);
        color1 = (total / 2);
        color2 = (total - color1);
        
        cout << color2 << " " << color1 << endl;
    }
    
    return 0;
}
