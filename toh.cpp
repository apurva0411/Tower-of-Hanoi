#include<iostream>
using namespace std;

int toh(int n,int s,int d,int h)//function
{
    if(n==0)
    {
        return 1;
    }
   toh(n - 1, s, h, d); //2 shells can go from st to ht using dt ->faith  smaller problem
   cout<<"["<<s<<"-"<<d<<"]"<<n<<endl;//exp<=>faith  print n st to dt
   toh(n - 1, h, d, s); //2 shells can go from ht to dt using st ->faith  smaller problem
}

int main(int argc,char** argv)
{
    int shells=3;
   int res= toh(3,1,2,3);
   cout<<res;

}
