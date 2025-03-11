#include "amount.h"

amount change(amount given, amount price){
  amount change;

  int totalGiven;
  totalGiven = given.euros * 100 + given.cents;

  int totalPrice;
  totalPrice = price.euros * 100 + price.cents;

  change.euros = totalGiven - totalPrice;
  change.cents = change.euros % 100;
  change.euros /= 100;


  return change;
}