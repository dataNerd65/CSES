## Missing Number Problem

In the `missingnumber.cpp` file, we solve the problem of finding the missing number in a sequence from 1 to `n`. The formula used to calculate the expected sum of the first `n` natural numbers is:

\[ \text{sum} = \frac{n \times (n + 1)}{2} \]

We then subtract the sum of the given numbers from this expected sum to find the missing number.