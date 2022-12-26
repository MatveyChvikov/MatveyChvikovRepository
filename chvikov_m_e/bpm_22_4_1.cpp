

#include <iostream>
#include <cmath>

int main()
{
	double chisl = 0.0, func = 1.0, x = 0.1, delt = 0.05, eps = 0.0001, sum = 0.0;
	int i = 0, j = 0, n = 1000, factor = 1, znam = 0;

	for (x = 0.1; x <= 1.05; x += delt)
	{
		i = 0;
		sum = 0.0;
		func = 1.0;
		while (func >= eps)
		{
			if (i == 0)
				func = 1;
			if (i > 0)
			{
				chisl = pow(x, 2 * i);
				factor = 2 * i;
				znam = 1;
				for (j = 1; j <= factor; j++)
				{
					znam = znam * j;
				}
				func = chisl / znam;
			}
			sum += func;
			if (func < eps)
				break;
			std::cout << " i = " << i << "  x = " << x << "  sum =  " << sum << '\n';
			i += 1;
		}
	}
