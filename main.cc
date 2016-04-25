#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <unistd.h>

// CAEN
#include <CAENVMElib.h>
#include <CAENVMEtypes.h>


using namespace std;

int main(int argc, char *argv[], char *envp[]){


  // Command line arguments
  int crate=-1;
  int link=-1;
  
  int c;
  while( (c = getopt(argc,argv,"c:l:") ) !=-1)    {      
    switch(c){ 
    case 'l':
      link = atoi(optarg);
      break;
    case 'c':
      crate = atoi(optarg);
    default:
      break;
    }      
  }   

  // Initialize it
  CVBoardTypes BType = cvV2718;
  int tempHandle = -1;
  int cerror;
  if((cerror=CAENVME_Init(BType,link,crate,
                          &tempHandle))!=cvSuccess){
    exit(-1);
  }
 
  CAENVME_End(tempHandle);

  exit(0);
  
  
}
