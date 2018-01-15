#include<iostream>
using namespace std;

#define MAX 20

class shopping
{
	private:
		int itemcode[MAX];
		char itemname[MAX][30];
		int itemprice[MAX];
		int count;
	public:
		void insert_item();
		void delete_item();
		void display_items();
		void cart_value();
	shopping()
	{count=0;}
};
void shopping::insert_item()
{
	cout<<"enter item Code: ";
	cin>>itemcode[count];
	cout<<"enter item Name: ";
	cin>>itemcode[count];
	cout<<"enter Price Of Item: ";
	cin>>itemcode[count];
	cout<<"Data stored in Shopping cart: "<<endl;
	count++;
}
void shopping::delete_item()
{
	int icode,i;
	cout<<"Enter item code: ";
	cin>>icode;
	for(i=0;i<count;i++)
	{
		if (itemcode[i]==icode)
			itemprice[i]=0;
	}
	cout<<"Data deleted from the cart"<<endl;
}
void shopping::display_items()
{
	int i;
	cout<<"Item code\tItem Name\tItem Price\n";
	for(i=0;i<count;i++)
	{
		if (itemprice[i]!=0)
			cout<<itemcode[i]<<"\t\t"<<itemname[i]<<"\t"<<itemprice[i]<<endl;
	}
}
void shopping::cart_value()
{
	int sum=0,i;
	for(i=0;i<count;i++)
	{
		sum=sum+itemprice[i];
	}
	cout<<"Total value of cart= "<<sum<<endl;
}
int main()
{
	shopping mycart;
	int choice;
	do
	{
		cout<<"1. Insert Item"<<endl;
		cout<<"2. Delete Item"<<endl;
		cout<<"3. Display Item"<<endl;
		cout<<"4. Total value of cart"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				mycart.insert_item();
				break;
			case 2:
				mycart.delete_item();
				break;
			case 3:
				mycart.display_items();
				break;
			case 4:
				mycart.cart_value();
				break;
			case 5:
				return 0;
			default:
				cout<<"Incorrect choice."<<endl;
		}
	}
	while(1);
    return 0;
}
