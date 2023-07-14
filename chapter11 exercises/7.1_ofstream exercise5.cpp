#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
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

    void printResult() 
	{
        int usage = getUsage(*this);
        double payment = getPayment(usage);
        
    /*  cout << "Customer ID: " << cusID << endl;
        cout << "Date: " << date << endl;
        cout << "Meter reading (old): " << oldnum << endl;
        cout << "Meter reading (new): " << newnum << endl;
        cout << "Water usage: " << usage << " M3" << endl;
        cout << fixed << showpoint <<setprecision(2);
        cout << "Payment due: " << payment << " Riel"<< endl;
	*/
        cout << setw(20) << left << cusID 
			<< setw(23) << left  << date 
			<< setw(20) << left  << oldnum 
			<< setw(20) << left  << newnum 
			<< fixed << showpoint << setprecision(2) 
			<< setw(20) << left  << usage 
			<< setw(20) << left  << payment;
    }
};

int main() 
{	
	
	int num_customers;
	
	cout << "\t ***** WaterUsage *****\n"<<endl;
    cout << "Enter the number of customers to enter: ";
    cin >> num_customers;
    cout << endl;

    WaterUsageType* wut_array = new WaterUsageType[num_customers];

    for (int i = 0; i < num_customers; i++) 
	{
        cout << "Enter information for customer #" << i+1 << ":" << endl;
        wut_array[i].inputData(wut_array[i]);
        cout << endl;
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


			ofstream outfile("waterOperation.txt");
			
			for (int i = 0; i < num_customers; i++)
			{
			    outfile << wut_array[i].cusID << "," << wut_array[i].date << "," << wut_array[i].oldnum << "," << wut_array[i].newnum << endl;
			}			
			outfile.close();


			vector<WaterUsageType> wut_vector;
			ifstream infile("waterOperation.txt");
			while (infile)
			{
			    WaterUsageType wut;
			    string line;
			    
			    if (!getline(infile, line)) 
			        break;
			        
			    stringstream ss(line);			
			    ss >> wut.cusID;
			    ss.ignore();
			    getline(ss, wut.date, ',');
			    ss >> wut.oldnum;
			    ss.ignore();
			    ss >> wut.newnum;

			    wut_vector.push_back(wut);
			}
			
			infile.close();



    for (int i = 0; i < num_customers; i++)
	{
        //cout << "Customer #" << i+1 << " information:" << endl;
        wut_array[i].printResult();
        cout << endl;
    }
			    


    return 0;
}