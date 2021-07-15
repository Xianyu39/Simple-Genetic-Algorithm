#ifndef __CHROMOSOME_H__
#define __CHROMOSOME_H__

#include <iostream>

/**
 *@brief Create a Chromosome class makes it easy to extend its content to fit in other problem.
*/
class Chromosome {
private:
    // Mutation probability 
    static double mtp;
    // Recombination probablity
    static double rbp;

public:
    // Genes
    int g1, g2;

    /**
     *@param recombinationProbablity: The probability of recombination.
     *@param mutationProbability: Genes' mutation probablity when generating new generations. Default is 0.
    */
    static void setProbabilities(
        double mutationProbability = 0,
        double recombinationProbablity = 0
    ) {
        mtp = mutationProbability;
        rbp = recombinationProbablity;
    }

    Chromosome() :g1(0), g2(0){}
    
    /**
     *@param x1: gene 1.
     *@param x2: gene 2.
    */
    Chromosome(int x1, int x2) :g1(x1), g2(x2){}

    /**
     *@brief Return random gene value
    */
    static int randGene() { return rand() % 201 - 100; }

    /**
     *@brief decide whether mutate.
    */
    static bool whetherMutate() {
        auto var = rand() % 101;
        if (var > mtp * 100) { return false; }
        else { return true; }
    }

    /**
     *@brief decide whether recombine.
    */
    static bool whetherRecombine() {
        auto var = rand() % 101;
        if (var > rbp * 100) { return false; }
        else { return true; }
    }

    /**
     *@brief Modify the 2 genes randomly.
    */
    void mutate() {
        if (whetherMutate()) { g1 = randGene(); }
        if (whetherMutate()) { g2 = randGene(); }
    }

    /**
     *@brief Recombining 2 chromosomes randomly.
     *@param chrm1 chromosomes 1. 
     *@param chrm2 chromosomes 2.
    */
    static void recombine(Chromosome& chrm1, Chromosome& chrm2) {
        if (whetherRecombine()) {
            auto t = chrm1.g1;
            chrm1.g1 = chrm2.g2;
            chrm2.g2 = t;
        }
    }
};

#endif //!__CHROMOSOME_H__