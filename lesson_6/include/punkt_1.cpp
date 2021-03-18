#include "punkt_1.h"

int getIn()
{
	while (1)
	{	
		string sIN;
		cout << "Enter int value: a=";
		cin >> sIN;

		bool check = true;
		for (int i=0;i<sIN.length();i++)
		{
			if (sIN[i] == '-' || sIN[i] == '+' && i == 0)
				continue;

			if (!isdigit(sIN[i]))
			{
				check = false;
				cout << "not digit" << endl;
				break;
			}
		}
		if (check)
			return stoi(sIN);			
	}
	return -1;
}