
#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, k, r, c;
		std::cin >> n >> k >> r >> c;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if ((i + j) % k == (r + c) % k)
					std::cout << 'X';
				else
					std::cout << '.';
			}
			std::cout << std::endl;
		}
	}
}

