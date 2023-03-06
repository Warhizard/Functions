#include "Search.h"
void Search(int arr[], const int n)
{
	cout << endl;
	int coll = 0, ogr = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				coll++;
			}


		}
		if (coll > 0 && arr[i] != ogr)
		{
			ogr = arr[i];
			cout << arr[i] << "|" << coll;
		}
		coll = 0;
		cout << "\t";
	}

}