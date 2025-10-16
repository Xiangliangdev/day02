// 类和对象.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//一.就是展示商品信息
/*1.需要什么对象
* 2.创建类（有哪些属性和行为）
* 3.调用对象完成功能
*/
//类：类是对具有相同属性和行为的一类事物的抽象。
//对象：是类的一个具体实例
/*
* class Goods{
* 访问修饰符：
* 成员变量
* 成员函数
* }
*/
class Goods {
	//共同属性：名称，价格，数量，品牌等等
	//共同行为：展示属性数据(函数)
public:
	string name;
	double price;
	int count;
	string brand;
public:
	void showInfo() {
		//打印
		
			cout << "名称：" << name << endl;
			cout << "价格：" << price << endl;
			cout << "数量：" << count<< endl;
			cout << "品牌：" << brand << endl;
			cout << endl;
		
	}
};
int main01()
{
	//怎么访问类中的属性和行为
	//1：使用类创建对象（类名 对象名）
	//2：用对象名.属性/函数
	//第二种方式创建对象
	//类名 *对象名=new 类名;

	/*Goods phone;
	phone.name[0] = "华为mate70";
	phone.price[0] = 7000;
	phone.count[0] = 100;
	phone.brand[0] = "华为";

	phone.name[1] = "小米17";
	phone.price[1] = 4999;
	phone.count[1] = 300;
	phone.brand[1] = "小米";

	phone.name[2] = "iphone 17";
	phone.price[2] = 7999;
	phone.count[2] = 150;
	phone.brand[2] = "苹果";*/

	//一次展示多个手机
	//Good goods[2]={phone,phone1};
	Goods phone;
	Goods phone1;
	Goods phone2;

	Goods *good = new Goods[3];
	
	phone.name= "华为mate70";
	phone.price= 7000;
	phone.count= 100;
	phone.brand= "华为";

	phone1.name = "小米17";
	phone1.price = 4999;
	phone1.count = 300;
	phone1.brand = "小米";

	phone2.name = "iphone 17";
	phone2.price = 7999;
	phone2.count = 150;
	phone2.brand = "苹果";

	good[0] = phone;
	good[1] = phone1;
	good[2] = phone2;

	for (int i = 0; i < 3; i++) {
		good[i].showInfo();
	}
	//第二种方式创建对象
		//类名 *对象名=new 类名;
	//区别：对象名.属性/函数，数据存在于栈中，不需要维护空间
	//类名 *对象名=new 类名数据存在堆里，需要手动释放空间
	Goods* phone3 = new Goods;
	phone3->name = "荣耀14";
	phone3->price = 3999;
	phone3->count = 200;
	phone3->brand = "荣耀";

	phone3->showInfo();

	delete phone3;
	phone3 = nullptr;





	return 0;
}

