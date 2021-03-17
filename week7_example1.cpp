void reverse(char *s) {
    char *begin = s;
    char *last = s + strlen(s) - 1;
    
    while (begin < last) {
        swap(*begin, *last);
        begin++;
        last--;
    }
}

// method 2
for (char *begin = s, *last = s + strlen(s) - 1; begin < last; begin++, last--) {
    swap(*begin, *last);
}
