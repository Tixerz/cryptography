#include <stdio.h>
#include <stdlib.h>


int count(char* str){
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void encrypt(char* seed , char* file){
    int file_size = count(file);
    int seed_size = count(seed);
    int seed_index = 0 ;
    int num1 ;
    int num2; 
    int sum;
    char buffer ; 
    for(int i = 0 ; i <file_size ; i++){
         num1= (int)file[i];
         num2 = (int)seed[seed_index];
         while(num2 > 0 ){
             num1+=1;
             num2-=1;
            
             if(num1  >126) num1 = 32;
         }
         buffer = (char)num1;
         file[i] =buffer;
        
        if(seed_index+1 >= seed_size){
            seed_index = 0;
        }else{
            seed_index++;
        }
        
    
    }
}

int main(int argc , char* argv[]){
    
    encrypt(argv[1] , argv[2]);
     
    printf("%s\n" , argv[2]);
    
}
