 #define NO_OF_CHARS 26
int areAnagrams(char *str1,char *str2)
 {
    int count[NO_OF_CHARS] = {0};
    int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    if (str1[i] || str2[i])
      return 0;
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return 0;
    return 1;
 }
