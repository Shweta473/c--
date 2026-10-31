#include<iostream>
using namespace std;

class SavingAccount
{
private:
string accountHolderName;
int accountNumber;
double balance;
double intrestRate;

public:
SavingAcoount(string name,int accNumber,double initialBalance,double rate)
{
accountHolderName=name;
accountNumber=accNumber;
balance=initialBalance;
intrestRate=rate;
}

void deposit(double amount)
{
if(amount>0)
}
 balance+=amount;
 cout<<" Deposited:$ "<<amount<<endl;
 }
}
void withdraw(double amount)
{
if (amount>0 && amount<=balance)
}
 balance-=amount;
 cout<<" Withdrawn:$ "<<amount<<endl;
 }
else
{
cout<<" accountHolderName=name;
accountNumber=accNumber;
balance=initialBalance;
 }
}

void applyIntrest()
{
double intrest=balance*intrestRate/100;
balance+=intrest;
cout<<"Intrest Apllied:$ "<<intrest<<endl;
 }
void display()
{
 cout<<" \n[SavingAccount] ">>endl;
 cout<<" Account Holder: "<<accountHolderName<<endl;
 cout<<" Account Number: "<<accountNumber<<endl;
 cout<<" Balance:$ "<<balance<,endl;
 cout<<" Intrest Rate "<<" % "<<endl;
}
};

class CheckingAccount
{
private
string accountHolderName;
 int accountNumber;
 double balance;
 double transactionFee;

public:

CheckingAccount(string name,int accNumber,double initialBalance,double fee)
{
accountHolderName=name;
accountNumber=accNumber;
balance=initialBalance;
transactionFee=fee;
}

void deposite(double amount)
{
if(amount>0)
{
balance+=amount;
cout<<" Deposited:$ "<<amount<<endl;
}
}
void withdraw(double amount)
{
 double total=amount+transactionFee;
if(total<=balance)
{
balance-=total;
cout<<" Insufficeint balance for withdrawal+fee! "<<endl;
}
}
void display()
{
cout<<" \n[Checking Account] "<<endl;
cout<<" Account Holder "<<accountHolderName<<endl;
cout<<" Account Number: "<<accountNumber<<endl;
cout<<" Balance:$ "<<balance<,endl;
cout<<" Transaction Fee:$ "<<transactionFee<<endl;
}
};

int main()
SavingAccount savings("Alice",1001,5000.0,3.0);
CheckingAccount checking("Bob",1002,3000.0,20.0);

savings.display();
savings.deposite(1000);
savings.withdraw(2000);
savings.applyIntrest();
savings.display();

checking.display();
checking.deposite(1500);
checking.withdraw(1000);
checking.display();

return 0;

}

