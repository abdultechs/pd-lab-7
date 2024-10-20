#include<iostream>
using namespace std;
int triangle(int n);
main()
{
    int n;
    cout<<"Enter number of triangles: ";
    cin >> n;
    cout << triangle(n);


}
int triangle(int n)
{
    int result=0;
    for(int i=1; i<=n; i++)
    {
        result = result+i;
    }
    return result ;
}