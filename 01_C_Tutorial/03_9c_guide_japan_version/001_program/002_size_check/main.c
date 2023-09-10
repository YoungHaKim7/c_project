// #include <stdio.h>

// fpos_t GetFileSize(const char* FileName[])
// {
//   fpos_t fsize = 0;

//   FILE* fp = fopen(FileName, "rb");

//   fseek(fp, 0, SEEK_END);
//   fgetpos(fp, &fsize);

//   fclose(fp);
//   return fsize;
// }

// int main () {
  
// fpos_t fsize = 0;
// fpos_t fsizeb = fseek(fp, 0, SEEK_END);
// fgetpos(fp, &fsize);
// fseek(fp, fsizeb,SEEK_SET);
// }


#include <stdio.h>

fpos_t GetFileSize(const char* FileName[])
{
  fpos_t fsize = 0;

  FILE* fp = fopen(FileName, "rb");

  if (fp != NULL) {
    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fclose(fp);
  }

  return fsize;
}

int main () {
  fpos_t fsize = GetFileSize("myfile.txt");
  printf("The file size is %d bytes\n", fsize);
}
