# Mini-printf

## Description

Voici mon repo contenant mon **mini-printf**, un projet réalisé durant **la Piscine C de première année à Epitech**.
Le but de ce projet était de recréer une version simplifiée de la fonction printf en C, sans utiliser la fonction d’origine
C’est un projet très formateur qui m’a permis de travailler sur :
- Les pointeurs
- Les arguments variadiques (<stdarg.h>)
- La manipulation de chaînes et de nombres en C

## 📚 Contenu
Ce repo contient :
- mini_printf.c : L’implémentation principale du mini_printf
- mini_printf_functions.c : Les fonctions utilitaires (my_putchar, my_putstr, my_put_nbr)
- include/my.h : Le fichier d’en-tête pour centraliser les prototypes

> ⚠️ **Disclaimer :**
> Ce repo n'a pas vocation d'être un cheat code pour la Piscine.
> J'ai créé ce repo pour garder un souvenir de ma piscine et pour la mettre en avant parmis mes autres projets personnels.
> Si un étudiant tombe sur ce repo, je te conseille d'aller regarder ailleurs pour éviter un -42.

## Compétences développées
- Manipulation des arguments variadiques avec va_list, va_start, va_arg, va_end
- Implémentation d’une version simplifiée de printf
- Compréhension des spécificateurs de format (%c, %s, %d, %%)
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
Pour compiler le projet, il suffit d’utiliser gcc :
```bash
gcc mini_printf.c mini_printf_functions.c -I include -o mini_printf
./mini_printf
```
Tu peux ensuite tester directement en appelant mini_printf dans un main.c personnalisé
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
