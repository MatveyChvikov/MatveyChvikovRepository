#include <iostream>

int main()
{
	int n, m, sx, sy, d, t;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> m >> sx >> sy >> d;
		if ((sy + d >= m && sx + d >= n) || (sx - d <= 1 && sy - d <= 1) || (sx + d >= n && sx - d <= 1) || (sy + d >= m && sy - d <= 1))
			std::cout << "-1" << "\n";
		else
			std::cout << n + m - 2 << "\n";
	}
}

