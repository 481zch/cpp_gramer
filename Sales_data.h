#pragma once

#include <iostream>
#include <string>
#include <functional>


class Sales_data
{
public:
	Sales_data(const Sales_data& data);
	Sales_data(Sales_data&& data);

	Sales_data& operator=(const Sales_data& data);
	Sales_data& operator=(Sales_data&& data);

	Sales_data& operator=(std::initializer_list<std::string> li);

	Sales_data& operator+=(const Sales_data& data);

	std::string& operator[](std::size_t n);

	const std::string& operator[](std::size_t n) const;

	Sales_data& operator++();

	Sales_data& operator++(int x);

};

// IO�����һ�㱻����Ϊ��Ԫ
std::ostream& operator<<(std::ostream& os, const Sales_data& item);
std::istream& operator>>(std::istream& is, Sales_data& item);

// ����ඨ�����������������һ��Ҳ�ᶨ��һ����Ӧ�ĸ��ϸ�ֵ�����