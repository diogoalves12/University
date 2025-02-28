#include <iostream>

using namespace std;


int xorCipher(int original, int ciphered){
  return original ^ ciphered;
}

int main(){
  char original, ciphered;
  cin >> original >> ciphered;
  int asciOriginal = original, asciCiphered = ciphered;

  cout << "encryption key is " << xorCipher(asciOriginal, asciCiphered) << endl;

  return 0;
}