/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main file for running the different Euler problems.
 *
 *        Version:  1.0
 *        Created:  07/30/2015 09:58:10 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Andrew Epstein
 *
 * =====================================================================================
 */

#include "main.hpp"
#include "helper.hpp"

int main( int argc, char* argv[] ) {
	if( argc < 2 ) {
		cerr << "Usage: " << argv[0] << " <Problem #>" << endl;
		return 1;
	}

	auto x = atoi( argv[1] );

	auto begin = chrono::high_resolution_clock::now();

	switch( x ) {
		case 1:
			cout << solve1() << endl;
			break;

		case 2:
			cout << solve2() << endl;
			break;

		case 3:
			cout << solve3() << endl;
			break;

		case 4:
			cout << solve4() << endl;
			break;

		case 5:
			cout << solve5() << endl;
			break;

		case 6:
			cout << solve6() << endl;
			break;

		case 7:
			cout << solve7() << endl;
			break;

		case 8:
			cout << solve8() << endl;
			break;

		case 9:
			cout << solve9() << endl;
			break;

		case 10:
			cout << solve10() << endl;
			break;

		case 11:
			cout << solve11() << endl;
			break;

		case 12:
			cout << solve12() << endl;
			break;

		case 13:
			cout << solve13() << endl;
			break;

		case 14:
			cout << solve14() << endl;
			break;

		case 15:
			cout << solve15() << endl;
			break;

		case 16:
			cout << solve16() << endl;
			break;

		case 17:
			cout << solve17() << endl;
			break;

		case 18:
			cout << solve18() << endl;
			break;

		case 19:
			cout << solve19() << endl;
			break;

		case 20:
			cout << solve20() << endl;
			break;

		case 21:
			cout << solve21() << endl;
			break;

		case 22:
			cout << solve22() << endl;
			break;

		case 23:
			cout << solve23() << endl;
			break;

		case 24:
			cout << solve24() << endl;
			break;

		case 25:
			cout << solve25() << endl;
			break;

		case 26:
			cout << solve26() << endl;
			break;

		case 27:
			cout << solve27() << endl;
			break;

		case 28:
			cout << solve28() << endl;
			break;

		case 29:
			cout << solve29() << endl;
			break;

		case 30:
			cout << solve30() << endl;
			break;

		case 31:
			cout << solve31() << endl;
			break;

		case 32:
			cout << solve32() << endl;
			break;

		case 33:
			cout << solve33() << endl;
			break;

		case 34:
			cout << solve34() << endl;
			break;

		case 35:
			cout << solve35() << endl;
			break;

		case 36:
			cout << solve36() << endl;
			break;

		case 37:
			cout << solve37() << endl;
			break;

		case 38:
			cout << solve38() << endl;
			break;

		case 39:
			cout << solve39() << endl;
			break;

		case 40:
			cout << solve40() << endl;
			break;

		case 41:
			cout << solve41() << endl;
			break;

		case 42:
			cout << solve42() << endl;
			break;

		case 43:
			cout << solve43() << endl;
			break;

		case 44:
			cout << solve44() << endl;
			break;

		case 45:
			cout << solve45() << endl;
			break;

		case 46:
			cout << solve46() << endl;
			break;

		case 47:
			cout << solve47() << endl;
			break;

		case 48:
			cout << solve48() << endl;
			break;

		case 49:
			cout << solve49() << endl;
			break;

		case 50:
			cout << solve50() << endl;
			break;

		case 51:
			cout << solve51() << endl;
			break;

		case 52:
			cout << solve52() << endl;
			break;

		case 53:
			cout << solve53() << endl;
			break;

		case 54:
			cout << solve54() << endl;
			break;

		case 55:
			cout << solve55() << endl;
			break;

		case 56:
			cout << solve56() << endl;
			break;

		case 57:
			cout << solve57() << endl;
			break;

		case 58:
			cout << solve58() << endl;
			break;

		case 59:
			cout << solve59() << endl;
			break;

		case 60:
			cout << solve60() << endl;
			break;

		case 61:
			cout << solve61() << endl;
			break;

		case 62:
			cout << solve62() << endl;
			break;

		case 63:
			cout << solve63() << endl;
			break;

		case 64:
			cout << solve64() << endl;
			break;

		case 65:
			cout << solve65() << endl;
			break;

		case 66:
			cout << solve66() << endl;
			break;

		case 67:
			cout << solve67() << endl;
			break;

		case 68:
			cout << solve68() << endl;
			break;

		case 69:
			cout << solve69() << endl;
			break;

		case 70:
			cout << solve70() << endl;
			break;

		case 71:
			cout << solve71() << endl;
			break;

		case 72:
			cout << solve72() << endl;
			break;

		case 73:
			cout << solve73() << endl;
			break;

		case 74:
			cout << solve74() << endl;
			break;

		case 75:
			cout << solve75() << endl;
			break;

		case 76:
			cout << solve76() << endl;
			break;

		case 77:
			cout << solve77() << endl;
			break;

		case 78:
			cout << solve78() << endl;
			break;

		default:
			cout << "Oops, didn't solve that one yet!" << endl;
			break;
	}

	auto end = chrono::high_resolution_clock::now();
	stringstream ss;
	ss.imbue( locale( "" ) );
	ss << fixed << chrono::duration_cast<chrono::microseconds>( end - begin ).count() << "μs";
	cout << ss.str() << endl;

	return 0;
}

