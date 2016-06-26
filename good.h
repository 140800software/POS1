#pragma once
#include<string>
using namespace std;
class good {
private:
	string barcode;
	string name;
	string unit;
	float price;
	float discount;
	int count;
public:
	//good* next;//链表备用
	good(string bar, string nam, string un, float pri) {
		barcode = bar;
		name = nam;
		unit = un;
		price = pri;
		count = 0;
		discount = 1;
	}
	void changeDiscount(float dis) {  //修改打折参数
		discount = dis;
	}
	void increase() {
		count++;
	}
	string getBarcode();//一下为得到类中属性
	string getName();
	string getUnit();
	float getPrice();
	float getDiscount();
	int getCount();
	float gettotal();
	float getOriginal_Price();
	void output();
};
