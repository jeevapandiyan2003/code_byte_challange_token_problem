#include<iostream>
#include<string>
using namespace std;
string process(string a);
int main()
{
  string word;
  cin>>word;
  string wrr=process(word);
 
  string token="70jcesw821";
  for (int j=0;j<wrr.size();j++)
  {
    int rr=0;
    for (int k=0;k<token.size();k++)
    {
      if(wrr[j]==token[k])
      {
        cout<<"--"<<wrr[j];;
        rr=1;
      }
      
      if(wrr[j]==token[k])
      {
        cout<<"--";
      }
    }
    if(rr==0)
    {
      cout<<wrr[j];
    }
  }
  return 0;
}
string process(string a)
{
 string ex="";
 char b=a[0];
 int count=0;
 for (int i=0;i<=a.size();i++)
 {
   if(b==a[i])
   {
     count+=1;
   }
   else{
     ex+=to_string(count)+b;
     b=a[i];
     count=1;
   }
 }
 return ex;
}