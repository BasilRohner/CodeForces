#include <iostream>

// For the problem description refer to:
// https://codeforces.com/problemset/problem/1907/A
// Rename to main to compile and see that this is the only main fnc:

int problem1() {

    std::string cases;
    std::cin >> cases;
    std::string field[stoi(cases)];

    // Array to store the values
    for (int i = 0; i < stoi(cases); i++) {
        std::cin >> field[i];
    }

    for (int i = 0; i < stoi(cases); i++) {

        // Along one row
        for (int j = 1; j <= 8; j++) {
            if (j != field[i].at(1)-'0') {
                std::cout << (char) (field[i].at(0)) << j << '\n';
            }
        }
        // Along one column
        for (int j = 0; j <= 7; j++) {
            if (j != field[i].at(0)-97) {
                std::cout << (char) (j+97) << field[i].at(1)-'0' << '\n';
            }
        }

    }
    return 0;
};