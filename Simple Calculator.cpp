#include <iostream>

// Displays the welcome message
void printWelcome() {
    std::cout << "Welcome to my Calculator\n";
}

// Displays the menu of operations
void printMenu() {
    std::cout << "Which operation do you want to use?\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
}

// Displays a message for a wrong option
void printWrongOption() {
    std::cout << "You chose a wrong option\n";
}

// Displays the result
void printResult(double answer) {
    std::cout << "Your answer is: " << answer << std::endl;
}

// Displays division by zero error
void printDivisionByZero() {
    std::cout << "You can't divide by zero" << std::endl;
}

// Asks if the user wants to continue
void askContinue(char& continueCalc) {
    std::cout << "Do you want to continue? (y/n): ";
    std::cin >> continueCalc;
}

// Gets a number from the user with a prompt
void getNumber(const char* prompt, double& number) {
    std::cout << prompt;
    std::cin >> number;
}

int main()
{
    int choice;
    double answer;
    double number1;
    double number2;
    char continueCalc;
    printWelcome();
    do {
        printMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "You chose addition\n";
            getNumber("Enter the first number: \n", number1);
            getNumber("Enter the second number: \n", number2);
            answer = number1 + number2;
            printResult(answer);
            break;
        case 2:
            std::cout << "You chose subtraction\n";
            getNumber("Enter the first number: \n", number1);
            getNumber("Enter the second number: \n", number2);
            answer = number1 - number2;
            printResult(answer);
            break;
        case 3:
            std::cout << "You chose multiplication\n";
            getNumber("Enter the first number: \n", number1);
            getNumber("Enter the second number: \n", number2);
            answer = number1 * number2;
            printResult(answer);
            break;
        case 4:
            std::cout << "You chose division\n";
            getNumber("Enter the first number: \n", number1);
            getNumber("Enter the second number: \n", number2);
            if (number2 == 0) {
                printDivisionByZero();
            }
            else {
                answer = number1 / number2;
                printResult(answer);
            }
            break;
        default:
            printWrongOption();
            break;
        }

        askContinue(continueCalc);
    } while (continueCalc == 'y' || continueCalc == 'Y');
}


