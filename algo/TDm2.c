#include <stdio.h>
#include <stdlib.h>


// exercice 1 

void affiche_tab(double t[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%lf\n",t[i]);
    }
}
//int main(){
    //double test[5] = {1.0,2.0,3.0,4.0,5.0};
    //affiche_tab(test, 5);

    //return 0;
//}

// exercice 2 

double* raz(double t[], int n){
    int i; 
    for (i = 0; i < n; i++){
        t[i]= 0.0;
        printf("%f\n",t[i]);
    }
    
    return t; 
}

//int main(){
  //  double test[3] = {1.0,1.0,1.0};
    //raz(test,3);

    //return 0;
//}
 

 // exercice 3

 double* remplit_alea (double t[], int n){
    int i; 
    for (i = 0; i < n; i++){
        t[i] = (double)rand() / RAND_MAX;
        printf("%lf\n", t[i]);
    }
    return t;
 }

//int main(){
 //   double test[5] = {1.0,2.0,3.0,4.0,5.0};
   // remplit_alea(test,5);

    //return 0;
//}



// exercice 4

double* remplit_trie (double t[], int n){
    int i;
    t[0] = (double)rand() / RAND_MAX;
    for (i = 0; i < n; i++){
        t[i] = t[i-1] + (double)rand() / RAND_MAX;
        printf("%lf\n", t[i]);
    }
    return t;
}

//int main(){
//  double test[5] = {1.0,2.0,3.0,4.0,5.0};
  //  remplit_trie(test,5);
    //return 0;
//}


// exercice 9 

double valeur_plus_grand (double t[], int n){
    int i; 
    for (i = 0; i < n; i++){
        if (t[i]> t[i-1]){
            t[i]= t[i-1];
        }
        printf("%lf\n", t[i]);
    }
    return ;
}

int main(){
    
}