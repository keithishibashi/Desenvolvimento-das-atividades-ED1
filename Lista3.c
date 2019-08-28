
typedef struct potencia(int a,int b){

    int *res= a;
    if(int i=0;i>b;i++){
        res=res*b;
    }
    return  res;
}Potencia;

int main(){

    int res;
    res = Potencia(2,2);
    printf("%d/n",res);

}
