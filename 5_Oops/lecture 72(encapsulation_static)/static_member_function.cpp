#include <iostream>
using namespace std;

class Customer{
  string name;
  int acc, balance;
  static int total_customer;
  static int total_balance;

  public:
    Customer(string name,int acc,int balance){
      this->name=name;
      this->acc=acc;
      this->balance=balance;
      total_balance+=balance;
      total_customer++;
    }

    static void staticTotal(){
      cout<<"total customer: "<<total_customer<<endl;
      cout<<"total balance: "<<total_balance<<endl;
    }

    void deposit(int amount){
      if(amount<1)
      return;

      total_balance+=amount;
      balance+=amount;
      cout<<"deposited: "<<amount<<endl;
    }

    void withdraw(int amount){
      if(amount > balance || amount < 0)
      return;

      total_balance-=amount;
      balance-=amount;
      cout<<"withdraw: "<<amount<<endl;
    }

    void display(){
      cout<<name<<" "<<acc<<" "<<balance<<endl;
    }

    void total(){
      cout<<"total customer: "<<total_customer<<endl;
      cout<<"total balance: "<<total_balance<<endl;
    }
};

int Customer::total_customer=0;
int Customer::total_balance=0;

int main(){
  Customer A1("Aniket",123,501);
  A1.display();
  Customer A2("Rohit",169,1001);
  A2.deposit(5001);
  A2.display();
  Customer::staticTotal();
  A1.withdraw(500);
  Customer::staticTotal();
  A1.display();
}