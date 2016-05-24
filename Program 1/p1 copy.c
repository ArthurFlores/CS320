/*
CS320
Arthur Flores masc0120
8 February 2015
Print number of words and lines in a document
Dr. Carroll
*/
#include <stdio.h>

 
int main(void)
{
    //Initialize values
    int iochar = getchar(), line = 0, whiteSpace = 1, word = 0; 
    
    
    //Check if file is null
    if (iochar == EOF){
    	printf("%8d%8d\n", line, word);			
        return 1;
      } 
    
   //Some of this code below is a reference to Foster in CbyDiscovery
    do{
    	//check how many lines in file
    	if ( iochar == '\n')					
	   line++;
	   
	//check how many words in the file   
    	if((iochar ==' ') || (iochar == '\t') || (iochar == '\n') || (iochar == '-') || (iochar == ':'))
	   whiteSpace = 1;
	
	else{
	    
	    // increase the count of word
	    if( whiteSpace == 1)
	    	word++;
		
	    // reset whitespace
	    whiteSpace = 0;
	}
	//reinitialize getchar
	iochar = getchar();
       }
       //read charcters until end of file
       while (iochar != EOF);
    
    //print the number of lines and words in the file    
    printf("%8d%8d\n", line, word);
    
    return 0;
}
