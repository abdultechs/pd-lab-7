#include<iostream>
using namespace std;
void printstars(int n);

main()
{
    int n;
    printstars(n);
}
void printstars(int n)
{
    for(int i=15; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
