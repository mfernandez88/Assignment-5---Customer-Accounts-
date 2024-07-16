//
//  main.cpp
//  customer account
//
//  Created by Martha Fernandez on 7/15/24.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const int MAX_CUSTOMERACCOUNT = 20;
struct Customer {
string name;
string address;
string city;
string state;
string zipCode;
string telephone;
double accountBalance;
string lastPaymentDate;
};
const int MAX_CUSTOMERS = 20;
Customer customerData[MAX_CUSTOMERS];
int customerCount = 0;
void enterAccountInformation() {
if (customerCount >= MAX_CUSTOMERS) {
cout << "Maximum number of customers reached." << endl;
return;
}
Customer& customer = customerData[customerCount];
cout << "Enter customer name: ";
cin.ignore();
getline(cin, customer.name);
cout << "Enter customer address: ";
getline(cin, customer.address);
cout << "Enter city: ";
getline(cin, customer.city);
cout << "Enter state: ";
getline(cin, customer.state);
cout << "Enter ZIP code: ";
getline(cin, customer.zipCode);
cout << "Enter telephone: ";
getline(cin, customer.telephone);
cout << "Enter account balance: ";
cin >> customer.accountBalance;
cout << "Enter date of last payment: ";
cin.ignore();
getline(cin, customer.lastPaymentDate);
cout << "You have entered information for customer number " << customerCount <<
endl;
customerCount++;
}
void changeAccountInformation() {
int customerNumber;
cout << "Enter customer number: ";
cin >> customerNumber;
if (customerNumber >= 0 && customerNumber < customerCount) {
Customer& customer = customerData[customerNumber];
cout << "Customer name: " << customer.name << endl;
cout << "Customer address: " << customer.address << endl;
cout << "City: " << customer.city << endl;
cout << "State: " << customer.state << endl;
cout << "ZIP code: " << customer.zipCode << endl;
cout << "Telephone: " << customer.telephone << endl;
cout << "Account balance: " << customer.accountBalance << endl;
cout << "Date of last payment: " << customer.lastPaymentDate << endl;
cout << "Enter new information for the customer:" << endl;
cout << "Customer name: ";
cin.ignore();
getline(cin, customer.name);
cout << "Customer address: ";
getline(cin, customer.address);
cout << "City: ";
getline(cin, customer.city);
cout << "State: ";
getline(cin, customer.state);
cout << "ZIP code: ";
getline(cin, customer.zipCode);
cout << "Telephone: ";
getline(cin, customer.telephone);
cout << "Account balance: ";
cin >> customer.accountBalance;
cout << "Date of last payment: ";
cin.ignore();
getline(cin, customer.lastPaymentDate);
cout << "Customer information updated." << endl;
} else {
cout << "Invalid customer number." << endl;
}
}
void displayAllAccountInformation() {
for (int i = 0; i < customerCount; i++) {
cout << "Customer number " << i << ":" << endl;
cout << "Customer name: " << customerData[i].name << endl;
cout << "Customer address: " << customerData[i].address << endl;
cout << "City: " << customerData[i].city << endl;
cout << "State: " << customerData[i].state << endl;
cout << "ZIP code: " << customerData[i].zipCode << endl;
cout << "Telephone: " << customerData[i].telephone << endl;
cout << "Account balance: " << customerData[i].accountBalance << endl;
cout << "Date of last payment: " << customerData[i].lastPaymentDate <<
endl;
if (i < customerCount - 1) {
cout << "Press enter to continue...";
cin.get();
}
}
}
int main() {
int choice;
while (true) {
cout << "Main Menu:" << endl;
cout << "1. Enter new account information" << endl;
cout << "2. Change account information" << endl;
cout << "3. Display all account information" << endl;
cout << "4. Exit the program" << endl;
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
enterAccountInformation();
break;
case 2:
changeAccountInformation();
break;
case 3:
displayAllAccountInformation();
break;
case 4:
return 0;
default:
cout << "Invalid choice. Please try again." << endl;
break;
}
}
return 0;
}
