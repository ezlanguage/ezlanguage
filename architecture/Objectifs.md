Tâches assignées au groupe
==========================

### Que fait le compilateur ?
### Quelles sont les options en ligne de commande
### Organisation des bibliothèques du langage
### Modules utilisateurs et programme : à définir
### Installation, déploiement

<==========================================================>

1. Que fait le compilateur ?
	1. Créer la structure de fichiers pour compiler les fichiers bisons et lex
	2. Vérifie la syntaxe des fichiers en entrée
	3. Analyse des fichiers sources ezlanguage
	4. Créé des fichiers C++ valides, incluant les libraires C++ utilisées
	5. Comment compiler les fichiers C++ générés pour créer un programme ?
2. Quelles sont les options en ligne de commande
	1. Comment gérer les options en ligne de commande, et quelle sont ses objectifs exacts
	2. Quels sont les options de base et celles possiblement utilisables que le groupe #compilation devra gérer
3. Organisation des bibliothèques du langage
	1. Définition des groupes de bibliothèques
	2. Passage des bibliothèques de C++ vers EZ
4. Modules utilisateurs et programme
	1. A voir plus tard, quand le groupe langage aura définit le langage
5. Installation, déploiement
	1. Emplacement du compilateur et de ses librairies sur la machine
	2. Installation et déploiement d'une configuration d'accès à distance

## A faire :
1. Définir le rôle du compilateur, ce qu'il peut faire, ses limites, comment est géré le multi-fichiers (peut-on utiliser des libraires C++ dans un projet ezl, ...), son utilisation et ses options, etc, avec le groupe compilation.
2. Créer un makefile permettant de créer le compilateur à partir de fichiers flex et bison
3. Créer un makefile (le même ?) permettant de créer les fichiers cpp à partir de fichiers ezl valides, en exécutant le compilateur créé.
4. Voir l'organisation des dossiers et fichiers du projet
	=> Voir avec le groupe compilation
