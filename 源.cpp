/*������ָ����Ϊ�����Ĳ���������һ���������飬�ڷ�5��ѧ�����ݣ�ѧ�ţ��ַ������ͣ����ɼ������ͣ�����
���һ������max����ָ������ָ��������������
��max�������ҳ�5��ѧ���гɼ�����ߣ��������ѧ�š�*/

#include<iostream>
using namespace std;
class Student
{
private:
	string num;
	int sco;
public:
	Student(string n, int s) :num(n), sco(s) {}//���캯��
	friend void max(Student*);  //������Ԫ����
};

void max(Student* x)
{
	string  max_num ="abc";
	int max_scor = 0;
	for (int i = 0; i < 5; ++i)
		if ((x + i)->sco> max_scor)
		{
			max_scor = (x + i)->sco;
			max_num =(x + i)->num;
		}
	cout << "�ɼ�����ߵ�ѧ��:" << max_num << endl;
	cout << "�ɼ�����ߵĳɼ���" << max_scor << endl;
}
int main()
{
	Student stu[5] = {Student("a",67),Student("b",90),Student("c",98) ,Student("d",56),Student("e",79)};
	Student* p;
	p =stu;
	max(p);

}