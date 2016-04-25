Minesweeper
D.Coderre 25.04.2015

Brief:

We find that our CAEN V1724 digitizers often crash upon CAENVME_Init
with a segmentation fault after using them for some time.

This program calls CAENVME_Init and CAENVME_End on a digitizer. The 
idea is if the library is going to seg fault it can do it here and not 
in the main program.

Reqs:

You'll need CAENVMElib. This has been tested on linux.

Running: 

./minesweeper -l {link number} -b {board number}

