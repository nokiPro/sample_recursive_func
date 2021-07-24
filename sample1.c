#include <stdio.h>

// n の最大値
#define N_MAX (100)

// 数字を使用したら、その添字の要素を1にする
int	used_flg[N_MAX + 1];

int	result[N_MAX];
int n = 3;
int r = 3;

void	print_result(void)
{
	int	i;
	int	j;

	j = 0;
	for (i = 0; i < r; i++)
	{
		printf("%d", result[i]);
		j++;
		if (j % 3 == 0)
		{
			printf("%c", ',');
			j = 0;
		}
	}

}

void	permutation(int nth)
{
	int	i;

	if (nth == r)
	{
		print_result();
		return;
	}

	for (i = 0; i <= n; i++)
	{
		if (used_flg[i] == 0)
		{
			result[nth] = i;
			used_flg[i] = 1;
			permutation(nth + 1);
			used_flg[i] = 0;
		}
	}
}

int	main(void)
{
	permutation(0);
	return (0);
}
