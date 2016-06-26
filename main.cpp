#include<iostream>
using namespace std;
#include"good.h"

int main()
{
	good cole("ITEM000000", "可口可乐", "瓶", 3.00);
	good xuebi("TTEM000001", "雪碧", "瓶", 3.00);
	good eletric("ITEM000002", "电池", "个", 2.00);
	do {
		int op;
		cout << "1、普通商品出售(需求1）" << endl;
		cout << "2、打折商品出售（需求2）" << endl;//界面选择
		cin >> op;
		switch (op)
		{
		case 1:
		{
			system("cls");
			do {
				string barcode;
				cout << "barcode;";cin >> barcode;//输入条形码
				if (barcode == "1")//条形码输入1结束商品输入
					break;
				if (barcode == "ITEM000000") {  //判断商品是否为可口可乐
					cout << endl << "       name:" << cole.getName();
					cout << endl << "       unit:" << cole.getUnit();
					cout << endl << "price:" << cole.getPrice() << endl;//输出价格
					cole.increase();
				}

				else if (barcode == "ITEM000001") { //判断商品是否为雪碧
					cout << endl << "       name:" << xuebi.getName();
					cout << endl << "       unit:" << xuebi.getUnit();//输出单位
					cout << endl << "price:" << xuebi.getPrice() << endl;
					xuebi.increase();
				}

				else if (barcode == "ITEM000002") {
					cout << endl << "       name:" << eletric.getName();//根据条形码输出名字
					cout << endl << "       unit:" << eletric.getUnit();
					cout << endl << "price:" << eletric.getPrice() << endl;
					eletric.increase();//购买电池的数量加1
				}
			} while (1);
			cout << "***商店购物清单***" << endl;
			if (cole.getCount() > 0)
				cole.output();cout << endl;//输出可乐的购买信息
			if (xuebi.getCount() > 0)
				xuebi.output();cout << endl;
			if (eletric.getCount() > 0)
				eletric.output();cout << endl;
			cout << "----------------------" << endl;
			cout << "总计：" << xuebi.gettotal() + cole.gettotal() + eletric.gettotal() << endl;
			cout << "**********************" << endl;
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			do {
				string barcode;float dis;
				cout << "barcode;";cin >> barcode;
				if (barcode == "1")//条形码输入1结束商品输入
					break;
				if (barcode == "ITEM000000") {
					cout << "       name:" << cole.getName();
					cout << endl << "       unit:" << cole.getUnit();
					cout << endl << "       price:" << cole.getPrice();
					cout << endl << "discount:";cin >> dis;
					cout << endl;
					cole.changeDiscount(dis);//更改打折系数
					cole.increase();//购买可乐商品加1
				}

				else if (barcode == "ITEM000001") {
					cout << "       name:" << xuebi.getName();
					cout << endl << "       unit:" << xuebi.getUnit();
					cout << endl << "       price:" << xuebi.getPrice();
					cout << endl << "discount:";cin >> dis;
					cout << endl;
					xuebi.changeDiscount(dis);//更改雪碧的打折参数
					xuebi.increase();
				}

				else if (barcode == "ITEM000002") {
					cout << "       name:" << eletric.getName();
					cout << endl << "       unit:" << eletric.getUnit();
					cout << endl << "       price:" << eletric.getPrice();
					cout << endl << "discount:";cin >> dis;
					cout << endl;
					eletric.changeDiscount(dis);
					eletric.increase();
				}
			} while (1);
			cout << "***商店购物清单***" << endl;//输出购物清单信息
			if (cole.getCount() > 0)
				cole.output();cout << endl;
			if (xuebi.getCount() > 0)
				xuebi.output();cout << endl;
			if (eletric.getCount() > 0)
				eletric.output();cout << endl;
			cout << "----------------------" << endl;
			float total = xuebi.gettotal() + cole.gettotal() + eletric.gettotal();
			cout << "总计：" << total << endl;
			float original_price;
			original_price = xuebi.getOriginal_Price() + cole.getOriginal_Price() + eletric.getOriginal_Price();
			cout << "节省：" << original_price - total << endl;
			cout << "**********************" << endl;
			system("pause");
			break;
		}
		default:
			cout << "your enter is not right!" << endl;
			break;
		}
		system("cls");
	} while (1);
	system("pause");

	return 0;
}
