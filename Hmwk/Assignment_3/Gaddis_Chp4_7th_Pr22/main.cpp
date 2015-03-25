/*
* File: main.cpp
* Author: Kennedy Johnson
* Created on March 25, 2015, 8:50 AM
* Purpose: Cable Bill
*/
//System Libraries
#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!

int main(int argc, char** argv) {

//Declare Variables
ofstream out;//Output the results in a file
float vwdHrs;//Viewed Hours (hrs)
char package;//Package AaBbCc ($'s/hr)
const int SIZE=40;//Max size of name = 39 characters
char name[SIZE];
float bill;//Cable Bill in $'s
//Open the file
out.open("Cable.dat");
//Prompt the user for inputs
cout<<"How many hours did you view this month?"<<endl;
cin>>vwdHrs;
cout<<"What is your package A,B,C"<<endl;
cin>>package;
cout<<"What is the customers name?"<<endl;
cin.ignore();
cin.getline(name,SIZE);
//Calculate the paycheck
switch (package){
    case 'A':
    case 'a':{
        bill=9.95;
        if (vwdHrs>10)bill=2*(vwdHrs-10);
        break;
    }    
    case 'B':
    case 'b':{
        bill=14.95;
        if (vwdHrs>20)bill+=(vwdHrs-20);
        break;
    }
    
    case 'C':
    case 'c':{
        bill=19.95;
        break;
    }    
    default: cout <<"Wrong Package Choosen"<<endl;
}
//Output the results to the file
out<<fixed<<setprecision(2)<<showpoint;
out<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
out<<"Customer Name: "<<name<<endl;
out<<"Package: "<<package<<endl;
out<<"Hours Viewed:"<<vwdHrs<<endl;
out<<"Amount owed= $"<<bill<<endl;


//Close the file
out.close();
return 0;
}