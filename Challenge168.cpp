#include <iostream>

using namespace std;

int main()
{
	int totales;
	do
	{
		cin >> totales;

		bool completo[totales];
		int encontrado[totales - 1];

		for (int i = 0; i < totales; i++)
		{
			completo[i] = true;
		}

		for (int i = 0; i < totales - 1; i++)
		{
			cin >> encontrado[i];
			completo[encontrado[i] -1] = false;
		}

		for (int i = 0; i < totales; i++)
		{
			if (completo[i] == true)
				cout << i + 1 << endl;
		}




	} while (totales != 0);
	return 0;
}
