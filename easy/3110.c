int scoreOfString(char* s) {
  int total = 0;

  for (register int i = 1; s[i] != '\0'; i++) {
      total += abs(s[i] - s[i - 1]);
  }

  return total;
}