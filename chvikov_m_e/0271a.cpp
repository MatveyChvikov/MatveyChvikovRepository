
#include <iostream>
int main()
{
	int y;
	std::cin >> y;
	y = y + 1;
	int t, s, d, e;
	for (y; y <= 9999; y++)
	{
		t = y / 1000;
		s = (y % 1000 - y % 100) / 100;
		d = (y % 100 - y % 10) / 10;
		e = y % 10;
		if (t != s && t != d && t != e && s != d && s != e && d != e) break;
	}
	std::cout << y;
}
