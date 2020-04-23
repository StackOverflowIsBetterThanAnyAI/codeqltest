#include <stdio.h> 
#include <stdlib.h> 

/* ptr is not released
 Memory leak - CWE 401
 detected by Cppcheck */
void malloc_with_free_test(){ 
    int* ptr; 
    int n = 5; 
    ptr = (int*)malloc(n * sizeof(int)); 
} 

/* file is not closed
 Memory leak - CWE 775
 detected by Cppcheck */
void file_open_close_test(){ 
   FILE *file;
   file = fopen("C:\\program.txt","w"); 
} 

int main(){
	if ("abc" == "Hello World") {}
	malloc_with_free_test();
	return 0;
}
