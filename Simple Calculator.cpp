#include <iostream>

int main()
{
    int choice;
    double answer;
    double number1;
    double number2;
    char kontynuuj;
    std::cout << "Welcome in my Calculator\n";
    do {
        std::cout << "What operation do you want to use?\n";
        std::cout << "1. Adding\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Divide\n";

        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "You chose adding\n";
            std::cout << "State the first number: \n";
            std::cin >> number1;
            std::cout << "State the second number: \n";
            std::cin >> number2; 
            answer = number1 + number2;
            std::cout << "Your answer is: " << answer << std::endl;
            break;

        case 2:
            std::cout << "You chose subtraction\n";
            std::cout << "State the first number: \n";
            std::cin >> number1;
            std::cout << "State the second number: \n";
            std::cin >> number2;
            answer = number1 - number2;
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 3:
            std::cout << "You chose multiplication\n";
            std::cout << "State the first number: \n";
            std::cin >> number1;
            std::cout << "State the second number: \n";
            std::cin >> number2;
            answer = number1 * number2;
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 4:
            std::cout << "You chose divide\n";
            std::cout << "State the first number: \n";
            std::cin >> number1;
            std::cout << "State the second number: \n";
            std::cin >> number2;
            if (number2 == 0) {
                std::cout << "You can't divide by zero" << std::endl;
            }
            else {
                answer = number1 / number2;
                std::cout << "Your answer is: " << answer << std::endl;
            }
            break;
        default:
            std::cout << "You chose wrong option\n";
            break;
        }

        std::cout << "Do you want to continue? (t/n): ";
        std::cin >> kontynuuj;
    } while (kontynuuj == 't' || kontynuuj == 'T');
}


