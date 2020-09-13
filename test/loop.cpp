#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<dirent.h>
#include<errno.h>
#include<sys/uio.h>

#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<vector>


using namespace std;

/**              
 * main - uses strdup to create a new string, loops forever-ever
 *                
 * Return: EXIT_FAILURE if malloc failed. Other never returns
 */
int main(void)
{
     char *s;
     unsigned long int i;
    //  char t[15]  = "Holberton";
     int t = 1234;
     string str = to_string(t);
     s = strdup(str.c_str());
     if (s == NULL)
     {
          fprintf(stderr, "Can't allocate mem with malloc\n");
          return (EXIT_FAILURE);
     }
     i = 0;
     while (s)
     {
          printf("[%lu] %s (%p)\n", i, s, (void *)s);
          sleep(3);
          i++;
     }
     return (EXIT_SUCCESS);
}