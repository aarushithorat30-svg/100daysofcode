#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
        freq1[str1[i] - 'a']++;

    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
        freq2[str2[i] - 'a']++;

    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
