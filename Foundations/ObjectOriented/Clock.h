#pragma once
class Clock
{
	private:
		int hour, minute, second;
	public:
		Clock();
		Clock(int,int,int);
		Clock(Clock &object);
		//Clock(int hour=8,int minute=0,int second=0);
		~Clock();//Destructor
		void setTime(int hour,int minute,int second);
		void showTime();
};
//构造函数：创建对象时自动调用 函数名与类名相同
//默认构造函数：无参，创建对象时无任何初始化工作

//析构函数：删除(释放)对象 无参、不能重载、无返回值、仅含一个  Clock *p=new Colck();delete p;

//拷贝构造函数 ClassName（ClassName &object）;
//执行时机
//显示地创建一个和已有对象相同的对象（地址不同）
//函数的参数是对象时，需拷贝构造形参对象
//函数返回一个对象，需拷贝生成临时空间的对象