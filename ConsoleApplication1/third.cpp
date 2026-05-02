#include <iostream>
#include <string>
int xunlie()
{
	std::string u = "yhghuvuvhu";
	int n;
	int m;
	n = u.find("huv");
	m = u.find("h");
	std::cout << n << "\n";
	std::cout << m << "\n";
	u.substr(2, 1);
	u.substr(0, 7);
	char a = u[0];
	char b = u.substr(2, 1)[0];
	std::string c = u.substr(3, 4);
	std::cout << a << "\n" << b << "\n" << c << "\n";
	return 0;
}