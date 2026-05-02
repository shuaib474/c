#include <iostream>
using namespace std;
int hezhi[21];
int hezi()
{
	for (int i = 0; i < 21; ++i)
	{
		hezhi[i] = i;
	}
	for (int i = 0; i < 21; ++i)
	{
		cout << hezhi[i] << " " << "\n";
	}
	return 0;
}