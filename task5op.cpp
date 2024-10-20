#include<iostream>
using namespace std;
bool isPrime(int n);

main()
{
    int n;
    cout <<"Enter any number: ";
    cin >>n;
    cout <<isPrime(n);



}
bool isPrime(int n)
{
    bool fn;
    for(int i=2; i<n; i++)
    {
    if(n%i==0)
    {
        fn = false ;
        break; 
    }
    else
    {
        fn = true;
    }
    }
    return fn;


}