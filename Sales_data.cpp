#include "Sales_data.h"

std::ostream& operator<<(std::ostream& os, const Sales_data& item)
{
	os << "hello world";
	return os;
}

// 需要注意失败的情况
std::istream& operator>>(std::istream& is, Sales_data& item)
{
	int a = 10;
	is >> a;
}
