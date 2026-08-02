# Fair vs Biased Coin Simulation

## Aim

To implement a C program that simulates coin tossing and compares the probability of obtaining **Heads** for a **fair coin** and a **biased coin** through repeated experiments.

---

## Problem Statement

Using simulation in C, demonstrate that the probability of getting a **Head** when tossing a fair coin is approximately **0.5**. Extend the simulation to compare the outcomes of a **fair coin** and a **biased coin** (70% chance of Head).

---

## Approach

- Read the number of coin tosses from the user.
- Generate random outcomes using the `rand()` function.
- Simulate:
  - A **fair coin**, where Head and Tail are equally likely.
  - A **biased coin**, where Head occurs with a probability of 70%.
- Count the number of Heads obtained in each experiment.
- Calculate and display the probabilities of both Heads and Tails.

---

## Algorithm

1. Read the number of tosses.
2. Initialize the random number generator using `srand(time(NULL))`.
3. Simulate the fair coin:
   - Generate either Head or Tail with equal probability.
   - Count the number of Heads.
4. Simulate the biased coin:
   - Generate Head with a 70% probability and Tail with a 30% probability.
   - Count the number of Heads.
5. Compute the probabilities of Heads and Tails for both experiments.
6. Display the calculated probabilities.

---

## Concepts Used

- Random Number Generation (`rand()`)
- Probability Simulation
- Loops
- Conditional Statements
- Basic Statistics

---

## Sample Output

```
Probability of Head (Fair coin) = 0.4942
Probability of Tail (Fair coin) = 0.5058

Probability of Head (Biased coin) = 0.6964
Probability of Tail (Biased coin) = 0.3036
```

*The exact values may vary with each execution because the outcomes are generated randomly.*

---

## Time Complexity

**O(n)**

The program performs one pass for the fair coin and one pass for the biased coin, where **n** is the number of tosses.

---

## Space Complexity

**O(1)**

Only a fixed number of variables are used, irrespective of the number of tosses.

---

## Conclusion

The simulation shows that the probability of obtaining **Heads** with a fair coin approaches **0.5** as the number of tosses increases. In contrast, the biased coin consistently produces a higher probability of Heads (approximately **0.7**), illustrating how probability distributions differ based on the characteristics of the coin.