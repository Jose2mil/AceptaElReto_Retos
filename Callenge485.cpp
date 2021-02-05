/*Program that read an amount of stages and the distance traveled in
 *  each stage, then tehe program show the restant distance in each 
 * stage, the program will must finish when the user type a zero 
 * amount of stages
 * 
 * by Jose Valera*/

#include <iostream>

using namespace std;

int main()
{
    int amountOfStages;
    
    do
    {
        cin >> amountOfStages;

        if (amountOfStages != 0)
        {
            int traveledDistance[amountOfStages];
            int totalDistance = 0, distanciaRestante = 0;

            for (int i = 0; i < amountOfStages; i++)
            {
                cin >> traveledDistance[i];
                
                totalDistance += traveledDistance[i];
            }

            distanciaRestante = totalDistance;

            for (int i = 0; i < amountOfStages; i++)
            {
                if (i == amountOfStages - 1)
                    cout << distanciaRestante;
                
                else
                    cout << distanciaRestante << " ";
                
                distanciaRestante -= traveledDistance[i];
            }

            cout << endl;
        }
    } while (amountOfStages != 0);


    return 0;
}
