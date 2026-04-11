#include<iostream>
using namespace std;
void myprint2()
{
	cout << "hallo world" << endl;
}
int jjcfb()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << i << "*" << j << "=" << i * j << "\t";
		}
		std::cout << std::endl;
	}
	return 0;
}