#include<fstream>
#include<iostream>
using namespace std;

class data
{
  public:
    string name;
    int roll;
    void readdata();
};

void data::readdata()
{
  cout<<"Enter name :";
  cin>>name;
  cout<<"Enter roll no :";
  cin>>roll;
}

void readdatadet(int num)
{
  bool flag=false;
  data obj;
  ifstream fin;
  fin.open("ankit.txt");
  while(true)
  {
    fin>>obj.name>>obj.roll;
    if(fin.eof())
      {
        cout<<"File ended\n";
        break;
      }
    if(obj.roll==num)
    {
      flag=true;
      cout<<"data found\n";
      cout<<obj.name<<" "<<obj.roll<<endl;
      break;
    }
  }
  if(flag==false)
  {
    cout<<"Record not found\n";
  }
  fin.close();

}

void putdet()
{
    data obj;
    ofstream fout;
    fout.open("data.txt", ios::app);
    obj.readdata();
    fout<<obj.name<<" "<<obj.roll<<"\t";
    fout.close();

}

int main()
{
  cout<<"rollno:  161210010\n";
  cout<<"min DBMS"<<endl;
  int ch;
  do
  {
    cout<<"what do you want "<<endl;
    cout<<"1.store data "<<endl; ;
    cout<<"2.retrieve dat"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 1:
      {
        putdet();
        break;
      }
      case 2:
      {
        int needroll;
        cout<<"Roll number :";
        cin>>needroll;
        readdatadet(needroll);
      }
    }
}while(ch==1||ch==2);
return 0;
}


