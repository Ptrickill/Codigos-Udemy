int sumar(int num1, int num2){
    return num1+num2;
}
int restar(int num1, int num2){
    return num1-num2;
}
int multiplicar(int num1, int num2){
    return num1 *num2;
}
int dividir(int num1, int num2){
    if(num2==0){
        return 0;
    }
    else{
        return (float) num1/num2; 
    }
}