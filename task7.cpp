#include <iostream>
using namespace std;
void hospital(int numOfdays);

int main(){
    int numOfdays;  
    cout << "Enter number of days you visited hospital: ";
    cin >> numOfdays;
    hospital(numOfdays);
}
void hospital(int numOfdays)
{
    int treated = 0;
    int untreated=0;
    int docs=7;
    for (int x=1; x<= numOfdays; x++)
    {
        int patients;
        cout << "Enter the number of patients for day "<<x<<": ";
        cin >> patients;
        if (x%3 == 0&&untreated>treated)
        {
            docs++;
        }
        if (patients <= docs)
        {
            treated = treated+patients;
        }
        else
        {
            treated = treated+docs;
            untreated = untreated+(patients-docs);
        }
    }
    cout<<"Treated patients: "<<treated<<"."<< endl;
    cout<<"Untreated patients: "<<untreated<<"."<< endl;

}