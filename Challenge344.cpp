/*Program than calculates if a number of wires can be conecteds 
 * thenselves knwoing their terminations.
 * 
 * By Jose Valera */

#include <iostream>

using namespace std;

int main()
{
    int numberOfCases, numberOfWires, terminationBalance;
    string termination;
    
    cin >> numberOfCases;
    
    for (int i = 0; i < numberOfCases; i ++)
    {
        terminationBalance = 0;
        
        cin >> numberOfWires;
        
        for (int i = 0; i < numberOfWires; i++)
        {
            cin >> termination;
            
            if (termination == "MM")
            {
                terminationBalance ++;
            }
            
            else if (termination == "HH")
            {
                terminationBalance --;
            }
        }
        
        if (terminationBalance == 0)
            cout << "POSIBLE" << endl;

        
        else
            cout << "IMPOSIBLE" << endl;
    }
    
    return 0;
}
