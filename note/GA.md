# About Genetic Algorithmc(GA)

## 0. Introduction
As its name said, GA is a kind of **Bionic Algorithms**, which was inspirated by natural evolution. As we know, the essence of evolution is that eliminating weak individuals to optimize the gene pool. Through this way, each generation will be more superior than last generation. So we can iterate this process to generate the optimal individual.

What we need in this algorithm are as follows:

1. **Gene**: the factors of a solution.
2. **Chromosome**: A set of genes, represents a solution.
3. **Fitness Function**: To evaluate the quality of a solution.
4. **Gene Recombination**: Select some best chromosomes in last generation and recombine their genes to generate next generation.
5. **Mutation**: Modify some genes to create new possibility for next generation.

## 1. Specific Design & Implement
For this problem, it's not so frustrated to find an appropriate way to model the question.

> The problem description and details are in the file `1_课题2-8.1.docx`. I will use C++ language to implement the code.

- Gene: `int` x1, x2.
- Chromosome: `class Chromosome`, contains 2 genes(`int`).
- Fitness function: $G=\frac{C}{x_1^2+x_2^2}$ , $C$ is a constant to adjust $G$ value's range to make it more accurate.
- Recombination: Exchange one of the gene, no more methods.
- Mutation: random number generator, `rand() % 201 - 100`. Substitute a gene on chromosome randomly.

## `class Chromosome`
Here the Chromosome represents the **solution**. Besides, <font color=red>each chromosome also represents an individual in the generation</font>.

Class Chromosome has 2 static members `mtp` and `rbp`, which are used as **Mutation Probability** and **Recombination Probability**. Method `mutate()` and `recombine()` will decide to do someting or not base on these 2 probabilities.

At the beginning, you are ought to use static method `setProbabilities()` to give a set of initial values to `mtp` and `rbp`.

## `class GA`
Abbreviation of Genetic Algorithm.
My envisioned design are as follows:

1. population: Number of individuals(here is chromosome) in each generation.
2. grade(): Evaluate the quantities of individuals. Higher is better.
3. generation: A vector of chromosomes.
4. nextGeneration(): Generate next generation.
5. Evolution(): The GA itself.
### 