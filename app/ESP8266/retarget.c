#include <stdio.h>  
 #include <rt_misc.h>  
   
 #pragma import(__use_no_semihosting_swi)  
   
   
 extern int  sendchar(int ch);  /* in serial.c */  
   
   
 struct __FILE { int handle; /* Add whatever you need here */ };  
 FILE __stdout;  
 FILE __stdin;  
 FILE __stderr;  
   
 int fputc(int ch, FILE *f)   
 {  
   return (sendchar(ch));  
 }  
   
 int fgetc (FILE *fp)    
 {  
   return (0);  
 }  
   
   
 int fclose(FILE* f)   
 {  
 return 0;  
 }  
   
 int ferror(FILE *f)   
 {  
   /* Your implementation of ferror */  
   return EOF;  
 }  
 int fseek (FILE *fp, long nPos, int nMode)    
 {  
   return (0);  
 }  
   
   
 int fflush (FILE *pStream)    
 {  
   return (0);  
 }  
   
   
 void _ttywrch(int ch)   
 {  
   sendchar(ch);  
 }  
   
   
 void _sys_exit(int return_code)   
 {  
  label:    
   goto label;  /* endless loop */  
 } 