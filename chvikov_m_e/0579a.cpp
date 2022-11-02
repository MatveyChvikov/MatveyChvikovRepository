
#include <iostream>


int main()
{
	int rez;
	std::cin >> rez;
	int n = 0;
	while (rez)
	{
		n = n + (rez & 1);
		rez >>= 1;
	}
	std::cout << n;
	return 0;
}
