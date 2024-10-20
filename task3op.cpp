#include<iostream>
using namespace std;
void amplify(int n);
main()
{
    int n;
    cout << "Enter the numbers to amlify: ";
    cin >> n;
    amplify(n);

}
void amplify(int n)
{
    for(int i =1; i<=n; i++)
    if(i%4==0)
    {
        cout << (i*10)  <<", ";
    }
    else
    {
        cout << i <<", ";
    }

}