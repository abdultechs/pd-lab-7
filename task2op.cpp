#include<iostream>
using namespace std;
void part1(int row);
void part2(int row);

main()
{
    int row;
    cout <<"Enter number of rows";
    cin>> row;
    row = row/2;
    part1(row);
    part2(row);
    


}
void part1(int row)
{
    int count=0;
    for(int i=1; i<=row; i++)
    {
        for(int j=row; j>i; j--)
        {
            cout<<" ";
        }
         count = count+1;
        for (int k=1; k<=count;k++ )
        {
        cout<<"*";
        }
        cout<<endl;
    }

}
void part2(int row)
{
    int count=row+1;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        count = count-1;
        for (int k=1; k<=count;k++ )
        {
        cout<<"*";
        }
        cout<<endl;
    }

}
