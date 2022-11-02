
#include <iostream>
#include <array>
using namespace std;

int main()
{
	int n; int k = 0;
	cin >> n;
	const int nmax = 50;
	array <int, nmax> a{ 0 };
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = n - 1; i >= 0; i--)
		for (int j = i - 1; j >= 0; j--)
			if (a[j] == a[i])
			{
				a[j] = 0;
			}

	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			k = k + 1;
		}
	}
	cout << k << endl;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}
