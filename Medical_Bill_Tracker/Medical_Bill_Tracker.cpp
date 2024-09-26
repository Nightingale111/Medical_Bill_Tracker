// Medical_Bill_Tracker.cpp 
//

#include <iostream>

using namespace std;

//void newBill(string issuer, int cost, bool insurancePaid, bool calledIn, int urgencyLevel, string description);

class Bill {
public:
    string issuer;
    int cost;
    bool insurancePaid;
    bool calledIn;
    int urgencyLevel;
    string description;

    void printBill() {
        cout << "Issuer: " << issuer << "\n";
        cout << "Cost: $" << cost << "\n";
        cout << "Has Insurance Paid?: " << insurancePaid << "\n";
        cout << "Has the Issuer been called?: " << calledIn << "\n";
        cout << "Urgency Level: " << urgencyLevel << "\n";
    }
};

/*each bill is a new object, has properties including :
    - who it's for (string)
    - how much (int)
    - has insurance paid yet (bool)
    - have I called it yet (bool)
    - urgency level (int)
    - description of what it's for*/

int main()
{
    int userChoice;

    cout << "Please select one of the following options: \n";
    cout << "1. Add a new bill\n";
    cout << "2. Print existing list of bills";
    cin >> userChoice;

    switch (userChoice) {
    case 1:

        break;
    case 2:
        break;
    default:
        break;
    }

    
    Bill exampleBill;

    exampleBill.issuer = "Franciscan Alliance";
    exampleBill.cost = 77740;
    exampleBill.insurancePaid = false;

    exampleBill.printBill();


}

