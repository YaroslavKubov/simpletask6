#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float P, R;
    int T;

    std::cout << "Enter the amount : ";
    std::cin >> P;

    std::cout << "Enter the loan period in years : ";
    std::cin >> T;

    std::cout << "Enter the interest rate : ";
    std::cin >> R;

    float I = (P * T * R) / 100;

    std::cout << fixed << setprecision(2);
    std::cout << "\nSimple interest (float): " << I << endl;
    std::cout << "Simple interest (int): " << static_cast<int>(I) << endl;

    return 0;
}
