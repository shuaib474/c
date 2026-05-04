#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <ctime> //给time函数提供支持
#include <cstdlib>//rand srang
vector<std::string>ciku;
int caidanci()
{
	ciku.reserve(5);
	ciku = { "apple","balala","cat","dog","elephant" };
	int index = rand() % (ciku.size());
	std::string word = ciku[index];
	int s = word.size();
	string guess(s, '_');
	//srand((unsigned)time(0));//srand全称set random seed,设置随机种子
	std::cout << guess << "\n";
	std::cout << "单词长度为:" << s << "\n";
	return 0;
}

