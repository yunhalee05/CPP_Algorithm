#include<iostream>
#include<string>

using namespace std;

int main()
{
	//1.10
	int N, sum, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		int sum = 0;
		for (int j = 0; j < s.length(); j++)
		{
			sum += (s[j] - 48);
		}
		if (sum > max)
			max = sum;
	}

}