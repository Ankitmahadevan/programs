#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
 fstream file;


   file.open("sample.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }

   cout<<"File created successfully."<<endl;

   file<<"heyankityadav \n beingankit \n";

   file.close();
 ifstream fin("sample.txt"); //opening text file
 int line=1,word=1,size; //will not count first word and last line so initial value is 1
 char ch;
 
 
 fin.seekg(0,ios::end); //bring file pointer position to end of file
 size=fin.tellg(); //count number of bytes till current postion for file pointer
 
 fin.seekg(0,ios::beg); //bring position of file pointer to begining of file
 
 while(fin)
 {
  fin.get(ch);
  if(ch==' '||ch=='n')
   word++;
   
  if(ch=='n')
   line++;
 } 
 
 cout<<"Size="<<size<<" "<<line<<endl;
 cout<<endl;
 fin.close(); //closing file
 
 return 0;
 
}
