#include "amount.h"

amount change(amount given, amount price){
  amount change;

  change.euros = given.euros - price.euros;
  if(change.euros < 0) change.euros = 0;

  change.cents = given.cents - price.cents;
  if(change.cents < 0) change.cents = 0;

  return change;
}
