
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "X vence", "[single-file]" ) {
    int xVence1[3][3]= {   { 1, 0, 0 },
                           { 2, 1, 0 },
                           { 2, 2, 1 }
    };
    int xVence2[3][3]= {   { 1, 1, 2 },
                           { 1, 0, 2 },
                           { 1, 2, 0 }
    };
    int xVence3[3][3]= {   { 2, 0, 0 },
                           { 2, 1, 2 },
                           { 1, 1, 1 }
    };

    REQUIRE( VerificaVelha(xVence1) == 1 );
    REQUIRE( VerificaVelha(xVence2) == 1 );
    REQUIRE( VerificaVelha(xVence3) == 1 );
}

