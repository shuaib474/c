#include<iostream>
using namespace std;
int jsq();
double calc(double x,double y,char z);
int main()
{
	cout << "计算器启动成功" << endl;
		jsq();
	return 0;
}
int jsq()
{
	char choose;
	do
	{
		double a, b;
		char f;
		cout << "请输入第一个数字:";
		cin >> a;
		cout << "请输入第二个数字:";
		cin >> b;
		cout << "输入运算符号:";
		cin >> f;
		calc(a, b, f);
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
		return x / y;
	}
}