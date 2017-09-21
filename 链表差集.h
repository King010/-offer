#include"公共头文件.h"

struct ListNode
{
	int _value;
	ListNode*_next;
	ListNode(int value = 0, ListNode*pnext = NULL)
		:_value(value)
		, _next(pnext)
	{}
};

void Difference(ListNode*pHead1,ListNode*pHead2)
{
	if (pHead1 == NULL)
		pHead1->_next = pHead2;
	while (pHead1)
	{
		while (pHead2)
		{
			if (pHead1->_value == pHead2->_value)
				;

		}
	}

}

struct node
{
	int elem;
	node* next;
};

void difference(node **LA, node *LB)
{
	node *pa, *pb, *pre, *q;
	pre = NULL;
	pa = *LA;
	while (pa)
	{
		pb = LB;
		while (pb&&pb->elem != pa->elem)
		{
			pb = pb->next;
		}
		if (pb)
		{
			if (!pre)
				*LA = pa->next;
			else
				pre->next = pa->next;
			q = pa;
			pa = pa->next;
			free(q);
		}
		else
		{
			pre = pa;
			pa = pa->next;
		}
	}
}

#include<iostream>
#include<string.h>
using namespace std;

int TheLength(char *str, int size){
	if (str == NULL || size<2)
		return 0;
	int tmpsize = size;
	int ressize = size;
	int j, i;
	for (i = 0; i<size; i += 2){
		size -= 2;
		tmpsize = size / 2;
		for (j = 0; j<tmpsize; j++){
			if (str[j] != str[j + tmpsize]){
				break;
			}
		}
		if (str[j-1] == str[j + tmpsize-1])
			return tmpsize * 2;
	}
	return ressize;
}

void testmain()
{
	char*str = "abcabcd";
	int size = strlen(str);
	int i =TheLength(str, size);

}
