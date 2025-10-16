#include <iostream>
using namespace std;
//复制构造函数
//定义：函数名和类名相同，没有返回值；（满足构造函数的要求）
//参数：是当前类对象的引用，一般是常引用
//作用：根据一个对象产生一个新对象（数据也会复制）
//浅拷贝：默认的构造函数就是浅拷贝(复制指针类型时，只会复制指针地址）
//深拷贝：复制指针类型数据时，重新产生新的空间
class Car {
public:
	string name;
	double price;
	int* p;
public:
	Car() {

	}
	////拷贝构造，复制构造函数
	//Car(const Car& car) {
	//	/*this:调用该函数对象，this代表car2对象
	//	*/
	//	cout << "执行拷贝构造" << endl;
	//	this->name = car.name;
	//	this->price = car.price;
	//	this->p = car.p;//浅拷贝写法，改为深拷贝，见下面的函数
	//}
	//拷贝构造，复制构造函数
	Car(const Car& car) {
		/*this:调用该函数对象，this代表car2对象
		*/
		cout << "执行拷贝构造" << endl;
		this->name = car.name;
		this->price = car.price;
		this->p = new int (*car.p);//深拷贝写法，重新分配一个新空间，car和car2的指针相互独立
	}

	void showInfo() {
		cout << "名称：" << name << endl;
		cout << "价格：" << price << endl;
	}
};

int main() {
	Car car;
	car.name = "大奔";
	car.p = new int(100);

	Car car2(car);
	*car2.p = 50;
	cout << "汽车名字："<<car2.name << endl;
	cout << "指针数：" << *(car2.p) << endl;
	cout << "指针数：" << *(car.p) << endl;
}