#include <iostream>

using namespace std;

int subtract(int firstNum, int secondNum) {
    int result = firstNum - secondNum;
    return result;
}

int add(int firstNum, int secondNum) {
    int result = firstNum + secondNum;
    return result;
}

int divide(int firstNum, int secondNum) {
    int result = firstNum / secondNum;
    return result;
}

int multiply(int firstNum, int secondNum) {
    int result = firstNum * secondNum;
    return result;
}

int main() {

    int firstNum = 0;
    int secondNum = 0;
    char symbol;

    cin >> firstNum >> secondNum >> symbol;
    int result = 0;

    switch (symbol) {
        case '-':
            result = subtract(firstNum, secondNum);
            break;
        case '+':
            result = add(firstNum, secondNum);
            break;
        case '*':
            result = multiply(firstNum, secondNum);
            break;
        case '/':
            result = divide(firstNum, secondNum);
            break;
    }
    cout << result << endl;

    return 0;
}
