int getStrLen(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int isUpper(char c) {
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int isLower(char c) {
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}