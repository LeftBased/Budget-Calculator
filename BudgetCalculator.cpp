#include <iostream>
int main()
{
    double budget, p50, p30, p20;
    std::cout << "How much is your budget?\n";
    std::cin >> budget;
    std::cout << "This calculator uses 5:3:2 rule of spending by default.\n";
    p50 = budget * 0.5; p30 = budget * 0.3; p20 = budget * 0.2;
    std::cout << "\n[Budget Plan]\n" << "Your budget $" << budget;
    std::cout << "\nEssentials: $" << p50 << "\nWants: $" << p30 << "\nSavings: $" << p20;
    std::cout << "\n";
    system("pause");
}