# Mini-printf

## Description

Voici mon repo contenant mon **mini-printf**, un projet réalisé durant **la Piscine C de première année à Epitech**.
Le but de ce projet était de recréer une version simplifiée de la fonction <mark>printf</mark> en C, sans utiliser la fonction d’origine
C’est un projet très formateur qui m’a permis de travailler sur :
- Les pointeurs
- Les arguments variadiques (<mark><stdarg.h></mark>)
- La manipulation de chaînes et de nombres en C

## 📚 Contenu

Ce repo contient :
- <mark>mini_printf.c</mark> : L’implémentation principale du <mark>mini_printf</mark>
- <mark>mini_printf_functions.c</mark> : Les fonctions utilitaires (<mark>my_putchar</mark>, <mark>my_putstr</mark>, <mark>my_put_nbr</mark>)
- <mark>include/my.h</mark> : Le fichier d’en-tête pour centraliser les prototypes

> ⚠️ **Disclaimer :**
> Ce repo n'a pas vocation d'être un cheat code pour la Piscine.
> J'ai créé ce repo pour garder un souvenir de ma piscine et pour la mettre en avant parmis mes autres projets personnels.
> Si un étudiant tombe sur ce repo, je te conseille d'aller regarder ailleurs pour éviter un -42.

## Compétences développées

- **Manipulation des arguments variadiques** avec <mark>va_list</mark>, <mark>va_start</mark>, <mark>va_arg</mark>, <mark>va_end</mark>
- Implémentation d’une version simplifiée de printf
- Compréhension des **spécificateurs de format** (<mark>%c</mark>, <mark>%s</mark>, <mark>%d</mark>, <mark>%%</mark>)
- Gestion des chaînes de caractères et des entiers
- Organisation de projet avec des fichiers séparés et un header

## 📁 Structure du projet
```
|── include/
|   └── my.h                    # Fichier d'en-tête
|── mini_printf.c               # Implémentation principale
|── mini_printf_functions.c     # Fonctions utilitaires (my_putchar, my_putstr...)
|── README.md                   # Ce fichier
```

## Lancer le projet

Pour compiler le projet, il suffit d’utiliser <mark>gcc</mark> :
```bash
gcc mini_printf.c mini_printf_functions.c -I include -o mini_printf
./mini_printf
```
Tu peux ensuite tester directement en appelant <mark>mini_printf</mark> dans un <mark>main.c</mark> personnalisé
```c
#include "include/my.h"
#include <stdarg.h>

int main(void)
{
    mini_printf("Hello World\n");
    return 0;
}
```

## Exemple de sortie
```bash
Hello World
```
## Licence

Aucune.
