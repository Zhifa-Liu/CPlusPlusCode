//C++的公有、保护、私有继承的访问控制
class Base
{
public:
	int m1;
protected:
	int m2;
private:
	int m3;
};

class PrivateClass :private Base
{
public:
	void test()
	{
		m1 = 1;
		m2 = 2;
//		m3=3; //cannot access
	}
};

class DerivedFromPri : public PrivateClass
{
public:
	void test()
	{
//		m1=1;//cannot access
//		m2=2;//cannot access
//		m3=3;//cannot access
	}
};

class ProtectedClass :protected Base
{
public:
	void test()
	{
		m1 = 1;
		m2 = 2;
//		m3 = 3;//cannot access
	}
};

class DerivedFromPro : public ProtectedClass
{
public:
	void test()
	{
		m1 = 1;
		m2 = 2;
//		m3 = 3;//cannot access
	}
};
class PublicClass :public Base
{
public:
	void test()
	{
		m1 = 1;
		m2 = 2;
//		m3 = 3;//cannot access
	}
};

class DerivedFromPub : public PublicClass
{
public:
	void test()
	{
		m1 = 1;
		m2 = 2;
//		m3 = 3;//cannot access
	}
};

void IMmain()
{
	PrivateClass priObj;
//	priObj.m1=10; //cannot access
//	priObj.m2=20; //cannot access
//	priObj.m3=30; //cannot access

	ProtectedClass proObj;
//	proObj.m1=10; //cannot access
//	proObj.m2=20; //cannot access
//	proObj.m3=30; //cannot access

	PublicClass pubObj;
	pubObj.m1 = 10;
//	proObj.m2=20; //cannot access
//	proObj.m3=30; //cannot access


	DerivedFromPri DpriObj;
//	priObj.m1=10; //cannot access
//	priObj.m2=20; //cannot access
//	priObj.m3=30; //cannot access

	DerivedFromPro DproObj;
//	priObj.m1=10; //cannot access
//	priObj.m2=20; //cannot access
//	priObj.m3=30; //cannot access

	DerivedFromPub DpubObj;
	DpubObj.m1 = 100;
//	proObj.m2=20; //cannot access
//	proObj.m3=30; //cannot access
}