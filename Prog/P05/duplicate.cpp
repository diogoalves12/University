

char* duplicate(const char s[]) {
    int len = 0;
    while (s[len]) len++;

    char* dup = new char [len + 1];

    for(int i = 0; i < len; i++){
        dup[i] = s[i];
    }

    dup[len] = 0;
    return dup;
}