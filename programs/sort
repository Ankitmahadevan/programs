#include<iostream>
using namespace std;
  void display(int arr[],int l)
    {
        cout<<"array !! after inserting a number in descending order"<<endl;
        for(int i=0; i<l; i++)
            cout<<arr[i]<<"\t";
    }
class er
{
public:
    virtual void resort(int arr[],int qq)
    {
        int i=0,j=qq-1,temp;
        while(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

};

class w:public er
{
public:
    void insertionsort(int arr[],int n)
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i-1;
            while (j >= 0 && arr[j] < key)
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }


    }
};
int main()

{
    cout<<"ANKIT YADAV - 161210010"<<endl;
    w obj1;
    int qq,arr[qq],p,q,i,r,d;
    cout<<"enter size of the array"<<endl;
    cin>>qq;
    d=qq-1;

    for(i=0; i<qq; i++)
    {
        cout<<" enter a number  you want to insert in array"<<endl;
        cin>>arr[i];
        obj1.insertionsort(arr,i+1);
        int s=sizeof(arr[0]);
            int rt=s+1-d;
           d--;
        display(arr,rt);
         cout<<endl;

    }

    cout<<"array !!! after ascending order"<<endl;
    obj1.resort(arr,qq);
    for(i=0; i<qq; i++)
        cout<<arr[i]<<"\t";
        return 0;

}
