#include <string>
#include <iostream>
#include <vector>
int xuesheng()
{
	std::vector<std::string>students;
	students.reserve(100);
	std::cout << "请输入学生姓名(输入exit结束,最多100人)" << std::endl;//提示,不参与数据流动
	while (students.size() < 100)
	{
		std::string name;//声明
		std::cout << "第" << students.size() << "个" << std::endl;
		std::getline(std::cin, name);
		if (name == "exit")
		{
			break;
		}
		students.push_back(name);
	}
	std::cout << "\n共输入" << students.size() << "个学生:\n";
	for (size_t i = 0; i < students.size(); i++)
	{
		std::cout << i + 1 << "." << students[i] << std::endl;
	}
	return 0;
}
