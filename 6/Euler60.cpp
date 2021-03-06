/*
 * =====================================================================================
 *
 *       Filename:  Euler60.cpp
 *
 *    Description:  Solution to Project Euler, Problem 60
 *
 *        Version:  1.0
 *        Created:  9/3/2016 7:44:13 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *        Problem:  The primes 3, 7, 109, and 673, are quite remarkable. By taking any two primes and concatenating them in any order the result will always be prime.
 *                  For example, taking 7 and 109, both 7109 and 1097 are prime.
 *                  The sum of these four primes, 792, represents the lowest sum for a set of four primes with this property.
 *                  Find the lowest sum for a set of five primes for which any two primes singleCheck to produce another prime.
 *         Answer:  26033
 * =====================================================================================
 */

#include "../helper.hpp"

bool singleCheck( uint64_t a, uint64_t b ) {
	static vector<uint64_t> primes = sieve( 84000000 );

	uint64_t pow = 10;

	while( b >= pow ) {
		pow *= 10;
	}

	return binary_search( primes.begin(), primes.end(), a * pow + b );
}

bool check( vector<uint64_t> nums ) {
	for( int i = 0; i < nums.size(); ++i ) {
		for( int j = i + 1; j < nums.size(); ++j ) {
			if( !singleCheck( nums[i], nums[j] ) ) {
				return false;
			}

			if( !singleCheck( nums[j], nums[i] ) ) {
				return false;
			}
		}
	}

	return true;
}

int solve60() {
	vector<uint64_t> primes = sieve( 8390 );

	for( int a = 0; a < primes.size(); ++a ) {
		for( int b = a + 1; b < primes.size(); ++b ) {
			if( !check( { primes[a], primes[b] } ) ) {
				continue;
			}

			for( int c = b + 1; c < primes.size(); ++c ) {
				if( !check( { primes[a], primes[b], primes[c] } ) ) {
					continue;
				}

				for( int d = c + 1; d < primes.size(); ++d ) {
					if( !check( { primes[a], primes[b], primes[c], primes[d] } ) ) {
						continue;
					}

					for( int e = d + 1; e < primes.size(); ++e ) {
						vector<uint64_t> tmp = { primes[a], primes[b], primes[c], primes[d], primes[e] };

						if( check( tmp ) ) {
							return sum( tmp );
						}
					}
				}
			}
		}
	}

	return 0;
}

