#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "screen.h"

int main() {
    screenDestroy();
   
    screenInit(1);

    screenSetColor(LIGHTCYAN, 0);
    drawCenteredText("UnderC");

    screenGotoxy(25, 15);
    printf("Aperte qualquer tecla para começar!");

    screenSetColor(LIGHTGRAY, BLACK);

    getchar();

    screenDestroy();
    return 0;
}
