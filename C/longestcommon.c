char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char* new_str = strdup(strs[0]);
    int j = 0;

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (new_str[j] && strs[i][j] && new_str[j] == strs[i][j]) {
            j++;
        }

        if (new_str[j] != strs[i][j]) {
            new_str[j] = '\0';
        }
    }

    return new_str;
}
