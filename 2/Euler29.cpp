/*
 * =====================================================================================
 *
 *       Filename:  Euler29.cpp
 *
 *    Description:  Solution to Project Euler, Problem 29
 *
 *        Version:  1.0
 *        Created:  12/19/2015 12:02:18 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *        Problem:  How many distinct terms are in the sequence generated by a^b for 2 ≤ a ≤ 100 and 2 ≤ b ≤ 100?
 *         Answer:  9183
 * =====================================================================================
 */

#include "../helper.hpp"

int solve29() {
	set<double> results;

	for( int a = 2; a <= 100; a++ ) {
		for( int b = 2; b <= 100; b++ ) {
			results.insert( pow( a, b ) );
		}
	}

	return results.size();
}

