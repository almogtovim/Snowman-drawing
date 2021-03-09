/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 *
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
//using namespace string;
/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}


TEST_CASE("Good snowman code") {                            /* Good Num Test*/
            CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n (.,.) \n ( : ) \n ( : ) "));
            CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n (\" \") "));
            CHECK(nospaces(snowman(33232124)) == nospaces("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
            CHECK(nospaces(snowman(33232123)) == nospaces("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (___) "));
            CHECK(nospaces(snowman(43232121)) == nospaces("  ___  \n (_*_) \n\\(o_O) \n (] [)>\n ( : ) "));
}

TEST_CASE("Bad snowman code") {                       /* Bugged Num Test*/
            CHECK_THROWS(snowman(51114411));
            CHECK_THROWS(snowman(15114401));
            CHECK_THROWS(snowman(12514121));
            CHECK_THROWS(snowman(12154121));
            CHECK_THROWS(snowman(12415124));
            CHECK_THROWS(snowman(12411523));
            CHECK_THROWS(snowman(12411152));
            CHECK_THROWS(snowman(12411125));
}

/* more test cases here */

TEST_CASE("Short snowman code") {                      /* Short Num Test*/
            CHECK_THROWS(snowman(1));
            CHECK_THROWS(snowman(12));
            CHECK_THROWS(snowman(123));
            CHECK_THROWS(snowman(12341));
            CHECK_THROWS(snowman(123412));
            CHECK_THROWS(snowman(1234123));
}

TEST_CASE("Long snowman code") {                      /* Long Num Test*/
            CHECK_THROWS(snowman(123123123));
            CHECK_THROWS(snowman(1515151511));
            CHECK_THROWS(snowman(111111111));
}

TEST_CASE("Zero case snowman code") {                        /* Zero Case Test*/
            CHECK_THROWS(snowman(0));
}

TEST_CASE("Neg snowman code") {                      /* Negative Num Test*/
            CHECK_THROWS(snowman(-12312312));
            CHECK_THROWS(snowman(-1));
            CHECK_THROWS(snowman(-200000));
            CHECK_THROWS(snowman(-4447444));
            CHECK_THROWS(snowman(-11122433));

}

