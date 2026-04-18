#include<iostream>
using namespace std;
int jsq();
double calc(double x,double y,char z);
int jsq()
{
	char choose;
	cout << "计算器启动成功" << endl;
	do
	{
		double a, b;
		char f;
		cout << "输入算式" << endl;
		cin >> a >> f >> b;
		double res = calc(a, b, f);
		cout << "计算结果是:" << res << endl;
		cout << "继续K或者k,退出m:";
		cin >> choose;
		if (choose != 'k' && choose != 'K' && choose != 'm')
		{
			cout << " 输入出错,结束程序";
			break;
		}
	} while (choose == 'K' || choose == 'k');
	return 0;

}
double calc(double x, double y,char z)
{
	if (z=='+') {
		return x + y;
	}
	else if (z == '-') {
		return x - y;
	}
	else if (z == '*') {
		return x * y;
	}
	else if (z == '/') {
		if (y == 0)
		{
			cout << "错误,除数不能为0" << endl;
			return 0;
		}
		return x / y;
	}
	else {
		cout << "无效运算符" << endl;
		return 0;
	}
}