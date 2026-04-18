#include <iostream>
#include <string>
#include <vector>
int xt()
{
	int choice;
	std::vector<std::string>names_list;//盒子定义在外面防止被刷
	names_list.reserve(20);
	std::vector<int>score_list;
	score_list.reserve(20);
	do {
		std::cout << 1 << "."<< "添加"<<"   ";
		std::cout << 2 << "." <<"查看"<<"   ";
		std::cout << 3 << "." << "退出 \n";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cin.ignore();//忽略上一个cin遗留的回车
			std::cout << "输入名字:\n";
			std::string names;
			std::getline(std::cin, names);
			float scores;
			std::cin >> scores;
			names_list.push_back(names);
			score_list.push_back(scores);
		}
		else if (choice == 2)
		{
			if (names_list.empty())
			{
				std::cout << "还没有数据,请先添加\n";
				continue;
			}
			for (size_t i = 0; i <names_list.size(); i++)
			{
				std::cout << "名字:" << names_list[i] << " " << score_list[i] << "\n";
			}
		}
		else if (choice != 1 && choice != 2)
		{
			std::cout << "输入出错,退出程序" << std::endl;
			break;
		}
	} while (choice != 3);
	return 0;
}

