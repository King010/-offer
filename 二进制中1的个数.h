
//二进制中1的个数，其中负数用补码表示
int  NumberOf1(int n) {
	int i = 31;
	int count = 0;
	for (; i >= 0; i--)
	{
		if (n&(1 << i))
			count++;
	}
	return count;
}

void Testnum()
{
	NumberOf1(-1);
}
