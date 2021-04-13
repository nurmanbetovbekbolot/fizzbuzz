#include "fizzbuzz/fizzbuzz.h"

#define CATCH_CONFIG_MAIN// This tells the catch header to generate a main

#include <catch2/catch.hpp>

TEST_CASE("Fizz Buzz mit direktem String-Vergleich", "[fizzbuzz]")
{
    REQUIRE(fizzbuzz(1) == "1");
    REQUIRE(fizzbuzz(2) == "2");
    REQUIRE(fizzbuzz(3) == "Fizz");
    REQUIRE(fizzbuzz(4) == "4");
    REQUIRE(fizzbuzz(5) == "Buzz");
    REQUIRE(fizzbuzz(6) == "Fizz");
    REQUIRE(fizzbuzz(7) == "7");
    REQUIRE(fizzbuzz(8) == "8");
    REQUIRE(fizzbuzz(9) == "Fizz");
    REQUIRE(fizzbuzz(10) == "Buzz");
    REQUIRE(fizzbuzz(11) == "11");
    REQUIRE(fizzbuzz(12) == "Fizz");
    REQUIRE(fizzbuzz(13) == "13");
    REQUIRE(fizzbuzz(14) == "14");
    REQUIRE(fizzbuzz(15) == "Fizz Buzz");
}

#include <map>

TEST_CASE("Fizz Buzz mit Testwerten (Ground Truth) in Dictionary", "[fizzbuzz]")
{
    std::map<int, std::string> werte{
            {1,  "1"},
            {2,  "2"},
            {3,  "Fizz"},
            {4,  "4"},
            {5,  "Buzz"},
            {6,  "Fizz"},
            {7,  "7"},
            {8,  "8"},
            {9,  "Fizz"},
            {10, "Buzz"},
            {11, "11"},
            {12, "Fizz"},
            {13, "13"},
            {14, "14"},
            {15, "Fizz Buzz"}
    };

    REQUIRE(fizzbuzz(1) == werte[1]);
    REQUIRE(fizzbuzz(2) == werte[2]);
    REQUIRE(fizzbuzz(3) == werte[3]);
    REQUIRE(fizzbuzz(4) == werte[4]);
    REQUIRE(fizzbuzz(5) == werte[5]);
    REQUIRE(fizzbuzz(6) == werte[6]);
    REQUIRE(fizzbuzz(7) == werte[7]);
    REQUIRE(fizzbuzz(8) == werte[8]);
    REQUIRE(fizzbuzz(9) == werte[9]);
    REQUIRE(fizzbuzz(10) == werte[10]);
    REQUIRE(fizzbuzz(11) == werte[11]);
    REQUIRE(fizzbuzz(12) == werte[12]);
    REQUIRE(fizzbuzz(13) == werte[13]);
    REQUIRE(fizzbuzz(14) == werte[14]);
    REQUIRE(fizzbuzz(15) == werte[15]);
}

TEST_CASE("Fizz Buzz mit Testwerten (Ground Truth) in Dictionary mit Schleife", "[fizzbuzz]")
{
    std::map<int, std::string> werte{
            {1,  "1"},
            {2,  "2"},
            {3,  "Fizz"},
            {4,  "4"},
            {5,  "Buzz"},
            {6,  "Fizz"},
            {7,  "7"},
            {8,  "8"},
            {9,  "Fizz"},
            {10, "Buzz"},
            {11, "11"},
            {12, "Fizz"},
            {13, "13"},
            {14, "14"},
            {15, "Fizz Buzz"}
    };

    for (const auto pair : werte) { REQUIRE(fizzbuzz(pair.first) == pair.second); }
}