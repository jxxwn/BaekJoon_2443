#include<iostream>

using namespace std;

int main()
{
	int n;
	int count;
	cin >> n;
	count = (2 * n) - 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for (int k = count; k > 0; k--)
		{
			cout << '*';
		}
		count = count - 2;
		cout << '\n';
	}
	return 0;

}