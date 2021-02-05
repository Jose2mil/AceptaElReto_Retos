// Jose Valera

#include <iostream>

using namespace std;

int main()
{
    int attempt;
    int inicialPoint1, finalPoint1, inicialPoint2, finalPoint2;
    int lower1, bigger1, lower2, bigger2;
    
    cin >> attempt;

    while (attempt > 0)
    {
        cin >> inicialPoint1 >> finalPoint1 >> inicialPoint2 
            >> finalPoint2;
        
        if(inicialPoint1 < finalPoint1)
        {
            lower1 = inicialPoint1;
            bigger1 = finalPoint1;
        }
        else
        {
            lower1 = finalPoint1;
            bigger1 = inicialPoint1;
        }
            
        if (inicialPoint2 < finalPoint2)
        {
            lower2 = inicialPoint2;
            bigger2 = finalPoint2;
        }
        else
        {
            lower2 = finalPoint2;
            bigger2 = inicialPoint2;
        }
        
        /* We check if the distance1 between the Inicialoint1 and 
        * finalPoint1 coincides with distance2 at its beginning, 
        * halfway or at the end*/
        
        
        if ((lower1 <= lower2 && bigger1 > lower2) || 
            (lower1 >= lower2 && lower1 < bigger2 && 
            bigger1 >= bigger2) ||
            (lower1 >= lower2 && bigger1 <= bigger2))
            cout << "SOLAPADOS" << endl;
            
        else
            cout << "SEPARADOS" << endl;
    
        attempt--;
    }
    
    return 0;
}
