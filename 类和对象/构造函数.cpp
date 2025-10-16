#include <iostream>
using namespace std;
//构造函数
//定义：函数名和类名相同，且没有返回值，可以有参数
//执行时机：创建对象时自动执行

class Student {
public:
	//成员属性
	string name;
	int age;
	string gender;

public:
	//成员函数
	//构造函数
	Student() {
		cout << "执行构造函数" << endl;
	}

	void showInfo() {
		cout << "名称：" << name << endl;
		cout << "年龄：" << age << endl;
		cout << "性别：" << gender << endl;
	}
};

int main() {
	Student stu;
	

	return 0;
}