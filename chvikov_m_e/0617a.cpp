
#include <iostream>
int main()
{
	int x = 0;
	std::cin >> x;
	int step = 0;
	if (x % 5 == 0) step = x / 5;
	if (x % 5 != 0) step = (x / 5) + 1;
	std::cout << step;

}
