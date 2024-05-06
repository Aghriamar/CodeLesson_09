#include <iostream>
#include <string>

struct Student
{
	int Age;
	int Height;
	std::string Name;

	void GetInfo()
	{
		std::cout << "student struct";
	}
};

int main()
{
	Student* ptr = new Student{10, 160, "Paul"};
	ptr->GetInfo();
}