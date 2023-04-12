La fonction "push_to_a" prend en argument deux pointeurs vers des listes chaînées, "a" et "b". Elle transfère toutes les valeurs de la liste "b" vers la liste "a" en respectant un certain ordre.

Voici l'algorithme suivi par cette fonction :

Initialiser la variable "down" à 0, qui servira à compter le nombre de déplacements vers le bas effectués sur la liste "a".
Appliquer la fonction "indice" sur la liste "b", qui assigne un index à chaque élément de la liste "b".
Tant que la liste "b" n'est pas vide :
Calculer la position médiane de la liste "b" en divisant sa taille par 2.
Si l'index de l'élément maximum de la liste "b" est supérieur à la position médiane :
Appeler la fonction "min_puch_to_a_sup_mid" qui transfère l'élément maximum de la liste "b" dans la liste "a" en respectant certaines conditions (voir ci-dessous).
Sinon :
Appeler la fonction "min_puch_to_a_inf_mid" qui transfère l'élément maximum de la liste "b" dans la liste "a" en respectant certaines conditions (voir ci-dessous).
Transférer l'élément maximum de la liste "b" dans la liste "a" avec la fonction "pa".
Tant que "down" est non nul et que la dernière valeur de la liste "a" est supérieure à la valeur maximale de la liste "b" :
Déplacer le dernier élément de la liste "a" vers le haut avec la fonction "rra" et décrémenter "down".
Tant que "down" est non nul, déplacer le dernier élément de la liste "a" vers le haut avec la fonction "rra" et décrémenter "down".
La fonction "min_puch_to_a_sup_mid" est appelée lorsque l'index de l'élément maximum de la liste "b" est supérieur à la position médiane de la liste "b". Elle transfère l'élément maximum de la liste "b" dans la liste "a" en respectant les conditions suivantes :

Si "down" est nul ou si la dernière valeur de la liste "a" est inférieure à la valeur de l'élément maximum de la liste "b", transférer l'élément maximum de la liste "b" dans la liste "a" avec la fonction "pa" et déplacer la dernière valeur de la liste "a" vers le haut avec la fonction "ra" tout en incrémentant "down".
Sinon, déplacer le dernier élément de la liste "b" vers le haut avec la fonction "rb".
La fonction "min_puch_to_a_inf_mid" est appelée lorsque l'index de l'élément maximum de la liste "b" est inférieur ou égal à la position médiane de la liste "b". Elle transfère l'élément maximum de la liste "b" dans la liste "a" en respectant les conditions suivantes :

Si "down" est nul ou si la dernière valeur de la liste "a" est inférieure à la valeur de l'élément maximum de la liste "b", transférer l'élément maximum de la liste "b" dans la



houdaakoumi9@gmail.com
contine
liste "a" avec la fonction "pa" et déplacer la dernière valeur de la liste "a" vers le haut avec la fonction "ra" tout en incrémentant "down".

Sinon, déplacer le dernier élément de la liste "b" vers le bas avec la fonction "rrb".
