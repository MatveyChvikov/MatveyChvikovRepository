
#include <iostream>
#include <array>
#include <vector>
#include <cmath>

int main()
{
	double x = 0.1;
	double delt = 0.05;
	double eps = 0.0001;
	int i = 0;
	int iceff = 0;
	double chisl = 0;
	double znam = 1;

		chisl = pow(x, 2 * i);
		for (i = 0; i < 2 * iceff; i++)
			znam = 1 * i;
}

/*
double x = 0.1;
double delt = 0.05;
double eps = 0.0001;
int i = 0;
int iceff = 0;
double chisl = 0;
double znam = 1;
while (x <= 1)
{
	chisl = pow(x, 2 * i);
	for (i = 0; i < 2 * iceff; i++)
		znam = 1 * i;




	x = x + delt;
	iceff += 1;
}
*/


/*
int n;
int i;
int res;

cin >> n;
res = 1;
for (i = 1; i <= n; i++) {
	res = res * i;
}
cout << res;
*/
//const int max = 100;
	//std::vector <int> a(max, -1);
	//const int nmax = 50;
	//array <int, nmax> a{ 0 };