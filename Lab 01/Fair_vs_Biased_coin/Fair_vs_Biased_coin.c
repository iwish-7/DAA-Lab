#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tosses, i;
    int fairHeads = 0, biasedHeads = 0;

    printf("Enter number of tosses: ");
    scanf("%d", &tosses);

    srand(time(NULL));

    // Fair Coin
    printf("\nFair Coin:\n");
    for(i = 0; i < tosses; i++) {
        if(rand() % 2) {
            printf("H ");
            fairHeads++;
        } else {
            printf("T ");
        }
    }


    // Biased Coin (70% Head)
    printf("\nBiased Coin (70%% Head):\n");
    for(i = 0; i < tosses; i++) {
        if(rand() % 100 < 70) {
            printf("H ");
            biasedHeads++;
        } else {
            printf("T ");
        }
    }

    printf("\nProbability of Head (Fair coin) = %.4f\n",
           (float)fairHeads / tosses);
    printf("Probability of Tail (Fair coin) = %.4f\n",
           (float)(tosses - fairHeads) / tosses);

    printf("\nProbability of Head (Biased coin) = %.4f\n",
           (float)biasedHeads / tosses);
    printf("Probability of Tail (Biased coin) = %.4f\n",
           (float)(tosses - biasedHeads) / tosses);

    return 0;
}