#include <stdio.h>

typedef struct player
{
    int id;
    int jersyNum;
    char name[20];
    int totalRuns;
} player;

int main()
{
    int size;
    printf("\n Enter the number of player you want to add : ");
    scanf("%d", &size);

    player playerDetails[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n ---- enter details of player %d ----", i + 1);
        printf("\n Enter player id : ");
        scanf("%d", &playerDetails[i].id);
        printf("\n Enter jersy number : ");
        scanf("%d", &playerDetails[i].jersyNum);
        printf("\n Enter player name : ");
        scanf("%s", &playerDetails[i].name);
        printf("\n Enter total run scored : ");
        scanf("%d", &playerDetails[i].totalRuns);
    }

    printf("\n ------- All Player Details -------");
    for (int i = 0; i < size; i++)
    {
        printf("\n ---- player %d details ----", playerDetails[i].id);
        printf("\n player jersy number : %d", playerDetails[i].jersyNum);
        printf("\n player name : %s", playerDetails[i].name);
        printf("\n player total runs : %d", playerDetails[i].totalRuns);
    }

    

    int highestScore = 0;
    for (int i = 0; i < size; i++)
    {
        if (highestScore < playerDetails[i].totalRuns)
        {
            highestScore = playerDetails[i].totalRuns;
        }
    }
    

    for (int i = 0; i < size; i++)
    {
        if (highestScore == playerDetails[i].totalRuns)
        {
            printf(" \n ---------- Highest scorer is ------------ ");
            printf("\n ------- %s -------", playerDetails[i].name);
        }
    }
}