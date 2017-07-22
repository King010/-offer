#include"公共头文件.h"

struct ListNode
{
	int _value;
	ListNode*_next;
	ListNode(int value = 0, ListNode*pnext=NULL)
		:_value(value)
		, _next(pnext)
	{}
};


ListNode* ReverseList(ListNode*phead)
{
	ListNode*preversehead = NULL;
	ListNode*pnode = phead;
	ListNode*ppre = NULL;
	while (pnode != NULL)
	{
		ListNode*pnext = pnode->_next;
		if (pnext == NULL)
			preversehead = pnode;
		pnode->_next = ppre;
		ppre = pnode;
		pnode = pnext;
	}
	return preversehead;
}



void TestReverse()
{
	ListNode p9(9,NULL);
	ListNode p7{ 7, &p9 };
	ListNode p5{ 5, &p7 };
	ListNode p3{ 3, &p5 };
	ListNode p1{ 1, &p3 };
	ListNode *head = &p1;
	ReverseList(head);
}
