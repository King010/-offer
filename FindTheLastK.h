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


ListNode* FindK(ListNode*phead, const int k)//只能遍历一次
{
	ListNode*first = phead;
	ListNode*second = phead;
	int temp = k;
	while (temp--)
	{
		first = first->_next;
	}
	while (first)
	{
		first = first->_next;
		second = second->_next;
	}
	return second;
}



void TestFindk()
{
	ListNode p9(9, NULL);
	ListNode p7{ 7, &p9 };
	ListNode p5{ 5, &p7 };
	ListNode p3{ 3, &p5 };
	ListNode p1{ 1, &p3 };
	ListNode *head = &p1;
	FindK(head,2);
}
