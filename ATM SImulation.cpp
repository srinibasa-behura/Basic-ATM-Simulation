#include <iostream>
using namespace std;

int main() {
    int c, balance, deposit, withdrawal, realPin, inputPin;

    realPin = 0000;
    balance = 500;

    cout << "==========ATM==========" << endl;
    cout << "Insert Your Card" << endl;

    for (int i = 1; i <= 4; i++) {
        cout << "Enter Your Pin : ";
        cin >> inputPin;

        if (realPin != inputPin) {
            cout << "Incorrect Pin, " << 4 - i << " Attempt Left" << endl;

            if (i == 4) {
                cout << "Limit Reached, Try Again Later";
                break;
            }
        } else if (realPin == inputPin) {
            cout << "Correct Pin" << endl;

            do {
                cout << "===============" << endl;
                cout << "1.Check Balance\n2.Deposit Cash\n3.Withdrawal Cash\n4.Exit\n";
                cout << "Enter Your Choice : ";
                cin >> c;

                switch (c) {
                    case 1:
                        cout << "Your Balance : " << balance << endl;
                        break;

                    case 2:
                        cout << "Enter Amount to Deposit : ";
                        cin >> deposit;

                        if (deposit > 0 && deposit % 100 == 0) {
                            cout << "Deposit Successful" << endl;
                            balance += deposit;
                        } else {
                            cout << "Deposit Declined" << endl;
                        }
                        break;

                    case 3:
                        cout << "Enter Withdrawal Amount : ";
                        cin >> withdrawal;

                        if (withdrawal <= balance && withdrawal % 100 == 0 && withdrawal > 0) {
                            cout << "Withdrawal Successful" << endl;
                            cout << "Collect Your Cash" << endl;
                            balance -= withdrawal;
                        } else {
                            cout << "Withdrawal Declined" << endl;
                        }
                        break;

                    case 4:
                        break;

                    default:
                        cout << "Invalid Choice" << endl;
                        break;
                }
            } while (c != 4);

            cout << "Thank you, Collect Your Card";
            break;
        }
    }
}