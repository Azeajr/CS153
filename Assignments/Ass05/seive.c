int seivePhi(int n){
    int i,n;
    int primes[10000];
    
    for(i=0;i<target;i++){
        primes[i]=1;
    }

    for(i=0;i<target;i++){
        if(primes[i]){
            n=i+2;
            for(int j=n*n;j<target+2;j+=n){
                primes[j-2]=0;
            }
        }
    }

    double total=target;
    
    for(i=0;i<target;i++){
        if(primes[i] && target%(i+2)==0){
            total*=1-(1.0/(i+2));
        }
    }
    return (int)total;
}       