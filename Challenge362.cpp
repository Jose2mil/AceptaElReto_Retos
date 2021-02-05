#include <iostream>

using namespace std;

int main()
{
    int n, day, month;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> day >> month;
        
        if (day == 25 && month == 12)
            cout <<"SI"<< endl;
            
        else
            cout <<"NO"<< endl;
    }
    
    return 0;
}
