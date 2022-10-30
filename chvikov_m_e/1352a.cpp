#include <iostream>
int main()
{

	int t;
	std::cin >> t;


	for (int i = 0; i < t; i++)
	{
		int n, k = 0;
		std::cin >> n;

		if (n / 10000 == 1) k = k + 1;
		if (n / 1000 != 0 && n / 1000 != 10) k = k + 1;
		if ((n % 1000 - n % 100) / 100 != 0 && n / 100 != 100) k = k + 1;
		if ((n % 100 - n % 10) / 10 && n / 10 != 1000) k = k + 1;
		if (n % 10 != 0) k = k + 1;
		std::cout << k << std::endl;

		if (n / 10000 == 1)
		{
			std::cout << 10000 << " ";
		}
		if (n / 1000 != 0 && n / 1000 != 10)
		{
			std::cout << (n / 1000) * 1000 << " ";
		}
		if ((n % 1000 - n % 100) / 100 != 0 && n / 100 != 100)
		{
			std::cout << (n % 1000 - n % 100) << " ";
		}
		if ((n % 100 - n % 10) / 10 && n / 10 != 1000)
		{
			std::cout << (n % 100 - n % 10) << " ";
		}
		if (n % 10 != 0)
		{
			std::cout << n % 10 << " ";
		}
	}
}

