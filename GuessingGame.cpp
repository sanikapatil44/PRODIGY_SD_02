#include <iostream>
#include <cstdlib> // For srand and rand
#include <ctime>   // For time
using namespace std;

int main() {
    int num;    // Randomly generated number
    int guess;  // User's guess
    int tries = 0; // Counter for the number of attempts (initialize to 0)

    srand(time(NULL)); // Seed for random number generation
    num = (rand() % 100) + 1; // Generate a random number between 1 and 100

    cout << " *************** NUMBER GUESSING GAME ***************\n";

    // Game loop
    do {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++; 

        if (guess > num) {
            cout << "Too High!\n";
        } else if (guess < num) {
            cout << "Too Low!\n";
        } else {
            cout << "CORRECT!! Number of tries: " << tries << '\n';
        }
    } while (guess != num);

    cout << "***************** END *****************\n";

    return 0;
}
