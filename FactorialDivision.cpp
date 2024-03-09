#include <iostream>
#include <iomanip>

using namespace std;

double factorialDivisionResult(int first, int second) {
    long firstFact = 1;
    long secondFact = 1;

    for (int i = 2; i <= first; ++i) {
        firstFact *= i;
    }

    for (int i = 2; i <= second; ++i) {
        secondFact *= i;
    }

    double result = static_cast<double>(firstFact) / secondFact;
    return result;
}

int main() {

    int firstNum = 0;
    int secondNum = 0;

    cin >> firstNum >> secondNum;
    double result = factorialDivisionResult(firstNum, secondNum);

    cout << fixed << setprecision(2);
    cout << result << endl;

    return 0;
}