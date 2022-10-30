#include <iostream>
int main()
{
	int matrix[5][5]; int strok, stolb;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			std::cin >> matrix[i][j];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (matrix[i][j] == 1)
			{
				strok = i;
				stolb = j;
			}
	int shag = abs(2 - strok) + abs(2 - stolb);
	std::cout << shag;
}
