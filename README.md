Question 1:

createBackup est une fonctionnalité qu'on n'a pas abordé dans le cours. Ceci crée des .backup fichiers de books.txt et users.txt.
.backup sont des backups, ils sont des copies des fichiers qui gardent l'état du fichier durant le sauvegarde. On doit importer filesystem
pour utilliser copy_file(Chose à copier, Nom du copie) qui copie le fichier. Dans ce cas, copy_file(usersFileName, usersFileName + ".backup")
on prend usersFileName qui est users.txt et on ajoute .backup à la fin ce qui devient users.txt.backup. La même arrive pour books.txt.