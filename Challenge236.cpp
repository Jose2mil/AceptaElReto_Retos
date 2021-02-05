// Jose Valera

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int multiplier, firstQuantity, numberBoxes;
    long long int temporalQuantity, result;
    
    do
    {
        result = 0; 
        temporalQuantity = 0;
        
        cin >> firstQuantity >> multiplier >> numberBoxes;
        
        if (multiplier != 0 || firstQuantity != 0 || 
            numberBoxes != 0)
        {
            for (long long int i = 1; i <= numberBoxes; i++)
            {
                if (i == 1)
                    temporalQuantity = firstQuantity;
                
                else
                    temporalQuantity *= multiplier;
                
                result += temporalQuantity;
            }
            
            cout << result << endl;
        }
    }
    while (multiplier != 0 || firstQuantity != 0 || 
        numberBoxes != 0);
    
    return 0;
}
