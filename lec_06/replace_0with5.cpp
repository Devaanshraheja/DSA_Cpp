#include <iostream>
using namespace std;
int replace(int num)
{
	int result = 0, place = 1;
	if (num == 0)
		return 5;
	while (num > 0)
	{
		int digit = num % 10;
		if (digit == 0)
			digit = 5;
		result = digit * place + result;
		place *= 10;
		num /= 10;
	}
	return result;
}
int main()
{
	int N;
	cin >> N;
	cout << replace(N);

	return 0;
}