#include <iostream>
#include <string>

using namespace std;

string oneDigit(int num) {
    switch (num) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }
    return "";
}

string twoDigits(int num) {
    if (num < 10) {
        return oneDigit(num);
    }
    if (num > 9 && num < 20) {
        switch (num) {
            case 10: return "ten";
            case 11: return "eleven";
            case 12: return "twelve";
            case 13: return "thirteen";
            case 14: return "fourteen";
            case 15: return "fifteen";
            case 16: return "sixteen";
            case 17: return "seventeen";
            case 18: return "eighteen";
            case 19: return "nineteen";
        }
    }
    string result;
    switch (num / 10) {
        case 2: result = "twenty";
            break;
        case 3: result = "thirty";
            break;
        case 4: result = "forty";
            break;
        case 5: result = "fifty";
            break;
        case 6: result = "sixty";
            break;
        case 7: result = "seventy";
            break;
        case 8: result = "eighty";
            break;
        case 9: result = "ninety";
            break;
    }
    if (num % 10 > 0) {
        if (!result.empty()) {
            result += " ";
        }
        result += oneDigit(num % 10);
    }

    return result;
}

string threeDigits(int num) {
    if (num < 100) {
        return twoDigits(num);
    }
    string result;

    int hundreds = num / 100;
    int remainder = num % 100;

    if (hundreds > 0) {
        result += oneDigit(hundreds) + " hundred";
    }
    if (remainder > 0) {
        if (!result.empty()) {
            result += " ";
        }
        result += twoDigits(remainder);
    }
    return result;
}

string fourDigits(int num) {
    if (num < 1000) {
        return threeDigits(num);
    }

    std::string result;
    int thousands = num / 1000;
    int remainder = num % 1000;

    if (thousands > 0) {
        result += oneDigit(thousands) + " thousand";
    }

    if (remainder > 0) {
        if (!result.empty()) {
            result += " ";
        }
        result += threeDigits(remainder);
    }

    return result;
}

string printNameOfNumber(int num) {
    if (num < 100) {
        return twoDigits(num);
    } else if (num < 1000) {
        return threeDigits(num);
    } else if (num < 10000) {
        return fourDigits(num);
    }
    return "";
}

int main() {
    int num = 0;
    cin >> num;

    string result = printNameOfNumber(num);

    cout << result << endl;

    return 0;
}