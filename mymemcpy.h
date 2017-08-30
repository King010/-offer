#include"公共头文件.h"

void *my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL || src != NULL);
	while (count--)
	{
		*(char*)dest = *(char *)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;
}

void *my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL || src != NULL);
	if (dest<=src && (char*)src + count<dest)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest+1;
			src = (char*)src + 1;
		}
	}
	else
	{
		src = (char*)src + count - 1;
		dest = (char*)dest + count - 1;
		while (count--)
		{
			*(char*)dest = *(char*)src;
			src = (char*)src - 1;
			dest = (char*)dest - 1;
		}
	}
	return dest;
}

void Testmycp()
{
	char s1[20] = "hello world";
	char s2[20] = "nihao shijie";
	//my_memcpy(s1, s2, 5);
	my_memmove(s1, s2, 1);
}
