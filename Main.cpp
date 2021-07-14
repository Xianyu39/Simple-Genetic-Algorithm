#include <iostream>
#include "Chromosome.h"
using namespace std;

int main() {
    Chromosome c;
    Chromosome::setProbabilities(0.1, 0.2);
    cout << "Run successfully." << endl;
    return 0;
}