#include <iostream>
using namespace std;
class bankaccount
{
 private:
  string depositorname;
  int accountnumber;
  string typeofaccount;
  float balanceammount;
  public:
  void initivalues()
  {
  depositorname="Ankit Yadav";
  accountnumber=161210010;
  typeofaccount="saving account";
  balanceammount=100;
  }
  void todeposite()
  {
  float p;
  cout<<"how many ammount you want to deposite!!"<<endl;
  cin>>p;
  balanceammount=p+ balanceammount;
   cout<<"your left  total ammount is:";
  cout<<balanceammount;
  }
  void towithdrawal()
  {
  float q;
  cout<<"how many ammount you want to withdrawal!!"<<endl;
  cin>>q;
  balanceammount=balanceammount-q;
  cout<<"your left  total ammount is:";
  cout<<balanceammount;
  }
  void display()
  {
  cout<<"your total ammount is:";
  cout<<balanceammount<<endl;
  }


};
int main()
{
bankaccount p;
 int z;
 cin>>z;
 cout<<"1.deposite"<<endl;
 cout<<"2.for withdrawal"<<endl;
 cout<<"3.for display"<<endl;
 p.initivalues();
 switch(z)
 {
 case 1:
      p.todeposite();
      break;
 case 2:
      p.towithdrawal();
      break;
 case 3:
      p.display();
      break;

}

}
