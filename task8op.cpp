#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float countOfCargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> countOfCargo;
    float cargoPerDay = 0, amountForBus = 0;
    float amountForTruck = 0, amountForTrain = 0, totalAmountBus = 0;
    float totalAmountTruck = 0, totalAmountTrain = 0, sumOfCargo = 0, totalCargoByBus = 0, totalCargoByTruck = 0;
    float train_total_Cargo = 0;
    for (float cargoNumber = 1; cargoNumber <= countOfCargo; cargoNumber++)
    {
        cout << "Enter the tonnage for cargo " << cargoNumber << ": ";
        cin >> cargoPerDay;
        sumOfCargo = sumOfCargo + cargoPerDay;
        if (cargoPerDay > 11)
        {
            train_total_Cargo = train_total_Cargo + cargoPerDay;
            amountForTrain = cargoPerDay*120;
            totalAmountTrain = totalAmountTrain + amountForTrain;
        }
        if (cargoPerDay>3&&cargoPerDay<= 11)
        {
            totalCargoByTruck = totalCargoByTruck+cargoPerDay;
            amountForTruck = cargoPerDay*175;
            totalAmountTruck = totalAmountTruck+amountForTruck;
        }
        if (cargoPerDay<=3)
        {
            totalCargoByBus = totalCargoByBus+cargoPerDay;
            amountForBus = cargoPerDay * 200;
            totalAmountBus = totalAmountBus + amountForBus;
        }
        
        
    }
    float totalCargoByMiniBusPercent = (totalCargoByBus / sumOfCargo) * 100;
    float totalCargoByTruckPercent = (totalCargoByTruck / sumOfCargo) * 100;
    float train_total_CargoPercent = (train_total_Cargo / sumOfCargo) * 100;
    float totalAmount = totalAmountBus+totalAmountTruck+totalAmountTrain;
    float average = totalAmount/sumOfCargo;
    cout << fixed;
    cout << setprecision(2);
    cout <<average<<endl<<totalCargoByMiniBusPercent<<endl<<totalCargoByTruckPercent<<endl<<train_total_CargoPercent;
}
