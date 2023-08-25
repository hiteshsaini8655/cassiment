Q.1
#include <iostream>

int main() {
    int candies = 15;
    int friends = 4;

    int candiesPerFriend = candies / friends;

    std::cout << "Ishan has " << candies << " candies." << std::endl;
    std::cout << "He wants to distribute them equally among " << friends << " friends." << std::endl;
    std::cout << "Each friend will get " << candiesPerFriend << " candies." << std::endl;

    return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Q3
#include <iostream>

int main() {
    int heightFirstTree = 5; 
    int heightSecondTree = 7; 
    
    if (heightSecondTree > heightFirstTree) {
        std::cout << "The second tree is taller than the first tree." << std::endl;
    } else if (heightSecondTree == heightFirstTree) {
        std::cout << "Both trees are of the same height." << std::endl;
    } else {
        std::cout << "The first tree is taller than the second tree." << std::endl;
    }
    
    return 0;
}
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Q.4
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int factorial = 1;
        
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        
        std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
    }

    return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Q.2
#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    
    std::cout << "Enter coefficient c: ";
    std::cin >> c;
    
    double discriminant = b * b - 4 * a * c;
    

    
    
    return 0;
}
