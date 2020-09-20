#ifndef LABIRINTO_LABIRINTO_H
#define LABIRINTO_LABIRINTO_H

using namespace std;

const int MAXLINHA = 20;
const int MAXCOLUNA = 22;
using TipoDado = char;

class Labirinto {
protected:
    TipoDado dados[MAXLINHA][MAXCOLUNA];
    char inicio[0][1];
public:
    Labirinto(){
        char labirinto[20][22] = {
                "XEXXXXXXXXXXXXXXXXXXX",
                "X     X     X     X X",
                "XX XX XXXXX X X X   X",
                "X   X       XXXXXXX X",
                "X X X XXXXXXX   X   X",
                "X X   X   X X X   X X",
                "X XXXXX X X   XXXXX X",
                "X X     X XXX  X    X",
                "X X X X X   XX XX XXX",
                "X X XXX X X     X   X",
                "X X X X X XXXXX XX XX",
                "X     X X   X X X   X",
                "X XXXXX XXX X XXX X X",
                "X X       X X   X X X",
                "X   XXX X X XXX X X X",
                "XXX X X X X X X X XXX",
                "X X   X X   X   X   X",
                "X XXX XXXXXXXXX XXX X",
                "X                 X X",
                "XXXXXXXXXXXXXXXXXXXSX"

        };
        for (int i=0; i<20;++i) {
            for (int j = 0; j<22; ++j) {
                cout << labirinto[i][j];
            }
            cout << endl;
        }
    };

     int push(){
        int i=0;
        int j=0;
        if (inicio[i][j] == 'E'){
            dados[i+1][j] = '*';
        }
    }

    TipoDado pop(){

    }
};


#endif //LABIRINTO_LABIRINTO_H
