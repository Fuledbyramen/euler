/*
 * =====================================================================================
 *
 *       Filename:  Euler32.cpp
 *
 *    Description:  Solution to Project Euler, Problem 32
 *
 *        Version:  1.0
 *        Created:  3/13/2016 1:54:19 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *        Problem:  We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once.
 *                  For example, the 5-digit number, 15234, is 1 through 5 pandigital.
 *                  The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.
 *                  Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.
 *         Answer:  45288
 * =====================================================================================
 */

#include "../helper.hpp"

int solve32() {
	set<int> products;

	for( int i = 0; i <= 2000; i++ ) {
		for( int j = i; j <= 2000; j++ ) {
			int product = i * j;
			vector<int> values = { i, j, product };

			if( isPandigital( values ) ) {
				products.insert( product );
			}
		}
	}

	return accumulate( products.begin(), products.end(), 0 );
}

