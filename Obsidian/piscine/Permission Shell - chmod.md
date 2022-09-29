# Permission Shell - chmod
Les permissions s'applique sur un fichier ou un dossier.

Elles permettes d'autoriser :
- la lecture, **r** pour read
- l'ecriture, **w** pour write
- l'execution, **x** pour excute

On repete trois fois les autorisations pour les assigner respectivement a :
- L'utilisateur, **u** pour utilisateur
- Le groupe reseau, **g** pour groups
- Les autres, **o** pour other
- ou afecter pour tout le ;onde en meme temps, **a** pour all.

```
chmod [ugoa] [+-=] [rwx] [fileName]
-> chmod u+x testFile
```

## Affichage des autorisations
On utlise la commande ```ls -l``` pour afficher les autorisations des fichiers.

![chmod|250](https://azurplus.fr/wp-content/uploads/1614616775_219_Comment-utiliser-la-commande-chmod-sous-Linux.png)


## Binaire
On peut utiliser le binnaire pour affecter directement les autorisations aux trois types user, groupes, others.

On considere 0 inactif et 1 actif. Pour activer toutes les autorisations pour l'user, il faut donc faire 111 (read = 1, write = 1, other = 1).
L'equivalent decimal est 7.  Si l'on ne veut aucune autorisation pour le groupe, mais toutes les autorisations pour l'other, on ecrira

```chmod 707 testFile```

### Table binaire pour chmod
0. 000
1. 001
2. 010
3. 011
4. 100
5. 101
6. 110
7. 111


- - - -

# Metadata
- Date: 2022-09-28
- Topics: #shell 