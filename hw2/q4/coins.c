#include <stdio.h>

int check(int money);

int main(void) {
  int money;
  printf("Enter your money in cents: ");
  scanf("%d", &money);
  int quarter, dime, nickel, penny = 0;

  //only loops once
  //determines the how many quaters, dimes, nickels, pennies there should be
  for(int i = 0; i < 1; i++){
    quarter = money / 25;
    money = money - 25 * quarter;
    if(check(money) == 1){
      break;
    }

    dime = money / 10;
    money = money - 10 * dime;
    if(check(money) == 1){
      break;
    }

    nickel = money / 5;
    money = money - 5 * nickel;
    if(check(money) == 1){
      break;
    }

    penny = money / 1;
  }

  printf("%d quarter, %d dime, %d nickel, %d penny \n", quarter, dime, nickel, penny);


}

//checks if the money is greater than zero
int check(int money){
  if(money >= 0){
    return 0;
  }
  return 1;
}
