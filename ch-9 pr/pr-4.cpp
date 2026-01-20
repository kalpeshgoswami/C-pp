#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int number, string name, double bal)
    {
        accountNumber = number;
        accountHolderName = name;
        balance = bal;
    }

    virtual ~BankAccount() {}

    virtual void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    virtual void displayAccountInfo()
    {
        cout << "Account No : " << accountNumber << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Balance    : " << balance << endl;
    }

    virtual void calculateInterest() = 0;
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal), interestRate(rate) {}

    void calculateInterest() override
    {
        double interest = balance * interestRate / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override
    {
        if (amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Withdraw Successful (Overdraft Used if needed)\n";
        }
        else
        {
            cout << "Overdraft Limit Exceeded!\n";
        }
    }

    void calculateInterest() override
    {
        cout << "Checking accounts do not earn interest.\n";
    }
};

class FixedDepositAccount : public BankAccount
{
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal), term(t) {}

    void calculateInterest() override
    {
        double rate = 6.5;
        double interest = balance * rate * term / (100 * 12);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

int main()
{
    vector<BankAccount *> accounts;
    int choice;

    do
    {
        cout << "\n--- Banking System Menu ---";
        cout << "\n1. Create Savings Account";
        cout << "\n2. Create Checking Account";
        cout << "\n3. Create Fixed Deposit Account";
        cout << "\n4. Deposit";
        cout << "\n5. Withdraw";
        cout << "\n6. Display Account Info";
        cout << "\n7. Calculate Interest";
        cout << "\n0. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            int accNo;
            string name;
            double bal;

            cout << "Enter Account No: ";
            cin >> accNo;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Initial Balance: ";
            cin >> bal;

            if (choice == 1)
            {
                double rate;
                cout << "Enter Interest Rate: ";
                cin >> rate;
                accounts.push_back(new SavingsAccount(accNo, name, bal, rate));
            }
            else if (choice == 2)
            {
                double limit;
                cout << "Enter Overdraft Limit: ";
                cin >> limit;
                accounts.push_back(new CheckingAccount(accNo, name, bal, limit));
            }
            else
            {
                int term;
                cout << "Enter Term (months): ";
                cin >> term;
                accounts.push_back(new FixedDepositAccount(accNo, name, bal, term));
            }

            cout << "Account Created Successfully!\n";
        }
        else if (choice >= 4 && choice <= 7)
        {
            int index;
            cout << "Enter Account Index: ";
            cin >> index;

            if (index < 0 || index >= static_cast<int>(accounts.size()))
            {
                cout << "Invalid Index!\n";
                continue;
            }

            if (choice == 4)
            {
                double amt;
                cout << "Enter Amount: ";
                cin >> amt;
                accounts[index]->deposit(amt);
            }
            else if (choice == 5)
            {
                double amt;
                cout << "Enter Amount: ";
                cin >> amt;
                accounts[index]->withdraw(amt);
            }
            else if (choice == 6)
            {
                accounts[index]->displayAccountInfo();
            }
            else if (choice == 7)
            {
                accounts[index]->calculateInterest();
            }
        }

    } while (choice != 0);

    for (auto acc : accounts)
        delete acc;

    return 0;
}
