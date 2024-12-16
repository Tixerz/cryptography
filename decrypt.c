#include <stdio.h>

int count(char* str){
    int num = 0;
    
    while(str[num]!='\0'){
        num++;
    }
    return num;
}
void decrypt(char* pass  , char* file){
    int pass_size = count(pass) ;
    int file_size = count(file); 
    int pass_index = 0;
    int num1;
    int num2;
    char buffer ;
    int diff = 0;
    int temp;
    for(int i=0 ; i<file_size ; i++){
        //handle the index of pass index on each time 
        num1 =(int)file[i];
        num2 = (int)pass[pass_index];
        
        num1 = num1 -31 ;
        num2 = 126 - num2;
        temp = (num2 + num1) ;
        if(temp<32)temp=95+temp;
        buffer = (char)temp;
        file[i] = buffer;
        //handle the index of passwd index
        pass_index++;
        if(pass_index ==pass_size)pass_index = 0;
    }
}
int main(int argc , char* argv[]){ 
    decrypt(argv[1] , argv[2]);
    printf("%s\n" , argv[2]);
    
}
