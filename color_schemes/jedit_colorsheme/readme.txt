#instructions d'utilisation de la coloration syntaxique jedit

1. pour utiliser la coloration syntaxique avec jedit un fichier catalog.xml est nécéssaire
   ce fichier est fourni lors de l'installation de jedit et est localisé dans le repertoire:
   /home/VOTRE_USER/.jedit/modes/ 
   c'est ce fichier qui permet à jedit de reconnaitre le language pour lequel vous venez de créer un fichier de coloration
   il faut donc ajouter dans ce fichier entre les balises <MODES> </MODES> la ligne :
   <MODE NAME="ezlanguage" FILE="ezlanguage.xml" FILE_NAME_GLOB="*.ezl" /> 
2. copier le fichier de coloration syntaxique "ezlanguage.xml" dans le même repertoire que ce fichier catalog à savoir 
   /home/VOTRE_USER/.jedit/modes/ 
