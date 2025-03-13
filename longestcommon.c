char* longestCommonPrefix(char** strs, int strsSize) {

    if (strsSize == 0 ) return "";

    //using strdup to duplicate the string and working on the duplicate string

    char* new_str = strdup(strs[0]);
    int j = 0;
    for (int i = 1; i < strsSize; i++)
    {   
       
        while(new_str[j] && strs[i][j] && new_str[j] == strs[i][j])
        {
           j++;
        }
        if(new_str [j] != strs[i][j])
        {
            new_str[j] = '\0';
        }
        return new_str;
    }
}