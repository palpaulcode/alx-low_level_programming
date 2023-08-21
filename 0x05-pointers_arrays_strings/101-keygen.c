#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
/* randomly generate password of length N */
void randomPasswordGeneration(int N)
{
    int i = 0;
  
    int randomizer = 0;
  
   /** Seed the random-number generator
    * with current time so that the
    * numbers will be different every time
    */
    srand((unsigned int)(time(NULL)));
  
    /* Array of numbers */
    char numbers[] = "0123456789";
  
    /* array of lowercase alphabets */
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    /* uppercase alphabets array */
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    /* special symbols array */
    char symbols[] = "!@#$^&*?";
  
    /* Store the  random password */
    char password[N];
  
    /* select the randomizer */
    randomizer = rand() % 4;
  
    /* iterate over the range [0, N] */
    for (i = 0; i < N; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}
  
/**
 * main - program entry point
 */
int main()
{
    /* Length of the password to be generated */
    int N = 15;
  
    randomPasswordGeneration(N);
  
    return (0);
}
