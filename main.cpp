#include "Money.h"

int main()
{
    Money yourAmount, myAmount(10, 9);

    std::cout << "Enter an amount of money: ";
    std::cin >> yourAmount;
    std::cout << "Your amount is " << yourAmount << std::endl;
    std::cout << "My amount is " << myAmount << std::endl;

    if (yourAmount == myAmount)
        std::cout << "We have the same amounts.\\n";
    else
        std::cout << "One of us is richer.\\n";

    Money ourAmount = yourAmount + myAmount;
    std::cout << yourAmount << " + " << myAmount
              << " equals " << ourAmount << std::endl;

    Money diffAmount = yourAmount - myAmount;
    std::cout << yourAmount << " - " << myAmount
              << " equals " << diffAmount << std::endl;

    return 0;
}
