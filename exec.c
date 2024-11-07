#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if (pid == 0){
        printf("Soy el hijo \n");
        execl("./hola","hola","cesar","moran","macias", (char *)NULL);
        printf("ESTA LINEA NO DEBE EJECUTARSE");
    }
    printf("Soy el proceso padre\n");

    return 0;
}