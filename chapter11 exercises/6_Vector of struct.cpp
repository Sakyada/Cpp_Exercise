#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct WaterUsageType
 {
    int cusID;
    string date;
    int oldnum;
    int newnum;

    void inputData() {
        cout << "Enter customer ID: ";
        cin >> cusID;
        cout << "Enter date (MM/DD/YYYY): ";
        cin >> date;
        cout << "Enter old meter reading: ";
        cin >> oldnum;
        cout << "Enter new meter reading: ";
        cin >> newnum;
		cout <<endl;
    }

    int getUsage() const {
        return newnum - oldnum;
    }

    double getPayment() const
    {
        const int RATE1 = 550;
    	const int RATE2 = 770;
    	const int RATE3 = 940;
    	const int RATE4 = 1050;
        float total_amount = 0.0;
        int usage = getUsage();
        if (usage <= 14) {
            total_amount = usage * RATE1;
        }
        else if (usage <= 30) {
            total_amount = 14 * RATE1 + (usage - 14) * RATE2;
        }
        else if (usage <= 50) {
            total_amount = 14 * RATE1 + 16 * RATE2 + (usage - 30) * RATE3;
        }
        else {
            total_amount = 14 * RATE1 + 16 * RATE2 + 20 * RATE3 + (usage - 50) * RATE4;
        }

        return total_amount ;
    }

    void printResult() const 
	{
        int usage = getUsage();
        double payment = getPayment();

       cout << setw(20) << left << cusID 
			<< setw(23) << left  << date 
			<< setw(20) << left  << oldnum 
			<< setw(20) << left  << newnum 
			<< fixed << showpoint << setprecision(2) 
			<< setw(20) << left  << usage 
			<< setw(20) << left  << payment
			<<endl;
    }
};

int main() 
{
    vector<WaterUsageType> wut_vector;
	
    int num_structures;
    cout << "\t ***** WaterUsage *****\n"<<endl;
    cout << "Enter the number of structures to input: ";
    cin >> num_structures;
	cout <<endl; 
	
    for (int i = 0; i < num_structures; i++) 
	{
        cout << "Enter information for customer #" << i+1 << ":" << endl;
        WaterUsageType wut;
        wut.inputData();
        wut_vector.push_back(wut);
    }
			
			// colume Name
			cout << setfill('=') << setw(118) << "=" << setfill(' ') << endl;
			cout << setw(20) << left << "Customer ID " 
				<< setw(20) << left << "Date  " 
				<< setw(20) << left << "Old reading  "  
				<< setw(20) << left << "New reading "
				<< setw(20) << left << "Water usage (M3)"
				<< setw(20) << left << "Payment due (Riel)"
				<< "\n";
		    cout << setfill('=') << setw(118) << "=" << setfill(' ') << endl;	
		
	for (const auto& wut : wut_vector) 
	{
	    wut.printResult();
	}

return 0;
}
