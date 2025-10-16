#include <iostream>
using namespace std;
class Contact {//联系人信息
public:
    string name;//姓名
    string phone;//联系人电话号码
    string email;//电子邮件地址
public:
    Contact() {
        //cout << "Contact的默认构造函数" << endl;
    }
    Contact(string name, string phone, string email) {
       // cout << "Contact的全参构造函数" << endl;
        this->name = name;
        this->phone = phone;
        this->email = email;
    }
};
class AddressBook {
public:
    Contact* contact;//使用动态内存的数组存储联系人
    size_t capacity;//通讯录的最大容量 10
    size_t count=0;//当前存储的联系人数量 2
public:
    AddressBook() :capacity(10), count(0) {
        contact = new Contact[capacity];
        //cout << "AddressBook类的默认构造函数" << endl;
    }
    AddressBook(size_t capacity) {
        this->capacity = capacity;//初始化最大容量的构造函数
        contact = new Contact[capacity];   
    }
    //添加联系人
    void addContact(Contact contact) {
        if (this->capacity <=0) {
            cout << "当前容量为空，不能添加联系人" << endl;
        }
        else {
            this->contact[this->count] = contact;
            this->capacity--;
            this->count++;   
        }
    }
    //删除联系人
    void removeContact(const string &name) {
        if (this->count==0) {
            cout << "当前联系人数量为空，不能删除" << endl;
        }
        else {
            for (size_t i = 0; i < count; i++) {
                if (contact[i].name == name) {
                    for (size_t j = i; j < count-1; j++) {
                         contact[j] = contact[j+1];
                        }
                    }
                }
            this->capacity++;
            this->count--;
        }  
    }
    //打印联系人
    void printContacts() {
        for (size_t i = 0; i < count; i++) {
            cout << "姓名："<<this->contact[i].name<<" ";
            cout << "手机号："<<this->contact[i].phone<<" ";
            cout << "电子邮件："<<this->contact[i].email<<" ";
            cout << endl;
        }
        cout << endl;
    }
};
int main()
{
    size_t num;
    cout<<"请输入电话簿的容量：";
    cin >> num;
    
    AddressBook address(num);
    //AddressBook address;
    Contact people1;
    Contact people2;
    people1.name = "zhangsan";
    people1.phone = "151213781";
    people1.email = "12312@163.com";

    people2.name = "lisi";
    people2.phone = "213081289";
    people2.email = "21321@163.com";

    Contact* conts = new Contact[2];

    conts[0] = people1;
    conts[1] = people2;
    
    address.addContact(people1);
    address.addContact(people2);
    
    address.printContacts();

    string name;
    cout << "请输入要删除的联系人的名字:";
    cin >> name;
    address.removeContact(name);
    address.printContacts();



    return 0;
}

