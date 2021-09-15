
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

    REQUIRE( VerificaVelha(xVence1) == codigoDoX );
    REQUIRE( VerificaVelha(xVence2) == codigoDoX );
    REQUIRE( VerificaVelha(xVence3) == codigoDoX );
    REQUIRE( VerificaVelha(xVence4) == codigoDoX );
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

    REQUIRE( VerificaVelha(oVence1) == codigoDoO );
    REQUIRE( VerificaVelha(oVence2) == codigoDoO );
    REQUIRE( VerificaVelha(oVence3) == codigoDoO );
    REQUIRE( VerificaVelha(oVence4) == codigoDoO );
}

TEST_CASE( "Testa jogo impossível", "[single-file]" ) {
    int jogoImpossivel1[3][3]= {   { 1, 1, 1 },
                                   { 1, 1, 1 },
                                   { 1, 1, 1 }
    };
    int jogoImpossivel2[3][3]= {   { 1, 1, 2 },
                                   { 1, 2, 2 },
                                   { 2, 2, 2 }
    };
    int jogoImpossivel3[3][3]= {   { 2, 2, 2 },
                                   { 2, 2, 2 },
                                   { 2, 2, 2 }
    };
    int jogoImpossivel4[3][3]= {   { 0, 0, 0 },
                                   { 0, 2, 0 },
                                   { 0, 0, 0 }
    };

    REQUIRE( VerificaVelha(jogoImpossivel1) == codigoDoJogoImpossivel );
    REQUIRE( VerificaVelha(jogoImpossivel2) == codigoDoJogoImpossivel );
    REQUIRE( VerificaVelha(jogoImpossivel3) == codigoDoJogoImpossivel );
    REQUIRE( VerificaVelha(jogoImpossivel4) == codigoDoJogoImpossivel );
}

TEST_CASE( "Testa empate", "[single-file]" ) {
    int empate1[3][3]= {   { 1, 1, 2 },
                           { 2, 1, 1 },
                           { 1, 2, 2 }
    };
    int empate2[3][3]= {   { 2, 1, 2 },
                           { 1, 1, 2 },
                           { 1, 2, 1 }
    };
    int empate3[3][3]= {   { 1, 2, 1 },
                           { 2, 1, 1 },
                           { 2, 1, 2 }
    };

    REQUIRE( VerificaVelha(empate1) == codigoDoEmpate );
    REQUIRE( VerificaVelha(empate2) == codigoDoEmpate );
    REQUIRE( VerificaVelha(empate3) == codigoDoEmpate );
}

TEST_CASE( "Testa jogo indefinido", "[single-file]" ) {
    int jogoIndefinido1[3][3]= {   { 0, 0, 0 },
                                   { 0, 0, 0 },
                                   { 0, 0, 0 }
    };
    int jogoIndefinido2[3][3]= {   { 0, 0, 0 },
                                   { 0, 1, 0 },
                                   { 0, 0, 0 }
    };
    int jogoIndefinido3[3][3]= {   { 2, 1, 2 },
                                   { 1, 1, 2 },
                                   { 0, 2, 1 }
    };

    REQUIRE( VerificaVelha(jogoIndefinido1) == codigoDoJogoIndefinido );
    REQUIRE( VerificaVelha(jogoIndefinido2) == codigoDoJogoIndefinido );
    REQUIRE( VerificaVelha(jogoIndefinido3) == codigoDoJogoIndefinido );
}