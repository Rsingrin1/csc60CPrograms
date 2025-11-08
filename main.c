#include <stdio.h>
#define DAYS = 7
#define SAMPLES = 3


int main() {
    float temperaturesForTheWeek[DAYS][SAMPLES];
    int numDays = -1;
    int numSamples[DAYS];
    printf("pick the number of days you are recording, 0-6, monday through sunday\n");
    scanf("%d",numDays);
    for (int i=0; i<numDays; ++i)
    {
        printf("give me the number of samples for each day")
        scanf("%d",numSamples[i]);
        for (int j = 0; j<numSamples; ++j)
        {
            printf("give me the temp")
            scanf("%d", temperaturesForTheWeek[i][j])
        }

    }

    printf("pick the number of samples you are recording per day, 1-3, morning through evening\n");




}

void display(float temperaturesForTheWeek[][SAMPLES], int numDays, int numSamples[])
{
    for (int i = 0; i < numDays; ++i)
    {
        printf("day: %d", i)
        for (int j = 0; j<numSamples[i])
    }
}