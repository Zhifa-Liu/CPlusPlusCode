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
//���캯������������ʱ�Զ����� ��������������ͬ
//Ĭ�Ϲ��캯�����޲Σ���������ʱ���κγ�ʼ������

//����������ɾ��(�ͷ�)���� �޲Ρ��������ء��޷���ֵ������һ��  Clock *p=new Colck();delete p;

//�������캯�� ClassName��ClassName &object��;
//ִ��ʱ��
//��ʾ�ش���һ�������ж�����ͬ�Ķ��󣨵�ַ��ͬ��
//�����Ĳ����Ƕ���ʱ���追�������βζ���
//��������һ�������追��������ʱ�ռ�Ķ���