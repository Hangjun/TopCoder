
Problem Statement
    
The least common multiple (denoted "lcm") of a non-empty sequence of positive integers is the smallest positive integer that is divisible by each of them. For example, lcm(2)=2, lcm(4,6)=12, and lcm(1,2,3,4,5)=60.
Alice had a positive integer N. Then she chose some positive integer M that was strictly greater than N. Afterwards, she computed two values: the value A = lcm(N+1, N+2, ..., M) and the value B = lcm(1, 2, ..., M). She was surprised when she saw that A = B.
You are given the int N. Find and return the smallest M Alice could have chosen. (Such an M will always exist.)
Definition
    
Class: MissingLCM
Method: getMin
Parameters: int
Returns: int
Method signature: int getMin(int N) (be sure your method is public)

Limits
    
Time limit (s):
2.000
Memory limit (MB):
256
Stack limit (MB):
256
Constraints
-
N will be between 1 and 1,000,000, inclusive.
Examples
0)

    
1
Returns: 2
Alice needs to choose an M > 1 such that lcm(2,...,M) = lcm(1,...,M). We can see M=2 is the minimum value that works, since lcm(1,2) = lcm(2) = 2.
1)

    
2
Returns: 4

2)

    
3
Returns: 6
We have lcm(4,5,6) = lcm(1,2,3,4,5,6) = 60.
3)

    
4
Returns: 8

4)

    
5
Returns: 10

5)

    
42
Returns: 82
Oh... that doesn't fit the pattern.
6)

    
999999
Returns: 1999966

This problem statement is the exclusive and proprietary property of TopCoder, Inc. Any unauthorized use or reproduction of this information without the prior written consent of TopCoder, Inc. is strictly prohibited. (c)2003, TopCoder, Inc. All rights reserved.


/* Solution */

