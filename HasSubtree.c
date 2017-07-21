#include"公共头文件.h"



//struct TreeNode {
//		int val;
//		struct TreeNode *left;
//		struct TreeNode *right;
//		TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//		}
//};
//
//bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//{
//	bool result = false;
//	if (pRoot1 != NULL&&pRoot2 != NULL)
//	{
//		if (pRoot1->val == pRoot2->val)
//		{
//			//找到相同结点后判断是否含有相同结构
//			result = DoesTree1HaveTree2(pRoot1, pRoot2);
//		}
//		if (!result)//在左子树中查找相同结点
//		{
//			result = HasSubtree(pRoot1->left, pRoot2);
//		}
//		if (!result)//在右子树中找相同结点
//		{
//			result = HasSubtree(pRoot1->right, pRoot2);
//		}
//	}
//	return result;
//}
//
////递归判断结构是否相同，直到将pRoot2所有结点完全判断
//bool DoesTree1HaveTree2(TreeNode*pRoot1, TreeNode*pRoot2){
//	if (pRoot2 == NULL){
//		return true;
//	}
//	if (pRoot1 == NULL){
//		return false;
//	}
//	if (pRoot1->val != pRoot2->val){
//		return false;
//	}
//	return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) && \
//		DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
//}

要查找树A中是否存在和树B结构一样的子树。我们可以分为两步：
第一步在树A中找到和B的根节点一样的值一样的结点R，第二步在判断树A中以R为根节点的子树是不是包含和树B一样的结构。
树的结点：

```
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
}
```


第一步代码：

```
bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
	bool result = false;
	if (pRoot1 != NULL&&pRoot2 != NULL)
	{
		if (pRoot1->val == pRoot2->val)
		{
			//找到相同结点后判断是否含有相同结构
			result = DoesTree1HaveTree2(pRoot1, pRoot2);
		}
		if (!result)//在左子树中查找相同结点
		{
			result = HasSubtree(pRoot1->left, pRoot2);
		}
		if (!result)//在右子树中找相同结点
		{
			result = HasSubtree(pRoot1->right, pRoot2);
		}
	}
	return result;
}
```

判断树A中以R为根节点的子树是不是包含和树B一样的结构。
第二步代码：

```
//递归判断结构是否相同，直到将pRoot2所有结点完全判断
bool DoesTree1HaveTree2(TreeNode*pRoot1, TreeNode*pRoot2){
	if (pRoot2 == NULL){
		return true;
	}
	if (pRoot1 == NULL){
		return false;
	}
	if (pRoot1->val != pRoot2->val){
		return false;
	}
	return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) && DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
}
```
