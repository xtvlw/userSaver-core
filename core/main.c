#include <dirent.h>
#include <stdio.h>

int get_dirs(char *dir) {
  DIR *dp;
  struct dirent *ep;

  char *directorys[30];
  dp = opendir(dir);

  if (dp != NULL) {
    for (int i = 0; (ep = readdir(dp)); i++) {
      if (ep->d_type == 4) {
        directorys[i] = ep->d_name;
      }
    }
    (void)closedir(dp);
    return 0;
  }
  return 1;
}
