#include <iostream>

// For the problem description refer to:
// https://codeforces.com/problemset/problem/1899/A
// Rename to main to compile and see that this is the only main fnc:

int problem2() {

    std::string cases;
    std::cin >> cases;
    int tests = stoi(cases);
    std::string games[tests];

    // Array to store the values
    for (int i = 0; i < tests; i++) {
        std::cin >> games[i];
    }

    for (int i = 0; i < tests; i++) {

        // Trivially if divisible by 3 return "Second" else "First"
        if (stoi(games[i])%3==0) { std::cout << "Second" << '\n'; }
        else { std::cout << "First" << '\n'; }

    }

};