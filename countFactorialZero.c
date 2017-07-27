int findthenum0(int num)
{
	if (num < 0)
		return -1;
	int count = 0;
	for (int i = 1; i < num + 1; ++i)
	{
		int j = i;
		while (j%5==0)
		{
			j = j / 5;
			count++;
		}
	}
	return count;
}

int lowestOne(int N)
{
	int Ret = 0;
	while (N)
	{
		N >>= 1;
		Ret += N;
	}
	return Ret;
}

int countFactorialZero(int N) 
{
	int ret = 0, i, j;
	for (i = 1; i <= N; i++)
	{
		j = i;
		while (j % 5 == 0)
		{
			ret++;
			j /= 5;
		}
	}
	return ret;
}
void TestNum0()
{
	int i = countFactorialZero(10);
}
