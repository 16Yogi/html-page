#include<iostream>
using namespace std;
class samsung{
	string name;
	int price;
	char model;
public:
	int detail(){
		cout<<"welcome to my new model of samsung"<<endl;
		name="samsung";
		price=20000;
		model='J';
		cout<<"name= "<<name<<endl<<price<<endl<<model<<endl;
		return 0;
	}
	public:
	int detail(string name){
		cout<<"welcome to my new model of samsung"<<endl;
		price=40000;
		model='j';
		cout<<"name= "<<name<<endl<<price<<endl<<model;
		return 0;
	}

};
int main(){
samsung samsungj2;
samsungj2.detail();
samsungj2.detail("samsungj3");
return 0;
}