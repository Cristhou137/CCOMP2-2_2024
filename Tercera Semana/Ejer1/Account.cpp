#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    account1.print();
    account2.print();

    cout << "\n\nEnter deposit amount for account: " << account1.getName();
    int depositAmount;
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account " << account1.getName()
        << " balance";
    account1.deposit(depositAmount);

    account1.print();

    return 0;
}