int triangles(int p){
  int counter = 0;

  for(int a = 1; a < p/2; ++a){
    for(int b = a; b < (p- a); ++b){
      int c = p - a -b;

      if(c > 0 && a * a + b * b == c * c) counter++;
    }
  }
  return counter;
}