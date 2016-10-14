## Bibliothèques :
+ Comment utiliser et prévenir les erreurs les variables ez dans un code c++ à l'intérieur d'un fichier EZ
+ Lors d'un import, comment définir quelles sont les bibliothèques C++ sont utilisées, à partir des \[fonction d'un module EZ\](<parameters...>) as [fonction c++]
Définit (grâce au langage) avec un format spécifique, par exemple :
```
  module math
  include "/usr/include/math.h"
  library "/___/lib/...    -lm"
```
Les infos utiles sont récupérées par ezc, à faire par #compilation. On est chargé des les gérer.
## Exemple de cas :
	func sum(a as array of integer)
	x is integer;
	// C++
		int x;
		x = accumulate(ez_a) /* a.begin() et a.end() ??? */
	// C++
### Module :
	module math
	function tan(x) as sum(x) / cos(x)
	function racine(x in REAL) : REAL
		implemented as sqrt;
	end
