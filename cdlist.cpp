#include <string>
#include <iostream>
#include <dirent.h>
#include <Windows.h>
int main ()
{
	std::string lista[1000];
	std::string search = ".EXE";
	int i = 0;
	int numfiles;
	DIR *dir;
    struct dirent *ent;
	if ((dir = opendir ("C:\\Windows\\Prefetch")) != NULL) {
 
    while ((ent = readdir (dir)) != NULL) 
	{
    lista[i] = ent->d_name;
    i++;
    numfiles++;
    }
    i = 0;
    for (i=0;i<=numfiles;i++)
	{
	if(lista[i].find(search) != std::string::npos)
	{
		std::cout << lista[i] << "\n";
	}
	
    }
    closedir (dir);
 
	} 
	else {
  
 	perror ("");
  	return EXIT_FAILURE;
}

}

