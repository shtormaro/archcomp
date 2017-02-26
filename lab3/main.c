#include <fcntl.h>
#include <sys/stat.h>
#include "graph.h"
char bigchar_plus[64] = {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
};


char bigchar_0[64] = {
        0, 0, 1, 1, 1, 1, 0, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        1, 0, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 0, 0, 1,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 0, 0
};

char bigchar_1[64] = {
        0, 0, 0, 1, 1, 1, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 1, 1, 1, 0, 1, 1, 0,
        0, 1, 1, 0, 0, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0
};

char bigchar_2[64] = {
        0, 0, 0, 1, 1, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 0
};

char bigchar_3[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_4[64] = {
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0
};

char bigchar_5[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_6[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_7[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0
};

char bigchar_8[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_9[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_A[64] = {
        0, 0, 1, 1, 1, 1, 0, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0
};

char bigchar_B[64] = {
        0, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 0, 0, 0, 1, 0, 0,
        0, 1, 0, 0, 0, 1, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 1, 1, 1, 1, 1, 0
};

char bigchar_C[64] = {
        0, 0, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 1, 1, 1, 1, 0
};

char bigchar_D[64] = {
        0, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 0, 0, 0, 1, 0, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 1, 0, 0,
        0, 1, 1, 1, 1, 0, 0, 0
};

char bigchar_E[64] = {
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 0
};

char bigchar_F[64] = {
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0
};

int arr_to_big(uint32_t *big, char *arr)
{
    int i;
    int x, y;

    for (i = 0; i < 64; i++) {
        x = i % 8;
        y = i / 8;
        bc_setbigcharpos(big, (uint8_t) x, (uint8_t) y, (uint8_t) arr[i]);
    }
    return 0;
}

int main()
{
    mt_clscr();
    uint16_t x = -1, y = -1;
    if (mt_getscreensize(&y, &x)) return 21;
    mt_gotoXY((uint16_t) (x / 2), (uint16_t) (y / 2));

    if(ERROR == bc_box((uint16_t) (x / 2 - 1), (uint16_t) (y / 2 - 1), (uint16_t) (1 + 4), (uint16_t) (8))) {
        fprintf(stderr, ":c\n");
        return -1;
    }
    uint32_t big[34];
    memset(big, 0, 34);

    arr_to_big(big + A0, bigchar_0);
    arr_to_big(big + A1, bigchar_1);
    arr_to_big(big + A2, bigchar_2);
    arr_to_big(big + A3, bigchar_3);
    arr_to_big(big + A4, bigchar_4);
    arr_to_big(big + A5, bigchar_5);
    arr_to_big(big + A6, bigchar_6);
    arr_to_big(big + A7, bigchar_7);
    arr_to_big(big + A8, bigchar_8);
    arr_to_big(big + A9, bigchar_9);
    arr_to_big(big + AA, bigchar_A);
    arr_to_big(big + AB, bigchar_B);
    arr_to_big(big + AC, bigchar_C);
    arr_to_big(big + AD, bigchar_D);
    arr_to_big(big + AE, bigchar_E);
    arr_to_big(big + AF, bigchar_F);
    arr_to_big(big + APlus, bigchar_plus);


    uint8_t _x = 0, _y = 1;
//    if (ERROR == bc_printbigchar(big + A0, 1, 2, clr_red, clr_cyan)) return -3;
    for (int i = 0; i < 34; i +=2) {
        if (ERROR == bc_printbigchar(big + i, _x, _y, clr_red, clr_brown)) return -3;
        _x += 10;
        if (_x == 80) {
            _y += 9;
            _x = 0;
        }
    }

    int file = open("BIG_CHARS", O_CREAT | O_TRUNC | O_RDWR,
                    S_IWRITE | S_IREAD);
    if (file == -1) {
        perror("Created ");
        return -1;
    }
    int count = 17;
    if (ERROR == bc_bigcharwrite(file, big, count)) {
        fprintf(stderr, "write\n");
        return -1;
    }
    uint32_t ch[count * 2];

    lseek(file, 0, SEEK_SET);
    if (ERROR == bc_bigcharread(file, ch, count, &count)) {
        fprintf(stderr, "read\n");
        return -1;
    }

    for (int i = 0; i < 34; i +=2) {
        if (ERROR == bc_printbigchar(ch + i, _x, _y, clr_red, clr_green)) return -3;
        _x += 10;
        if (_x == 80) {
            _y += 9;
            _x = 0;
        }
    }
    close(file);
    return 0;
}
