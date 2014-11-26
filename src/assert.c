#include <assert.h>
#include <stdlib.h>

void open_record(char *record_name)
{
  assert(record_name!=NULL);
  /* Rest of the code */
}

int main(int argc, char *argv[])
{
  assert(argc==2 && argv[1][0]=='1');
  open_record(NULL);
  return 0;
}

