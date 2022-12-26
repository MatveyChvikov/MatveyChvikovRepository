
#include <iostream>

int main()
{
	double x = 0, y = 0;
	int count = 0, oblcount = 0;
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		count += 1;
		if (x * x + y * y <= 1 && (y >= x + 1 || y <= x - 1))
			oblcount += 1;
	}
	std::cout << 1.0 * oblcount / count; //1.0 - вещественное умножение
}


