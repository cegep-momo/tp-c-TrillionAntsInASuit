Question 1:

createBackup est une fonctionnalité qu'on n'a pas abordé dans le cours. Ceci crée des .backup fichiers de books.txt et users.txt.
.backup sont des backups, ils sont des copies des fichiers qui gardent l'état du fichier durant le sauvegarde. On doit importer filesystem
pour utilliser copy_file(Chose à copier, Nom du copie) qui copie le fichier. Dans ce cas, copy_file(usersFileName, usersFileName + ".backup")
on prend usersFileName qui est users.txt et on ajoute .backup à la fin ce qui devient users.txt.backup. La même arrive pour books.txt.

Question 2:

Une solution plus adapté serait d'utiliser une base de donnée comme MySQL. Ceci sera meilleur, car il y aura plus de contrôle sur les tables
des livres comme SELECT, DELETE, UPDATE, etc. Il est aussi plus sécuritaire, car on ne peut pas modifier books.txt directement. On peut accéder
la base de donnée n'importe où. On n'a aussi pas besoin d'avoir un fichier books.txt énorme, car la base de donnée n'est pas local.
Pour interfacer avec C++, il faut faire sudo apt-get install libmysqlclient-dev dans le terminal pour pouvoir utiliser mysql.h et connecter C++
avec la base de donnée MySQL.