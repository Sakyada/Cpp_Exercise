#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct WaterUsageType 
{
    int cusID;
    string date;
    int oldnum;
    int newnum;

    void inputData(WaterUsageType &wut) 
	{
        cout << "Enter customer ID: ";
        cin >> wut.cusID;
        cout << "Enter date (MM/DD/YYYY): ";
        cin >> wut.date;
        cout << "Enter old meter reading: ";
        cin >> wut.oldnum;
        cout << "Enter new meter reading: ";
        cin >> wut.newnum;
    }

    int getUsage(WaterUsageType wut) 
	{
        return wut.newnum - wut.oldnum;
    }

    double getPayment(int usage) 
	{
        const int RATE1 = 550;
    	const int RATE2 = 770;
    	const int RATE3 = 940;
    	const int RATE4 = 1050;
        float total_amount = 0.0;
        
        if (usage <= 14)
        {
            total_amount = usage * RATE1;
        }
        else if (usage <= 30)
        {
            total_amount = 14 * RATE1 + (usage - 14) * RATE2;
        }
        else if (usage <= 50)
        {
            total_amount = 14 * RATE1 + 16 * RATE2 + (usage - 30) * RATE3;
        }
        else
        {
            total_amount = 14 * RATE1 + 16 * RATE2 + 20 * RATE3 + (usage - 50) * RATE4;
        }

        return total_amount ;
    }

    void printResult() 
	{
        int usage = getUsage(*this);
        double payment = getPayment(usage);
        
        cout << "Customer ID: " << cusID << endl;
        cout << "Date: " << date << endl;
        cout << "Meter reading (old): " << oldnum << endl;
        cout << "Meter reading (new): " << newnum << endl;
        cout << "Water usage: " << usage << " M3" << endl;
        cout << fixed << showpoint <<setprecision(2);
        cout << "Payment due: " << payment << " Riel"<< endl;
    }
};

int main() 
{	
	cout << "\t ***** WaterUsage *****\n"<<endl;
	
    WaterUsageType wut;
	
    wut.inputData(wut);
    
	cout <<"\n" <<setfill('-') << setw(30) << "-"<<"\n" << endl;
	
    wut.printResult();

    return 0;
}
