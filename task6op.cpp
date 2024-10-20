#include<iostream>
using namespace std;
void primal(int n);
main()
{
    int n;
    cout <<"Enter any number: ";
    cin >>n;
    primal(n);

}
void primal(int n)
{
    int count=0;
    int i, j;
    bool isPrime;
    int product =1;
    for (i = 2;;i++) {
        isPrime = true;
        for (j = 2; j <= i /2; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            product =product*i;
            count = count+1;
            if(count==n){
                break;
            }

        }
    }
    cout<<product;
    
}