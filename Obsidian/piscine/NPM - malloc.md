# NPM - malloc
La Heap est une partie de la memoire basse, aka le tas. Et contrairement a la Stack, on a un controle dessus.

La Stack evolue en fonction de notre programe.
La Heap va evoluer si on lui demande dans le programe vec des fonctions particulieres.

## Probleme avec la Stack
```
int    *get()
{
	int    i;

	return (&i);
}
```

Ici, on a une fonction qui renvoie l'adresse d'une variable contenu dans la Stack.
(en realite cette fonction ne passe pas en -Werror)

```
int    *set()
{
	int    lol;

	lol = 78;
	return (0);

}
```

Imaginons le main suivant :
```
int    main(void)
{
	int    *ptr;

	ptr = get();
	ptr = 12;
	printf("%d\n", *ptr);
	set();
	printf("%d\n", *ptr);
	return (0);
}
```

Ici, le programme affichera ```12``` et ```78```.
Em appelant ```get()``` la Stack s'agrandi, et elle nous renvoie une adresse.
On prendre l'adresse et on y place la valeur 12. Comportement anormale, mais... avec gcc sans -w flags, ca peut passer.
On appelle ```set()``` qui agrandi la Stack a nouveau pour placer la valeur ```78``` a ```i```.

MAIS

Puisque ```get()``` a agrandi la Stack pour renvoyer l'adresse d'une variable local qui, une fois la fonction fini revient a ca taille initiel ; 
Lorsque on appelle ```set()```, la Stack s'agrandi et stock ```lol``` sur l'adresse de ```i```.

Et puisque ```ptr``` contient l'adresse de ```i```, alors, ```ptr``` prend la valeur de ```lol```.

Pour eviter ce probleme, on demande de la memoire a la Heap

## Malloc

size_t est un type def.

```
#include <stdlib.h>
void *
malloc(size_t size)
```

-> affecte une taille de memoire et renvoi l'adresse du debut de la memoire dans laquelle on a le droit d'ecrire.

#### Affectation de memoire :
```
int    *tab;

tab = malloc(4);
```
Probleme, si l'on change d'OS, la taille n'est plus valide

```
int    *tab;

tab = malloc(sizeof(int));
```
Probleme, si l'on change le type def de notre variable, l'affectaion n'est plus valide.

```
int    *tab

tab = malloc(sizeof(*tab))
```
Reccupere directement le type def de la variable.

#### Exemple Stack avec Malloc
On remplace la fonction ```get()``` comme suit :
```
int    *get()
{
	int    *i;

	i = malloc(sizeof(i))
	return (i);
}
```

Et l'output de main sera ```12``` et ```12```.

## free()
La Stack se libere automatique apres chaque fonction. Probleme, il faut donner nos propres instructions pour que la Heap se libere.

```free()``` prend une adresse et libere cette memoire.

- - - -

# Metadata
- Date: 2022-09-29
- Topics: #c