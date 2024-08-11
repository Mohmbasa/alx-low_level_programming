#include "main.h"

int wildcmp(char *s1, char *s2)
{
    return (similarity_check(s1, s2, 0, 0));
}

int similarity_check(char *s1, char *s2, int i, int j)
{
    if (s2[j] == '\0')
    {
        return (s1[i] == '\0');  
    }

    if (s2[j] == '*')
    {
        
        if (similarity_check(s1, s2, i, j + 1)) 
            return 1;
        if (s1[i] != '\0' && similarity_check(s1, s2, i + 1, j)) 
            return 1;
    }
    else if (s1[i] == s2[j])
    {
        
        return similarity_check(s1, s2, i + 1, j + 1);
    }

    
    return 0;
}

