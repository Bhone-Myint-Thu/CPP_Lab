/*#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: division by zero" << endl;
            }
            break;
        default:
            cout << "Error: invalid operation" << endl;
            break;
    }

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: division by zero" << endl;
            }
            break;
        default:
            cout << "Error: invalid operation" << endl;
            break;
    }

    return 0;
}*/
//#include <iostream>
/*#include <iomanip>
class CurrencyConverter {
private:
    double amount;
    double exchangeRate;
public:
    CurrencyConverter(double amt) : amount(amt), exchangeRate(1.0) {}
    void setExchangeRate(double rate) { exchangeRate = rate; }
    double getAmount() const { return amount; }
    double getExchangeRate() const { return exchangeRate; }
    double convert() const { return amount * exchangeRate; }
};
int main() {
    double amount;
    int choice;
    std::cout << "Enter the amount of money in USD: ";
    std::cin >> amount;
    std::cout << "Choose the currency to convert to:" << std::endl;
    std::cout << "1. Euro\n2. Won\n3. Rupees" << std::endl;
    std::cin >> choice;
    CurrencyConverter converter(amount);
    switch (choice) {
        case 1: 
            converter.setExchangeRate(0.82); // 1 USD = 0.82 Euro
            std::cout << converter.getAmount() << " USD is equivalent to " << converter.convert() << " Euro." << std::endl;
            break;
        case 2:
            converter.setExchangeRate(1127.50); // 1 USD = 1,127.50 Won
            std::cout << converter.getAmount() << " USD is equivalent to " << converter.convert() << " Won." << std::endl;
            break;
        case 3:
            converter.setExchangeRate(73.81); // 1 USD = 73.81 Rupees
            std::cout << converter.getAmount() << " USD is equivalent to " << converter.convert() << " Rupees." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }
    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>

class RandomNumberGenerator {
private:
    int min_value;
    int max_value;

public:
    RandomNumberGenerator(int min, int max) {
        min_value = min;
        max_value = max;
        srand(time(NULL));
    }

    int generate_random_number() {
        return rand() % (max_value - min_value + 1) + min_value;
    }
};

int main() {
    RandomNumberGenerator rng(1, 100);
    int random_number = rng.generate_random_number();
    std::cout << "Random number: " << random_number << std::endl;
    return 0;
}*/
/*#include <iostream>
#include <cstdlib>
#include <ctime>

int generate_random_number() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

int main() {
    int random_number = generate_random_number();
    std::cout << "Random number: " << random_number << std::endl;
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
class CurrencyConverter {
private:
    double usd_to_inr;
    double usd_to_eur;
public:
    CurrencyConverter(double inr_rate, double eur_rate) {
        usd_to_inr = inr_rate;
        usd_to_eur = eur_rate;
    }
    double convertToINR(double amount) {
        return amount * usd_to_inr;
    }
    double convertToEUR(double amount) {
        return amount * usd_to_eur;
    }
};
int main() {
    double usd, inr_rate, eur_rate;
    cout << "Enter USD amount: ";
    cin >> usd;
    cout << "Enter current USD to INR exchange rate: ";
    cin >> inr_rate;
    cout << "Enter current USD to EUR exchange rate: ";
    cin >> eur_rate;
    CurrencyConverter converter(inr_rate, eur_rate);
    double inr = converter.convertToINR(usd);
    double eur = converter.convertToEUR(usd);
    cout << usd << " USD is equal to " << inr << " INR." << endl;
    cout << usd << " USD is equal to " << eur << " EUR." << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

class CurrencyConverter {
  private:
    double usd;

  public:
    CurrencyConverter(double usd) {
        this->usd = usd;
    }

    double convertToEur() {
        return usd * 0.82;
    }

    double convertToInr() {
        return usd * 74.16;
    }
};

int main() {
    double usd;
    cout << "Enter amount in USD: ";
    cin >> usd;

    CurrencyConverter converter(usd);

    double eur = converter.convertToEur();
    double inr = converter.convertToInr();

    cout << usd << " USD is equal to " << eur << " EUR" << endl;
    cout << usd << " USD is equal to " << inr << " INR" << endl;

    return 0;
}



