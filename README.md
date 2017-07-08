# math
#Collatz-conjecture

Consider the following operation on an arbitrary positive integer:

If the number is even, divide it by two.
If the number is odd, triple it and add one.
In modular arithmetic notation, define the function f as follows:

{\displaystyle f(n)={\begin{cases}n/2&{\text{if }}n\equiv 0{\pmod {2}}\\3n+1&{\text{if }}n\equiv 1{\pmod {2}}.\end{cases}}} f(n)={\begin{cases}n/2&{\text{if }}n\equiv 0{\pmod {2}}\\3n+1&{\text{if }}n\equiv 1{\pmod {2}}.\end{cases}}
Now, form a sequence by performing this operation repeatedly, beginning with any positive integer, and taking the result at each step as the input at the next.

In notation:

{\displaystyle a_{i}={\begin{cases}n&{\text{for }}i=0\\f(a_{i-1})&{\text{for }}i>0\end{cases}}} a_{i}={\begin{cases}n&{\text{for }}i=0\\f(a_{i-1})&{\text{for }}i>0\end{cases}}
(that is: {\displaystyle a_{i}} a_{i} is the value of {\displaystyle f} f applied to {\displaystyle n} n recursively {\displaystyle i} i times; {\displaystyle a_{i}=f^{i}(n)} a_{i}=f^{i}(n)).

The Collatz conjecture is: This process will eventually reach the number 1, regardless of which positive integer is chosen initially.

That smallest i such that ai = 1 is called the total stopping time of n.[2] The conjecture asserts that every n has a well-defined total stopping time. If, for some n, such an i doesn't exist, we say that n has infinite total stopping time and the conjecture is false.

If the conjecture is false, it can only be because there is some starting number which gives rise to a sequence that does not contain 1. Such a sequence might enter a repeating cycle that excludes 1, or increase without bound. No such sequence has been found.

Examples[edit]
For instance, starting with n = 12, one gets the sequence 12, 6, 3, 10, 5, 16, 8, 4, 2, 1.

n = 19, for example, takes longer to reach 1: 19, 58, 29, 88, 44, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.

The sequence for n = 27, listed and graphed below, takes 111 steps (41 steps through odd numbers), climbing to 9232 before descending to 1.

27, 82, 41, 124, 62, 31, 94, 47, 142, 71, 214, 107, 322, 161, 484, 242, 121, 364, 182, 91, 274, 137, 412, 206, 103, 310, 155, 466, 233, 700, 350, 175, 526, 263, 790, 395, 1186, 593, 1780, 890, 445, 1336, 668, 334, 167, 502, 251, 754, 377, 1132, 566, 283, 850, 425, 1276, 638, 319, 958, 479, 1438, 719, 2158, 1079, 3238, 1619, 4858, 2429, 7288, 3644, 1822, 911, 2734, 1367, 4102, 2051, 6154, 3077, 9232, 4616, 2308, 1154, 577, 1732, 866, 433, 1300, 650, 325, 976, 488, 244, 122, 61, 184, 92, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1 (sequence A008884 in the OEIS)


#is-prime
A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself. A natural number greater than 1 that is not a prime number is called a composite number. For example, 5 is prime because 1 and 5 are its only positive integer factors, whereas 6 is composite because it has the divisors 2 and 3 in addition to 1 and 6. The fundamental theorem of arithmetic establishes the central role of primes in number theory: any integer greater than 1 is either a prime itself or can be expressed as a product of primes that is unique up to ordering. The uniqueness in this theorem requires excluding 1 as a prime because one can include arbitrarily many instances of 1 in any factorization, e.g., 3, 1 · 3, 1 · 1 · 3, etc. are all valid factorizations of 3.

The property of being prime is called primality. A simple but slow method of verifying the primality of a given number n is known as trial division. It consists of testing whether n is a multiple of any integer between 2 and {\displaystyle {\sqrt {n}}} {\sqrt {n}}. Algorithms much more efficient than trial division have been devised to test the primality of large numbers. These include the Miller–Rabin primality test, which is fast but has a small probability of error, and the AKS primality test, which always produces the correct answer in polynomial time but is too slow to be practical. Particularly fast methods are available for numbers of special forms, such as Mersenne numbers. As of January 2016, the largest known prime number has 22,338,618 decimal digits.

There are infinitely many primes, as demonstrated by Euclid around 300 BC. There is no known simple formula that separates prime numbers from composite numbers. However, the distribution of primes, that is to say, the statistical behaviour of primes in the large, can be modelled. The first result in that direction is the prime number theorem, proven at the end of the 19th century, which says that the probability that a given, randomly chosen number n is prime is inversely proportional to its number of digits, or to the logarithm of n.

Many questions regarding prime numbers remain open, such as Goldbach's conjecture (that every even integer greater than 2 can be expressed as the sum of two primes), and the twin prime conjecture (that there are infinitely many pairs of primes whose difference is 2). Such questions spurred the development of various branches of number theory, focusing on analytic or algebraic aspects of numbers. Primes are used in several routines in information technology, such as public-key cryptography, which makes use of properties such as the difficulty of factoring large numbers into their prime factors. Prime numbers give rise to various generalizations in other mathematical domains, mainly algebra, such as prime elements and prime ideals.
