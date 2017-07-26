
#include"公共头文件.h"

class SealedClass1
{
public:
	static SealedClass1*GetInstance()
	{
		return new SealedClass1();
	}
	static void DeleteInstance(SealedClass1*pInstance)
	{
		delete pInstance;
	}
private:
	SealedClass1() {};
	~SealedClass1() {};
};


template<class T>
class MakeSealed
{
	friend T;
private:
	MakeSealed();
	~MakeSealed();
};

class SealedClass2:virtual public MakeSealed<SealedClass2>
{
public:
	SealedClass2();
	~SealedClass2();
};

SealedClass2::SealedClass2()
{
}

SealedClass2::~SealedClass2()
{
}

class A
{
public:
	A(){}
	void destory(){
		delete this;
	}
private:
	~A(){}
};

class A
{
protected:
	A(){}
	~A(){}
public:
	static A*create()
	{
		return new A();
	}
	void destory()
	{
		delete this ;
	}
};
class A
{
private :
	void *operator new(size_t t){}// 注意函数的第一个参数和返回值都是固定的
	void operator delete(void* ptr){}// 重载了new就需要重载delete
public:
	A(){}
	~A(){}
};
