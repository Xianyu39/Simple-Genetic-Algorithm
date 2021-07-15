#include "GeneticAlgorithm.h"

bool cmp(const Chromosome& c1, const Chromosome& c2) {
    return GA::grade(c1) < GA::grade(c2);
}