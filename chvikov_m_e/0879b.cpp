#include <iostream>
#include <queue>

int main()
{
	int n = 0;
	long long k = 0;
	std::cin >> n >> k;
	std::queue <int> q;
	int max = 0, first = 0, last = 0, count = 0;;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		q.push(a);
		if (a > max)
			max = a;
	}
	if (n <= k)
	{
		std::cout << max;
	}
	else
	{
		first = q.front();
		q.pop();
		while (count < k)
		{
			if (first > q.front())
			{
				last = q.front();
				q.pop();
				q.push(last);
				count = count + 1;
			}
			else if (first < q.front())
			{
				last = first;
				first = q.front();
				q.pop();
				q.push(last);
				count = 1;
			}
		}
		std::cout << first;
	}
	return 0;
}




















	/*
	int first = 0, last = 0, count = 0;
	first = q.front();
	q.pop();	
	while (count < k)
	{
		if (first > q.front())
		{
			last = q.front();
			q.pop();
			q.push(last);
			count = count + 1;
		}
		else if (first < q.front())
		{
			last = first;
			first = q.front();
			q.pop();
			q.push(last);
			count = 0;
		}
	}
	std::cout << first;
	*/
	


