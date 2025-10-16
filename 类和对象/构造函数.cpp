#include <iostream>
using namespace std;
//构造函数
//定义：函数名和类名相同，且没有返回值，可以有参数
//执行时机：创建对象时自动执行
//作用：给对象属性初始化
//注意点：当类没有构造函数时，编译器会自动产生一个默认构造函数（无参构造函数）
//如果有自定义构造函数，编译器就不会产生构造函数

class Student {
public:
	//成员属性
	string name;
	int age;
	string gender;

public:
	//成员函数
	//构造函数
	Student() {//无参构造函数
		cout << "执行构造函数" << endl;
		
	}
	//Student(string name,int age,string gender) {//有参构造函数
	//	this->name = name;
	//	this->age = age;
	//	this->gender = gender;

	//}
	Student(string name, int age, string gender)
		:name(name), age(age), gender(gender) {

	}

	void showInfo() {
		cout << "名称：" << name << endl;
		cout << "年龄：" << age << endl;
		cout << "性别：" << gender << endl;
	}
};

int main02() {
	
	Student stu1;
	Student stu2(stu1);//构造函数



	Student stu("李四", 16, "男");
	stu.showInfo();
	

	return 0;
}