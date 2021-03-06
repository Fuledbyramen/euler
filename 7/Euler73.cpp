/*
 * =====================================================================================
 *
 *       Filename:  Euler73.cpp
 *
 *    Description:  Solution to Project Euler, Problem 73
 *
 *        Version:  1.1
 *        Created:  9/25/2016 1:27:05 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *        Problem:  Consider the fraction, n/d, where n and d are positive integers. If n<d and HCF(n,d)=1, it is called a reduced proper fraction.
 *                  If we list the set of reduced proper fractions for d ≤ 8 in ascending order of size, we get:
 *
 *                  1/8, 1/7, 1/6, 1/5, 1/4, 2/7, 1/3, 3/8, 2/5, 3/7, 1/2, 4/7, 3/5, 5/8, 2/3, 5/7, 3/4, 4/5, 5/6, 6/7, 7/8
 *
 *                  It can be seen that there are 3 fractions between 1/3 and 1/2.
 *                  How many fractions lie between 1/3 and 1/2 in the sorted set of reduced proper fractions for d ≤ 12,000?
 *         Answer:  7295372
 *
 * =====================================================================================
 */

#include "../helper.hpp"

int solve73() {
	vector<int> n( 12001, 0 );

	for( int d = 1; d <= 12000; ++d ) {
		n[d] += ( ( d + 1 ) / 2 ) - ( ( d + 2 ) / 3 ) - 1;
		for( int i = d * 2; i <= 12000; i += d ) {
			int k = n[i];
			n[i] = k - n[d];
		}
	}

	return sum( n );
}

