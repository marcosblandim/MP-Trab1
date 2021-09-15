
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "Testa vitória do X", "[single-file]" ) {
    int xVence1[3][3] = {{1, 1, 1},
                         {2, 0, 0},
                         {2, 2, 0}
    };
    int xVence2[3][3] = {{1, 0, 2},
                         {1, 1, 2},
                         {0, 2, 1}
    };
    int xVence3[3][3] = {{1, 0, 2},
                         {1, 0, 2},
                         {1, 2, 1}
    };
    int xVence4[3][3] = {{1, 0, 2},
                         {1, 1, 1},
                         {2, 2, 0}
    };

    REQUIRE( VerificaVelha(xVence1) == 1 );
    REQUIRE( VerificaVelha(xVence2) == 1 );
    REQUIRE( VerificaVelha(xVence3) == 1 );
    REQUIRE( VerificaVelha(xVence4) == 1 );
}

TEST_CASE( "Testa vitória do O", "[single-file]" ) {
    int oVence1[3][3]= {   { 1, 1, 2 },
                           { 1, 0, 2 },
                           { 0, 0, 2 }
    };
    int oVence2[3][3]= {   { 0, 1, 0 },
                           { 1, 0, 1 },
                           { 2, 2, 2 }
    };
    int oVence3[3][3]= {   { 2, 1, 1 },
                           { 0, 2, 1 },
                           { 0, 1, 2 }
    };
    int oVence4[3][3]= {   { 1, 1, 0 },
                           { 2, 2, 2 },
                           { 0, 1, 1 }
    };

    REQUIRE( VerificaVelha(oVence1) == 2 );
    REQUIRE( VerificaVelha(oVence2) == 2 );
    REQUIRE( VerificaVelha(oVence3) == 2 );
    REQUIRE( VerificaVelha(oVence4) == 2 );
}
