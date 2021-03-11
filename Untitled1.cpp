#include<iostream>
using namespace std;
void fib(int n)
{
    if(n==0 or n==1)
    {
        cout<< n;
    }
    int f1=fib(n-1);
    int f2=fib(n-2);
    cout<<f1+f2;
}
/*long long int fact(int n)
{

    long long int f;
    if(n==1)
    {
        return n;
    }
    f=n*fact(n-1);
    return f;
}*/
int main()
{
   cout<<fib(20)<<endl;

}
