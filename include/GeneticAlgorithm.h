#ifndef __GENETIC_ALGORITHM_H__
#define __GENETIC_ALGORITHM_H__

#include "Chromosome.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Compare
bool cmp(const Chromosome& c1, const Chromosome& c2);

/**
 *@brief Genetic Algorithm.
*/
class GA {
private:
    // Population
    size_t ppltn;
    // Generation
    vector<Chromosome> gnrtn;

public:
    // Generating first genertion.
    GA(size_t population) :ppltn(population), gnrtn() {
        Chromosome::setProbabilities(0.1, 0.2);
        for (size_t i = 0; i < ppltn; i++) {
            Chromosome c;
            c.g1 = Chromosome::randGene();
            c.g2 = Chromosome::randGene();

            gnrtn.push_back(c);
        }
    }

    /**
     *@brief Evaluating the chromosome's quantity.
     *@param chrms: Input chromosome.
    */
    static int grade(const Chromosome& chrms) {
        const double C = 1;// Using to adjust the range of return value.
        // return int(C / (chrms.g1 + chrms.g2 * chrms.g2) * 100);
        return int(-(chrms.g1 * chrms.g1 + chrms.g2 * chrms.g2) * C);
    }

    /**
     *@brief Generate new chromosome from 2 chromosomes based on genetics law.
    */
    Chromosome breed(const Chromosome& c1, const Chromosome& c2) {
        Chromosome children[4];
        children[0].g1 = c1.g1;
        children[0].g2 = c2.g1;
        children[1].g1 = c1.g1;
        children[1].g2 = c2.g1;
        children[2].g1 = c1.g2;
        children[2].g2 = c2.g1;
        children[3].g1 = c1.g2;
        children[3].g2 = c2.g2;

        // Mutate
        for (size_t i = 0; i < 4; i++) {
            children[i].mutate();
        }

        return children[rand() % 4];
    }

    /**
     *@brief using to test the application parts.
    */
    void test() {
        for (size_t i = 1; i <= 100; i++)
        {
            cout << "Generation " << i << ":" << endl;
            for (auto& i : gnrtn) {
                // cout << grade(i) << ' ';
                cout << i.g1 << ":" << i.g2 << " ";
            }
            cout << endl;
            nextGeneration();
        }
        cout << "Best: " << gnrtn.back().g1 << ":" << gnrtn.back().g2 << endl;

        // for (size_t i = 0; i < 50; i++)
        // {
        //     cout << Chromosome::randGene() << ' ';
        // }
        
    }

    /**
     *@brief Modify the generation vector to get new generation.
    */
    void nextGeneration() {
        sort(gnrtn.begin(), gnrtn.end(), cmp);
        // Recombination
        for (size_t i = ppltn / 2; i < ppltn; i++) {
            // Recombine 2 of the better half randomly.
            int c1 = rand() % (ppltn / 2) + ppltn / 2;
            int c2 = rand() % (ppltn / 2) + ppltn / 2;
            // Avoid to chromosome recombine with itself.
            while (c1 == c2) {
                c2 = rand() % (ppltn / 2) + ppltn / 2;
            }

            Chromosome::recombine(gnrtn[c1], gnrtn[c2]);
        }
        
        // Kill the last 1/2 of whole chromosomes
        vector<Chromosome> half;
        for (size_t i = ppltn / 2; i < gnrtn.size(); i++) {
            half.push_back(gnrtn[i]);
        }
        
        for (size_t i = 0; i < ppltn; i++) {
            // Choose 2 of the better half randomly.
            int c1 = rand() % (ppltn / 2);
            int c2 = rand() % (ppltn / 2);
            // Avoid to chromosome recombine with itself.
            while (c1 == c2) {
                c2 = rand() % (ppltn / 2);
            }

            gnrtn[i] = breed(half[c1], half[c2]);
        }
    }

    /**
     *@brief Iterate the natural choose process to get the best solution.
     *@param iterationTimes: As its name.
     *@return The winner of evolution.
    */
    Chromosome evolution(size_t iterationTimes) {
        for (size_t o = 0; o < iterationTimes; o++) {
            nextGeneration();
        }

        for (auto& item : gnrtn)
            if (grade(item) > grade(gnrtn.back()))
                gnrtn.back() = item;

        return gnrtn.back();
    }
};

#endif //!__GENETIC_ALGORITHM_H__