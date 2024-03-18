#include <stdio.h>
#include <string.h>

int main() {
    char texte[1000];
    int phrase = 0;
    int mot = 0;
    int caractere = 0;
    int paragraphe = 0;
    
    printf("Entrez le texte a analyser : ");
    fgets(texte, sizeof(texte), stdin);
    
    for (int i = 0; texte[i] != '\0'; i++) {
        if (texte[i] == '.' || texte[i] == '?' || texte[i] == '!') {
            phrase++;
        }
        if (texte[i] == ' ' || texte[i] == '\n') {
            mot++;
        }
        if (texte[i] != ' ' && texte[i] != '\n') {
            caractere++;
        }
	if (texte[i] == '\n'|| texte[i] =='\t') {
            paragraphe++;
        }
    }
    
    printf("Le texte comporte %d paragraphe(s) , %d phrase(s), %d mot(s) et %d caractere(s) sans les espaces.\n", paragraphe ,phrase, mot, caractere);
    return 0;
}
