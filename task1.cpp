#include<iostream>
using namespace std;
void printstars(int n);
main()
{
    int n;
    cout <<"Enter any number: ";
    cin >>n;
    printstars(n);
}
void printstars(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}