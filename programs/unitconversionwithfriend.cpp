#include<iostream>
using namespace std;
class converter
{
    double cm,miles;
public:
    converter(double a=2.5,double b=1.5):cm(a),miles(b){};
    friend void convert(converter obj);

};
void convert(converter obj)
{
    double inch,km;
    inch=obj.cm*0.393701;
    km=obj.miles*1.60934;
    cout<<obj.cm <<"\t in inch will be:"<<inch<<endl;
    cout<<obj.miles <<"\t in km will be:"<<km<<endl;

}
int main()
{

    converter obj(4,5);
    convert(obj);

}
