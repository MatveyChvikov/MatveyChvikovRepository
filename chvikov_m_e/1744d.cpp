
#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	int t;
	std::cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n;
		std::cin >> n;
		std::vector<int>a(n);
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		int twocounter = 0;
		int count = 0;
		int counterlog = 0;
		for (int i = 0; i < n; i++)
		{
			while (a[i] % 2 == 0)
			{
				twocounter += 1;
				a[i] = a[i] / 2;
			}
		}
		if (twocounter >= n)
			count = 0;
		else
		{
			for (int i = n; i >= 1; i--)
			{
				bool isPowerOfTwo = i && !(i & (i - 1));
				if (isPowerOfTwo == 1 && i >= 2)
				{
					counterlog = log(i) / log(2);
					twocounter = twocounter + counterlog;
					count = count + 1;
				}
				if (twocounter >= n)
					break;
				if (i < 2 && twocounter != n)
				{
					count = -1;
					break;
				}
			}
		}
		std::cout << count << "\n";
	}
	return 0;
}





	/*
	int t;
	std::cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n;
		std::cin >> n;
		std::vector<int>a(n);
		for (int i = 0; i < n; i++)
			std::cin >> a[i];

		unsigned int multi = 1;
		for (int i = 0; i < n; i++)
			multi = multi * a[i];
		int dva;
		dva = (int)(pow(2, n) + 0.5);
		//int dva = pow(2, n);
		int twocounter = 0;
		for (int i = 0; i < n; i++)
		{
			while (a[i] % 2 == 0)
			{
				twocounter += 1;
				a[i] = a[i] / 2;
			}
		}
		int count = 0;
		if (multi % dva == 0)
			std::cout << "0" << "\n";
		else if (twocounter < n)
		{
			for (int i = n; i >= 1; i--)
			{
				bool isPowerOfTwo = i && !(i & (i - 1));
				if (isPowerOfTwo == 1 && i >= 2)
				{
					twocounter = twocounter + i;
					multi = multi * i;
					count = count + 1;
				}
				if (twocounter >= n && multi % dva == 0)
					break;
				if (i < 2 && multi % dva != 0)
				{
					count = -1;
					break;
				}
			}
			std::cout << count << "\n";
		}
	}
	return 0;
	*/


