pour faire reconaitre la coloration syntaxique d'ezlanguage à jedit
il faut:

1- copier le fichier ezlanguage.xml dans le dossier ~/.jedit/modes/

2- rajouter la ligne qui se trouve dans le fichier catalog à savoir "<MODE NAME="ezlanguage" FILE="ezlanguage.xml" FILE_NAME_GLOB="*.ezl"/>"
   dans le fichier catalog deja présent dans le répertoire .jedit/modes/

3- Dans jEdit, menu Utilities -> BufferOptions et dans le menu "Edit mode", sélectionner ezlanguage.
