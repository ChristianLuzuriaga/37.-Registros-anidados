#include <stdio.h>
#include <stdlib.h>

struct tipol {
    int enterol;
    char caracteri;
};

struct tipo2 {
    float reall;
    struct tipol variable;
};
{ 
    struct tipo2 variable2 = {5.5, {7, 'C'}};
    printf("%d", variable2.variable.enterol);

    
}
