/******************************************************************************
FARAH NORIFFAT - 2301931970
*******************************************************************************/

#include <iostream>

using namespace std;

class Pelanggan{
    private:
        int number, water_usage;
        string name, address;
        
    public:
        int getNumber(){
            return number;
        };
        
        void setNumber(int num){
            number = num;
        };
        
        string getName(){
            return name;
        };
        
        void setName(string nm){
            name = nm;
        };
        
        string getAddress(){
            return address;
        };
        
        void setAddress(string addrs){
            address = addrs;
        };
        
        int getWaterUsage(){
            return water_usage;
        };
        
        void setWaterUsage(int wu){
            water_usage = wu;
        };
        
};

class Bill{
    private:
        double fee1 = 2.00, fee2 = 1.75, fee3 = 1.50, totalFee;
        
    public:
        double getFee1(){
            return fee1;
        };
        
        void setFee1(double f1){
            fee1 = f1;
        };
        
        double getFee2(){
            return fee2;
        };
        
        void setFee2(double f2){
            fee2 = f2;
        };
        
        double getFee3(){
            return fee3;
        };
        
        void setFee3(double f3){
            fee3 = f3;
        };
        
        int getTotalFee(){
            return totalFee;
        };
        
        void setTotalFee(double tFee){
            totalFee = tFee;
        };
};

int main(){
    int number, water_usage;
    string name, address;
    
    Pelanggan p;
    Bill b;
    
    cout<<"Let's pay your water bill right away!" << endl;
    cout << "Please input your card number!" << endl;
    cin >> number;
    p.setNumber(number);
    
    cout << "Please input your fullname!" << endl;
    cin >> name;
    p.setName(name);
    
    cout << "Please input your address!" << endl;
    cin >> address;
    p.setAddress(address);
    
    cout << "Please input your water usage per meter cubic!" << endl;
    cin >> water_usage;
    p.setWaterUsage(water_usage);
    
    //getting the water bill total
    if(p.getWaterUsage() <= 60){
        b.setTotalFee( p.getWaterUsage() * b.getFee1());
    } else if(p.getWaterUsage() > 60){
        b.setTotalFee((60 * b.getFee2()) + ( (p.getWaterUsage() - 60) * b.getFee3() ));
    };
    
    cout << "Congratulations! We thank you for paying your water bill. See you in a month!" << endl;
    cout << "======================PRINT=============================" << endl;
    cout << "Number          : " << p.getNumber() << endl;
    cout << "Fullname        : " << p.getName() << endl;
    cout << "Address         : " << p.getAddress() << endl;
    cout << "Water usage     : " << p.getWaterUsage() << " per meter cubic"<< endl << endl << endl;
    cout << "Total Water Bill: " << b.getTotalFee() << endl;

    return 0;
}
