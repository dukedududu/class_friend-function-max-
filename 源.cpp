/*【对象指针作为函数的参数】建立一个对象数组，内放5个学生数据（学号（字符串类型）、成绩（整型）），
设计一个函数max，用指向对象的指针作函数参数，
在max函数中找出5个学生中成绩最高者，并输出其学号。*/

#include<iostream>
using namespace std;
class Student
{
private:
	string num;
	int sco;
public:
	Student(string n, int s) :num(n), sco(s) {}//构造函数
	friend void max(Student*);  //声明友元函数
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
	cout << "成绩最高者的学号:" << max_num << endl;
	cout << "成绩最高者的成绩：" << max_scor << endl;
}
int main()
{
	Student stu[5] = {Student("a",67),Student("b",90),Student("c",98) ,Student("d",56),Student("e",79)};
	Student* p;
	p =stu;
	max(p);

}