
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string a;
	std::string b;
	std::cin >> a;
	std::cin >> b;
	int count = 0;
	int diff = 0;
	if (a == b)
		std::cout << 0;
	else if (a != b)
	{

		diff = a.length() - b.length();
		diff = abs(diff);
		if (a.length() > b.length())
		{
			for (int i = 0; i < diff; i++)
			{
				a.erase(0, 1);
				count++;
			}
		}
		else if (a.length() < b.length())
		{
			for (int i = 0; i < diff; i++)
			{
				b.erase(0, 1);
				count++;
			}
		}
		if (a == b)
			std::cout << count;
		else if (a != b)
		{
			for (int i = 0; i < a.length(); i++)
			{
				a.erase(0, 1);
				b.erase(0, 1);
				count += 2;
				if (a == b)
					break;
			}

		}
		std::cout << count;
	}
}





