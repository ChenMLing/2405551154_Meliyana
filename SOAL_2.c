#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void evaluate_strings(const char *s1, const char *s2)
{
    if (strcmp(s1, s2) == 0)
    {
        printf("IDENTIK\n");
    }
    else if (strlen(s1) == strlen(s2))
    {
        printf("MIRIP\n");
    }
    
    if (strlen(s1) != strlen(s2)) {
        printf("BERBEDA\n");
        return;
    }
}

int main(void)
{
    char s1[MAX_LENGTH + 1];
    char s2[MAX_LENGTH + 1];
    
    
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    
    
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    
    evaluate_strings(s1, s2);
    
    return 0;
}