#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int length;
int bend_no;
int len;
char key;
int life;
int x, y;
int gameover;
int score;
int bend[500][2];
int a, b;

void record()
{
    FILE *fptr;
    fptr = fopen("score.txt", "w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fprintf(fptr, "%d", score);
    fclose(fptr);
}

int lengthfunction()
{
    int i, j, length = 0;
    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < 30; j++)
        {
            if (i == 0 && a == i && b == j)
            {
                printf("0");
                length++;
            }
            else if (i == x && a == i && b == j)
            {
                printf("X");
                length++;
            }
            else
            {
                int isprint = 0;
                for (int k = 0; k < bend_no; k++)
                {
                    if (i == bend[k][0] && j == bend[k][1])
                    {
                        printf("O");
                        isprint = 1;
                    }
                }
                if (isprint == 0)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return length;
}

void right()
{
    for (int i = 0; i < 10000000; i++)
        ;
    int iscollision = 0;
    for (int i = 0; i < bend_no; i++)
    {
        if (bend[i][0] == x && bend[i][1] == y + 1)
        {
            iscollision = 1;
        }
    }
    if (iscollision == 0)
    {
        if (y == 29)
            y = 0;
        else
            y++;
    }
    else
    {
        gameover = 1;
    }
}

void left()
{
    for (int i = 0; i < 10000000; i++)
        ;
    int iscollision = 0;
    for (int i = 0; i < bend_no; i++)
    {
        if (bend[i][0] == x && bend[i][1] == y - 1)
        {
            iscollision = 1;
        }
    }
    if (iscollision == 0)
    {
        if (y == 0)
            y = 29;
        else
            y--;
    }
    else
    {
        gameover = 1;
    }
}

void up()
{
    for (int i = 0; i < 10000000; i++)
        ;
    int iscollision = 0;
    for (int i = 0; i < bend_no; i++)
    {
        if (bend[i][0] == x - 1 && bend[i][1] == y)
        {
            iscollision = 1;
        }
    }
    if (iscollision == 0)
    {
        if (x == 0)
            x = 29;
        else
            x--;
    }
    else
    {
        gameover = 1;
    }
}

void down()
{
    for (int i = 0; i < 10000000; i++)
        ;
    int iscollision = 0;
    for (int i = 0; i < bend_no; i++)
    {
        if (bend[i][0] == x + 1 && bend[i][1] == y)
        {
            iscollision = 1;
        }
    }
    if (iscollision == 0)
    {
        if (x == 29)
            x = 0;
        else
            x++;
    }
    else
    {
        gameover = 1;
    }
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            key = 'a';
            break;
        case 's':
            key = 's';
            break;
        case 'd':
            key = 'd';
            break;
        case 'w':
            key = 'w';
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}

void algorithm()
{
    int prevX = bend[0][0];
    int prevY = bend[0][1];
    int prev2X, prev2Y;
    bend[0][0] = x;
    bend[0][1] = y;
    for (int i = 1; i < bend_no; i++)
    {
        prev2X = bend[i][0];
        prev2Y = bend[i][1];
        bend[i][0] = prevX;
        bend[i][1] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (key)
    {
    case 'a':
        left();
        break;
    case 's':
        down();
        break;
    case 'd':
        right();
        break;
    case 'w':
        up();
        break;
    default:
        break;
    }
    if (x == 0 || x == 29 || y == 0 || y == 29)
    {
        gameover = 1;
    }
    for (int i = 0; i < bend_no; i++)
    {
        if (bend[i][0] == x && bend[i][1] == y)
        {
            gameover = 1;
        }
    }
    if (x == a && y == b)
    {
        score++;
        a = rand() % 29;
        b = rand() % 29;
        length++;
    }
}

int main()
{
    char key;
    FILE *fptr;
    fptr = fopen("score.txt", "r");
    if (fptr == NULL)
    {
        score = 0;
    }
    else
    {
        fscanf(fptr, "%d", &score);
        fclose(fptr);
    }
    length = 0;
    bend_no = 0;
    len = 0;
    gameover = 0;
    x = 0;
    y = 0;
    a = 4;
    b = 4;
    life = 3;
    score = 0;
    key = 'a';
    while (gameover == 0)
    {
        system("cls");
        printf("Score:%d", score);
        length = lengthfunction();
        input();
        algorithm();
        for (int i = 0; i < length; i++)
        {
            if (x == bend[i][0] && y == bend[i][1])
            {
                gameover = 1;
            }
        }
        _sleep(0.01);
    }
    system("cls");
        printf("Game Over!\n");
    printf("Your Score: %d\n", score);

    // Update the high score in the file
    record();

    return 0;
}

