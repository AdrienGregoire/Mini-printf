# Mini-printf

## Description

Ce projet consiste à recoder une version simplifiée de la fonction **printf** en C. L'objectif est de comprendre le fonctionnement interne des fonctions variadiques, la gestion des pointeurs et le formattage d'affichage.

## Fonctionnalités

La fonction principale à implémenter est:
```c
int mini_printf(char const *format, ...)
```
Elle doit gérer les flas suivants:    
%c    --Afficher un caractère    
%s    --Afficher une chaine de caractère    
%d    --Afficher un entier    
%i    --Afficher un entier    
%%    --Afficher le caractère '%'     

## Compétences développées

- Langage C (fonctions variadiques)
- Gestion de projets C (Makefile, organisations de fichiers)
- Travail en équipe
- **Autonomie  et rigueur** dans le développement

## 📁 Structure du projet
|----include/     
     |____my.h # Fichier .h avec les prototypes    
|----mini_printf.c # Fonction principale    
|----mini_printf_functions.c # Fonctions de formattage     
|____README.md # Ce fichier     

## Lancer le projet
Comme le projet est une fonction, il faudrait l'implémenter dans un projet et l'utiliser comme une fonction personnalisée. Cependant, vous pouvez aussi créer un fichier **main.c** pour appeler la fonction et l'essayer.

```c
//Voici ce que vous pouvez ecrire dans le main.c

#include "include/my.h"
#include <stdarg.h>

int main(void)
{
    mini_printf("Hello World\n");
    return 0;
}
```

Pour compiler
```bash
gcc main.c mini_printf.c mini_printf_functions.c
./a.out
```

## Licence
Aucune.
