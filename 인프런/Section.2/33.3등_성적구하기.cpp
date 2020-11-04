# include <stdio.h>
# include <vector>


using namespace std;

int main()
{
	int n, cnt = 1;
	int a[101];
	int score[101];
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; i++)
	{
		int tmp = i;
		for (int j = i + 1; j < n + 1; j++) {
			if (a[tmp] < a[j]) {
				int idx = a[j];
				a[j] = a[tmp];
				a[tmp] = idx;
			}
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		if (i > 1 && a[i] != a[i - 1])
		{
			cnt++;
		}
		if (cnt == 3)
		{
			printf("%d ", a[i]);
			break;
		}
	}

	return 0;
}