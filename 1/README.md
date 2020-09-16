# Résumé du cours

## La machine à café

Une machine à café est un **système** composé de sous ensembles que l'on dessine facilement par des blocks. On apprécie disposer les entrées à gauche et les sorties à droite. 

La machine a café est composée d'une pompe, d'un capteur de débit, d'un chauffage pour l'eau de deux boutons et de deux leds. Le tout est piloté par un microcontrôleur (MCU). 

Ce microcontrôleur contient un *programme exécutable* écrit en langage machine. Ce programme est généralement compilé à partir d'un fichier écrit en C. 

## Algorithme

Un programme est composé d'algorithmes, des recettes de cuisine permettant de résoudre un problème. Un algorithme connu sous le nom de l'algorithme d'Euclide est celui du PGCD. 

## Premier programme en C

Voici comment résoudre naïvement le problème du PGCD en C :

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    int a = atoi(argv[1]); 
    int b = atoi(argv[2]);
    int r;

    while ( b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", a);
}
```

Alternativement on peut demander interactivement à l'utilisateur de saisir les deux valeurs :

```c
#include <stdio.h>
#include <stdlib.h>

// Ce programme est l'algorithme d'Euclide 
int main(int argc, char*argv[]) {

    printf("Entrer la valeur de a: ");
    int a;
    scanf("%d", &a);

    printf("Entrer la valeur de b: ");
    int b;
    scanf("%d", &b);

    int r;

    while ( b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", a);
}
```

