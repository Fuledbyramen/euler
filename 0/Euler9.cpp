/*
 * =====================================================================================
 *
 *       Filename:  Euler9.cpp
 *
 *    Description:  Solution to Project Euler, Problem 9
 *
 *        Version:  1.1
 *        Created:  07/30/2015 10:23:07 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *        Problem:  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which a² + b² = c².
 *                  There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
 *         Answer:  31875000
 * =====================================================================================
 */

#include "../helper.hpp"

int solve9() {
	for( int c = 0; c < 1000; c++ ) {
		for( int b = 0; b < c; b++ ) {
			int a = 1000 - b - c;

			if( pow( a, 2 ) + pow( b, 2 ) == pow( c, 2 ) ) {
				return a * b * c;
			}
		}
	}
}
