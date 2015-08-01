/*
 * =====================================================================================
 *
 *       Filename:  Euler10.cpp
 *
 *    Description:  Solution to Project Euler, Problem 10
 *
 *        Version:  1.0
 *        Created:  07/30/2015 11:25:09 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *   Organization:  SevOne
 *        Problem:  Find the sum of all the primes below two million.
 *         Answer:  142913828922
 * =====================================================================================
 */

#include "../helper.hpp"

int main() {
	cout << sum( sieve( 2e6 ) ) << endl;
	return 0;
}