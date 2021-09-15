const int codigoDoX = 1;
const int codigoDoO = 2;
const int codigoDoEmpate = 0;
const int codigoDoJogoIndefinido = -1;
const int codigoDoJogoImpossivel = -2;

int VerificaVelha( int velha[3][3] );
int verificaVitoria(int velha[3][3]);
bool verificaJogoEhPossivel(int velha[3][3]);
int verificaEmpateOuIndefinido(int velha[3][3]);
