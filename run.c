#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
// random number generator
srand(time(0));
// generate random number between 1 and 100
int randomNumber = rand() % 100 + 1;
int guesse = 0;
int guessed;
do
{
printf("guessed the number ");
scanf("%d", &guessed);
if (guessed > randomNumber)
{
printf("lower number please\n");
}
else if (guessed < randomNumber)
{
printf("higher number please\n");
}
else
{
printf("congratulations you gussed the write number\n");
}
guesse++;
} while (guessed != randomNumber);
printf("you gusse the number in %d guesses\n", guesse);
return 0
}
