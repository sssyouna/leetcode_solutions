int lengthOfLastWord(char* s) {
    int len = strlen(s);
int i = len - 1;

while (i >= 0 && s[i] == ' ')
    i--;
int word = 0;
while (i >= 0 && s[i] != ' ') {
    word++;
    i--;
}

return word;
    
}