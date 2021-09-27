#include <stdio.h>

/*int exo1() {
    int a = 0, b = 0;
    printf("Saisissez un entier :\n", a );
    scanf("%d", &a );
    printf("saisissez un entier :\n", b );
    scanf("%d", &b );
    if (a<b){
        printf("le plus grand nombre est %d", b );
    }
    else{
        printf("le plus grand nombre est %d", a );

    }
}*/

/*int main(){
    int largeur = 0, longueur = 0;
    printf("saisir la largeur", largeur);
    scanf("%d", &largeur );
    printf("saisir la longueur", longueur);
    scanf("%d", &longueur );
    printf("le perimetre est %d et l'aire est %d", (longueur+largeur)*2, longueur*largeur);
    return 0;
}*/



/*int main(){
    int a = 0;
    printf("Saisissez un entier:\n", a );
    scanf("%d", &a );
    if (a % 3 == 0){
    printf("%d est un multiple de 3", a );
    }
    else{
        printf("%d n'est pas un multiple de 3", a );
    }
    if (a<10){
        printf(" %d est inferieur a 10", a );
    }
    else{
        printf(" %d est superieur a 10", a );

    }
}*/

/*int main(void){
    int age = 0, etudiant = 0;
    printf("saisissez votre age:\n", age );
    scanf("%d", &age);
    printf("1 si vous etes etudiants et que vous avez moins de 27 ans, sinon 0:\n");
    scanf("%d", &etudiant);

    if (age < 12){
        printf("Le tarif est de 4 euros");
    }
    else if ( ( age <= 17) || (age > 65) || (etudiant == 1)){
        printf("le tarif est de 6 euros");
    }
    else{
        printf("Le tarif est de 9 euros");
    }
}/*

/*int main(void){
    int a = 0;
    printf(" quel est votre choix:\n", a );
    scanf("%d", &a );
    switch (a){
        case 1:
        case 2:
        case 3:
        {
            printf ("vous avez choisi une boissons fraiche");
            break;
        }
        case 10:
        case 11:{
            printf("vous avez choisi une boisson chaude");
            break;
        }
        default:
            printf("cette boisson n'existe pas");
            break;
    }

}*/

/*int main(void){
    float a = 0.0f, b = 0.0f, c = 0.0f;
    printf("Saisir la première note:\n", a);
    scanf("%f", &a );
    printf("saisir la deuxieme note:\n", b);
    scanf("%f", &b);
    printf("saisir la derniere note:\n", c);
    scanf("%f", &c);
    if ((0.0f < a < 20.0f) && (0.0f < b < 20.0f) && (0.0f < c < 20.0f)){
        printf("la moyenne est %f", ((a+b+c) / 3.0f) );
    }
    else{
        printf("la note n'est pas comprise entre 0 et 20");
    }
}*/

/*int main(void){
    int nbclasse = 0, a = 0, b =0, somme = 0;
    printf("saisir le nombre de classe:\n", nbclasse );
    scanf("%d", &nbclasse);
    while (a < nbclasse){
        (a = a + 1);
        printf("saisir le nombre de personne dans la classe:\n", b );
        scanf("%d", &b);
        somme = somme + b;
    }
    printf("le nombre total est %d", somme);

}*/

/*int main(void) {
    int nbEntier = 0;
    printf("saisir un nombre entier:\n", nbEntier);
    scanf("%d", &nbEntier);
    while (!(nbEntier % 2 == 0) && !(nbEntier % 7 == 0)) {
        printf("resaisir un nombre", nbEntier);
        scanf("%d", nbEntier);
    }

    printf("le nombre est un multiple de 2 et 7");
}*/

int main(void){
    int nbpierre = 0, nbetages = 0, n=0;
    printf("Saisir le nombre de pierre", nbpierre);
    scanf("%d", nbpierre);
    while ( nbpierre > n*n){
        
    }
}
