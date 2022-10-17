#include <iostream>
#include <vector>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		const int max = 100;
		std::vector <int> a(max, -1);
		int h = 1;
		int n;
		std::cin >> n;
		for (int i = 0; i < n; i++)
			std::cin >> a[i];


		if (n == 1 && a[0] == 1)
		{
			h = h + 1;
		}
		else if (n == 1 && a[0] == 0)
		{
			h = h;
		}	
		else if (n > 1)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 0 && a[i + 1] == 0)
				{
					h = -1;
					break;
				}
				else if (a[i] == 1 && a[i + 1] != 1)
					h = h + 1;
				else if (a[i] == 1 && a[i + 1] == 1)
					h = h + 5;
			}
		}
		std::cout << h << "\n";

	}
}