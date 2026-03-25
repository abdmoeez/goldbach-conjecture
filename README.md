# Goldbach Conjecture

> "Every even number greater than 2 can be expressed 
> as the sum of two prime numbers."
> — Christian Goldbach, 1742

This conjecture has never been formally proven despite 
being verified for enormously large numbers over 280 years.
This project explores it through code, level by level.

---

## Level 1 — Brute Force Solver

### What it does
Takes an even number as input and finds all prime pairs 
that sum to it.

### Example
```
Input: 28

Output:
5 + 23 = 28
11 + 17 = 28
```

### How it works
- Validates that the input is even and greater than 2
- Loops from 2 to n/2 to avoid duplicate pairs
- For each i, checks if both i and (n - i) are prime
- Uses trial division up to √n to check primality

### Skills demonstrated
- Functions and boolean return types in C++
- Loop logic and input validation
- Prime number checking algorithm

---

## Coming Soon
- Level 2
- Level 3
