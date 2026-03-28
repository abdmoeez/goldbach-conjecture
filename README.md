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

## Level 2 — Performance Optimizer

### What it does
Verifies the conjecture for every even number from 4 
to 1,000,000 using the Sieve of Eratosthenes.

### Output
```
Conjecture holds up to 1,000,000!
```

### How it works
- Builds a boolean array of 1,000,001 elements
- Uses the Sieve to pre-calculate all primes up front
- Checks every even number using instant array lookups
- If any even number has no prime pair, conjecture fails

### Why this is faster than Level 1
Level 1 calculates isPrime from scratch every single time.
Level 2 pre-builds a cheat sheet of all primes once, then 
just looks up answers instantly — reducing execution time 
from minutes to milliseconds.

### Skills demonstrated
- Sieve of Eratosthenes algorithm
- Space vs time complexity tradeoff
- Boolean array management in C++

---

## Level 3 — Goldbach Comet Visualizer

### What it does
Takes an even number as input, finds all prime pairs 
and saves them to a results.txt file.

### Example
```
Input: 28
Output in results.txt:
5 + 23 = 28
11 + 17 = 28
```

### How it works
- Takes an even number input from the user
- Checks all prime pairs using isPrime function
- Writes every pair to a results.txt file
- File can be opened in any text editor

### Skills demonstrated
- File I/O in C++ using ofstream
- Writing and saving data to external files
- Data generation and storage

---

## Level 4 — Multi-Threaded Tester

### What it does
Verifies the conjecture for every even number up to 
1,000,000 using two threads running simultaneously.

### Output
```
Conjecture holds up to 1,000,000!
```

### How it works
- Builds the Sieve of Eratosthenes first
- Splits the range into two halves
- Thread 1 checks 4 to 500,000
- Thread 2 checks 500,002 to 1,000,000
- Both threads run at the same time on different CPU cores
- Finishes in half the time compared to Level 2

### Skills demonstrated
- Multi-threading in C++ using std::thread
- Parallel computing and splitting workloads
- Thread synchronization using join()

---

## Coming Soon
- Level 5
