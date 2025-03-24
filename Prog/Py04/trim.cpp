
void trim(char s[]){
  int first = 0;
  while(s[first] == ' ') first++;

  int last = 0;
  while(s[last]) last++;
  last--;

  while(last > first && s[last] == ' ') last--;

  int i = 0;
  for(int j = first; j <= last; j++){
    s[i++] =s[j];
  }

  s[i] = '\0';
}