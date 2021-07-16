#include <iostream>
#include "GeneticAlgorithm.h"
using namespace std;

int main() {
    GA ga(20);
    // ga.test();
    auto winner = ga.evolution(100);
    cout << winner.g1 << ":" << winner.g2 << endl;
    cout << "Run successfully." << endl;
    return 0;
}