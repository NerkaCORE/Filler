# Filler

Créez votre joueur pour affronter d’autres étudiants sur le célèbre (ou pas) plateau du Filler. Le principe est simple : deux joueurs s’affrontent sur un plateau, et doivent placer, tour à tour, la pièce que le maître du jeu (fourni sous la forme d’un exécutable Ruby) leur donne, gagnant ainsi des points. La partie s’arrête dès qu’une pièce ne peut plus être placée. Petit projet ludique !

Usage: ./resources/filler_vm -f path [-i | -p1 path | -p2 path] [-s | -q | -t time]

   -t  --time		set timeout in second
   -q  --quiet		quiet mode
   -i  --interactive	interactive mode(default)
   -p1 --player1	use filler binary as a first player
   -p2 --player2	use filler binary as a second player
   -f  --file		use a map file (required)
