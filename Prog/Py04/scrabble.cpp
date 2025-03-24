


int score(char word[], int n){
  int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  int total_score = 0;
  for(int i = 0; i < n; i++){
    if(word[i] >= 'a' && word[i] <= 'z'){
    total_score += values[word[i] - 'a'];
    }
  }

  return total_score;
}