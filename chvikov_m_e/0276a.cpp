#include <iostream>
int main()
{
	int n, k, f, t, ud, maxud = -1000000000;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> f >> t;
		if (t > k) ud = f - (t - k);
		if (t <= k) ud = f;
		if (ud > maxud)maxud = ud;

	}
	std::cout << maxud;
}
