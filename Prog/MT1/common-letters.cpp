#include <iostream>

int common_letters(const char a[], const char b[], char out[]){
    int array_a[26] = {0};
    int array_b[26] = {0};

    for (int i = 0; a[i] != '\0'; i++) {
        if ((a[i] >= 'a' && a[i] <= 'z')) {
            array_a[a[i] - 'a'] = 1;
        } else if ((a[i] >= 'A' && a[i] <= 'Z')) {
            array_a[a[i] - 'A'] = 1;
        }
    }

    for (int j = 0; b[j] != '\0'; j++) {
        if ((b[j] >= 'a' && b[j] <= 'z')) {
            array_b[b[j] - 'a'] = 1;
        } else if ((b[j] >= 'A' && b[j] <= 'Z')) {
            array_b[b[j] - 'A'] = 1;
        }
    }

    int count = 0;
    for(int k = 0; k < 26; k++){
      if(array_a[k] == 1 && array_b[k] == 1){
        out[count++] = 'a' + k;
      }
    }

    out[count] = '\0';
    return count;
}