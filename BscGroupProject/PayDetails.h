#pragma once
#include <string>
class PayDetails
{
private:
	std::string m_name;
	int m_basesalary{};

public:
	PayDetails(std::string name, int basesalary)
	{
		m_name = name;
		m_basesalary = basesalary;
	}
};

