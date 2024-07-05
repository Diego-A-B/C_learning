
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


// Function to roll a die and return a number between 1 and 6
int roll_die() {
    return (std::rand() % 6) + 1;
}

// Function to simulate rolling two dice and return their sum
int roll_two_dice() {
    int roll1 = roll_die();
    int roll2 = roll_die();
    return roll1 + roll2;
}

int main() {
    int trials;
    std::cout << "Enter the number of trials: ";
    std::cin >> trials;

    // Initialize random seed
    std::srand(std::clock());

    // Vector to count the frequency of each possible outcome (2 through 12)
    std::vector<int> outcomes(13, 0); // Initialize a vector of size 13 with all elements 0

    // Run the simulation
    for (int i = 0; i < trials; ++i) {
        int sum = roll_two_dice();
        outcomes[sum]++;
    }

    // Calculate and display the probability of each outcome
    //std::cout << std::fixed << std::setprecision(4);
    for (int sum = 2; sum <= 12; ++sum) {
        double probability = static_cast<double>(outcomes[sum]) / trials;
        std::cout << "Sum " << sum << ": " << probability *100 <<" %" << std::endl;
    }

    return 0;
}




