

int fibonacciSequence(int iterations){
    int a = 0;
    int b = 1;
    int c = 0;
    
    for(int i = 0; i < iterations - 1; i++){
        c = a;
        a += b;
        b = c;
        printf("\n%d", a);
    }
    
    
}
