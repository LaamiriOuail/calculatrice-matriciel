#include <iostream>
#include <string.h>
#include <math.h>
#include<cstdlib>
using namespace std;

float T[10],Z[10],s=0,p=1,d,maxi=T[0],mini=T[0];
int i,lenght,k=0,j=0;
char symbole;
//Equation de deuxieme degre
void Eq2(){
                    cout<<"aX^2+bX+c=0"<<endl;
                    cout<<"a= ";cin>>T[0];
                    cout<<"b= ";cin>>T[1];
                    cout<<"c= ";cin>>T[2];
                    if(T[0]==0) {
                            if(T[1]==0) cout<<"Cette Equation n'est pas de deuxieme ordre car a=0 et b=0 !!!"<<endl;
                            else {
                                cout<<"Cette Equation de premier ordre car a=0 !!!"<<endl;
                                cout<<"X = "<<(double)(-T[2])/T[1]<<endl;
                            }
                    }
                    else {
                        d=T[1]*T[1]-4*T[0]*T[2];
                        if(d==0) cout<<"X= "<<(double)(-T[1])/(2*T[0])<<endl;
                        else if(d>0) cout<<"X1= "<<(double)(-T[1]+sqrt(d))/2*T[0]<<" et "<<"X2= "<<(double)(-T[1]-sqrt(d))/2*T[0]<<endl;
                        else cout<<"X1= "<<(double)(-T[1])/2*T[0]<<"+"<<(double)sqrt(-d)/2*T[0]<<"i"<<" et "<<"X2= "<<(double)(-T[1])/2*T[0]<<"-"<<(double)sqrt(-d)/2*T[0]<<"i"<<endl;
                    }
}
//Equation de premiere degre
void Eq1(){
                    cout<<"aX+b=c"<<endl;
                    cout<<"a= ";cin>>T[0];
                    cout<<"b= ";cin>>T[1];
                    cout<<"c= ";cin>>T[2];
                    if(T[0]==0) cout<<"Cette Equation n'est pas de premiere ordre car a=0 !!!"<<endl;
                    else cout<<"X = "<<(double)(T[2]-T[1])/T[0]<<endl;
}
//Pair ou impaire
void paire(){
            cout<<"Entrez le numero : ";
            cin>>T[0];
            if((int)T[0]%2==0) cout<<T[0]<<" est Pair"<<endl;
            else cout<<T[0]<<" est impair"<<endl;
}
//Produit
void produit(){
    cout<<"Quel est le nombre d'entrees : ";
             cin>>lenght;
             cout<<"\n";
             for(i=0;i<lenght;i++){
             cout<<"Entrez le numero "<<i+1<<" : ";
             cin>>T[i];
            }
            for(i=0;i<lenght;i++) {
                    p*=T[i];
                    (i==lenght-1)?cout<<T[i]<<" = ":cout<<T[i]<<" * ";
            }
            cout<<p<<endl;
}
//PGCD deux nombre
int pgcd(int a, int b){
    int r=-1,m;
    if(a<b){
        m=a;a=b;b=m;
    }
    if(a==0 && b==0) return 0;//pgcd(a,a)=a
    else if((a==0 && b!=0)||(b==0 && a!=0)) return 0;
    else{
        while(r!=0){
        r=a%b;
        a=b;
        b=r;
        }
        return a;
    }
}
//Maximum de trois numbers
 void maxi3(){
               for(i=0;i<3;i++){
                    cout<<"Entrez le numero "<<i+1<<" : ";
                    cin>>T[i];
                }
                if(T[1]>maxi) maxi=T[1];
                if(T[2]>maxi) maxi=T[2];
                cout<<"max( "<<T[0]<<" , "<<T[1]<<" , "<<T[2]<<" ) ="<<maxi<<endl;
}
//Division
void division(){
    for(i=0;i<2;i++){
          cout<<"Entrez le numero : ";
          cin>>T[i];
                }
    if(T[1]!=0){
          d=(double) T[0]/T[1];
          cout << T[0]<<" / = "<<T[1]<<" = "<<d<<endl;
          }
   else cout<<"Diviser par zéro est impossible."<<endl;
}

//Maximum de deux numbers
void maxi2(){
               for(i=0;i<2;i++){
                    cout<<"Entrez le numero : ";
                    cin>>T[i];
                }
                if(T[0]>T[1]) cout<<"max( "<<T[0]<<" , "<<T[1]<<" = "<<T[0]<<endl;
                else cout<<"max( "<<T[0]<<" , "<<T[1]<<" = "<<T[1];
}

//Mininmum de deux numbers
void mini2(){
                for(i=0;i<2;i++){
                    cout<<"Entrez le numero "<<i+1<<" : ";
                    cin>>T[i];
                }
                if(T[0]>T[1]) cout<<"min( "<<T[0]<<" , "<<T[1]<<" = "<<T[1]<<endl;
                else cout<<"min( "<<T[0]<<" , "<<T[1]<<" = "<<T[0];
                }
//Somme
void somme(){
    cout<<"Quel est le nombre d'entrees : ";
            cin>>lenght;
            cout<<"\n";
            for(i=0;i<lenght;i++){
            cout<<"Entrez le numero "<<i+1<<" : ";
            cin>>T[i];
            }
            for(i=0;i<lenght;i++) {
                    s+=T[i];
                    (i==lenght-1)?cout<<T[i]<<" = ":cout<<T[i]<<" + ";
            }
            cout<<s<<endl;
}
//Factoriel
        void factoriel(){
            cout<<"Entrez le numero : ";
            cin>>T[0];
            for(i=p;i<=T[0];i++) p*=i;
            cout<<T[0]<<"! = "<<p<<endl;
            }
//Minimum de trois numbers
void mini3(){
           for(i=0;i<3;i++){
                    cout<<"Entrez le numero : ";
                    cin>>T[i];
                }
                if(T[1]<mini) mini=T[1];
                if(T[2]<mini) mini=T[2];
                cout<<"mini( "<<T[0]<<" , "<<T[1]<<" , "<<T[2]<<" ) ="<<mini<<endl;
}
//Nombre Premier
void premiere(){
    cout<<"Entrez le numero : ";
    cin>>T[0];
    i=3;
    if(T[0]==2) cout <<"2 est un nombre premier";
    else if((int)T[0]%2==0) cout<<T[0]<<" Pas un nombre premier ";
    else{
    while(i<T[0]){
    if((int)T[0]%i==0){
    cout<<T[0]<<" Pas un nombre premier ";
    k=1;
    break;
    }
    i=i+2;
    }
    if(k==0) cout<<T[0]<<" est un nombre premier ";
}
}
//Sustraction
void Sustraction(){


    cout<<"Quel est le nombre d'entrees : ";
        cin>>lenght;
        cout<<"\n";
        for(i=0;i<lenght;i++){
        cout<<"Entrez le numero "<<i+1<<" : ";
        cin>>T[i];
        }
            s=T[0];
            cout<<T[0]<<" - ";
            for(i=1;i<lenght;i++) {
                    s-=T[i];
                    (i==lenght-1)?cout<<T[i]<<" = ":cout<<T[i]<<" - ";
            }
            cout<<s<<endl;
}
//Lire un Matrice 2*2
void lire2(float M[]){
    cout<<"Entre l'element 1,1 : ";cin>>M[0];
    cout<<"Entre l'element 1,2 : ";cin>>M[1];
    cout<<"Entre l'element 2,1 : ";cin>>M[2];
    cout<<"Entre l'element 2,2 : ";cin>>M[3];
}
//Lire un Matrice 3*3
void lire3(float M[]){
    cout<<"Entre l'element 1,1 : ";cin>>M[0];
    cout<<"Entre l'element 1,2 : ";cin>>M[1];
    cout<<"Entre l'element 1,3 : ";cin>>M[2];
    cout<<"Entre l'element 2,1 : ";cin>>M[3];
    cout<<"Entre l'element 2,2 : ";cin>>M[4];
    cout<<"Entre l'element 2,3 : ";cin>>M[5];
    cout<<"Entre l'element 3,1 : ";cin>>M[6];
    cout<<"Entre l'element 3,2 : ";cin>>M[7];
    cout<<"Entre l'element 3,3 : ";cin>>M[8];

}
//Affichage 3*3
void afichage3(float M[]){
    cout<<"| "<<M[0]<<"  "<<M[1]<<"  "<<M[2]<<" |"<<endl;
    cout<<"| "<<M[3]<<"  "<<M[4]<<"  "<<M[5]<<" |"<<endl;
    cout<<"| "<<M[6]<<"  "<<M[7]<<"  "<<M[8]<<" |"<<endl;
}
//Affichage 2*2
void afichage2(float M[]){
    cout<<"| "<<M[0]<<" "<<M[1]<<" |"<<endl;
    cout<<"| "<<M[2]<<" "<<M[3]<<" |"<<endl;
}
//Determinant 2*2
void determninant2(float M[]){
    d=M[0]*M[3]-M[2]*M[1];
    cout<<"determinant = "<<d<<endl;
}
//Determinant 2*2 qui return la valeur
float determninant22(float M[]){
    d=M[0]*M[3]-M[2]*M[1];
    return d;
}
//Determinant 2*2 qui return la valeur
float determninant222(float x,float y,float z,float t){
    d=x*t-z*y;
    return d;
}
//Determinant 3*3
void determninant3(float M[]){
    d=M[0]*M[4]*M[8]+M[1]*M[5]*M[6]+M[2]*M[3]*M[7]-M[6]*M[4]*M[2]-M[7]*M[5]*M[0]-M[8]*M[3]*M[1];
    cout<<"determinant = "<<d<<endl;
}
//Determinant 3*3
float determninant33(float M[]){
    d=M[0]*M[4]*M[8]+M[1]*M[5]*M[6]+M[2]*M[3]*M[7]-M[6]*M[4]*M[2]-M[7]*M[5]*M[0]-M[8]*M[3]*M[1];
    return d;
}
//inverse 2*2
void inverse2(float M[]){
    if(determninant22(M)==0) cout<<"Cette Matrice n'admet pas un inverse car la determinant est null"<<endl;
    else{
      cout<<"            | "<<M[3]<<" "<<-M[1]<<" |"<<endl;
    cout<<"inverse = "<<determninant22(M)<<"|      |"<<endl;
    cout<<"            | "<<-M[2]<<" "<<M[0]<<" |"<<endl;
    }
}
//Traspose 3*3
void transpose3(float M[]){
    float N[9];
    N[0]=M[0];N[4]=M[4];N[8]=M[8];N[3]=M[1];N[5]=M[7];N[2]=M[6];N[1]=M[3];N[6]=M[2];N[7]=M[5];
    cout<<"Transpose = "<<endl;
    afichage3(N);
}
//Trabspose 2*2
void transpose2(float M[]){
    float K[4];
    K[0]=M[0];K[3]=M[3];K[1]=M[2];K[2]=M[1];
    cout<<"Transpose = "<<endl;
    afichage2(K);
}
//Produit de deux matrice 2*2
void produit2(float M[],float N[]){
    cout<<"            | "<<M[0]*N[0]+M[1]*N[2]<<" "<<M[0]*N[1]+M[1]*N[3]<<" |"<<endl;
    cout<<"produit =   "<<"|     |"<<endl;
    cout<<"            | "<<M[2]*N[0]+M[3]*N[2]<<" "<<M[2]*N[1]+M[3]*N[3]<<" |"<<endl;
}
//comatrice d'un matrice
void comatrice3(float M[]){
    float K[9];
    K[0]=determninant222(M[4],M[5],M[7],M[8]);
    K[1]=-determninant222(M[3],M[5],M[6],M[8]);
    K[2]=determninant222(M[3],M[4],M[6],M[7]);
    K[3]=-determninant222(M[1],M[2],M[7],M[8]);
    K[4]=determninant222(M[0],M[2],M[6],M[8]);
    K[5]=-determninant222(M[0],M[1],M[6],M[7]);
    K[6]=determninant222(M[1],M[2],M[4],M[5]);
    K[7]=-determninant222(M[0],M[2],M[3],M[5]);
    K[8]=determninant222(M[0],M[1],M[3],M[4]);
    cout<<"            | "<<K[0]<<" "<<K[1]<<" "<<K[2]<<" |"<<endl;
    cout<<"Comatrice = | "<<K[3]<<" "<<K[4]<<" "<<K[5]<<" |"<<endl;
    cout<<"            | "<<K[6]<<" "<<K[7]<<" "<<K[8]<<" |"<<endl;
}
//Inverse d'un matrice 3*3
void inverse3(float M[]){
    float K[9],N[9];
    if(determninant33(M)==0) cout<<"Cette Matrice n'admet pas un inverse car la determinant est null"<<endl;
    else{
    K[0]=determninant222(M[4],M[5],M[7],M[8]);
    K[1]=-1*determninant222(M[3],M[5],M[6],M[8]);
    K[2]=determninant222(M[3],M[4],M[6],M[7]);
    K[3]=-1*determninant222(M[1],M[2],M[7],M[8]);
    K[4]=determninant222(M[0],M[2],M[6],M[8]);
    K[5]=-1*determninant222(M[0],M[1],M[6],M[7]);
    K[6]=determninant222(M[1],M[2],M[4],M[5]);
    K[7]=-1*determninant222(M[0],M[2],M[3],M[5]);
    K[8]=determninant222(M[0],M[1],M[3],M[4]);
    N[0]=K[0];N[4]=K[4];N[8]=K[8];N[3]=K[1];N[5]=K[7];N[2]=K[6];N[1]=K[3];N[6]=K[2];N[7]=K[5];
    cout<<"            | "<<N[0]<<" "<<N[1]<<" "<<N[2]<<" |"<<endl;
    cout<<"inverse=1/"<<determninant33(M)<<"| "<<N[3]<<" "<<N[4]<<" "<<N[5]<<" |"<<endl;
    cout<<"            | "<<N[6]<<" "<<N[7]<<" "<<N[8]<<"  |"<<endl;
    }
}
//Produit de deux matrice 3*3
void produit3(float M[],float N[]){
    cout<<"            | "<<M[0]*N[0]+M[1]*N[3]+M[2]*N[6]<<" "<<M[0]*N[1]+M[1]*N[4]+M[2]*N[7]<<" "<<M[0]*N[2]+M[1]*N[5]+M[2]*N[8]<<" |"<<endl;
    cout<<"produit =   | "<<M[3]*N[0]+M[4]*N[3]+M[5]*N[6]<<" "<<M[3]*N[1]+M[4]*N[4]+M[5]*N[7]<<" "<<M[3]*N[2]+M[4]*N[5]+M[5]*N[8]<<" |"<<endl;
    cout<<"            | "<<M[6]*N[0]+M[7]*N[3]+M[8]*N[6]<<" "<<M[6]*N[1]+M[7]*N[4]+M[8]*N[7]<<" "<<M[6]*N[2]+M[7]*N[5]+M[8]*N[8]<<" |"<<endl;
}
//Syntaxe d'un matrice 2*2
void syntax2(){
    cout<<"|  1,1"<<" 1,2"<<" |"<<endl;
    cout<<"|  2,1"<<" 2,2"<<" |"<<endl;
    }
//Somme de deux matrice 2*2
void Somme2(float M[],float N[]){
    float K[4];
    for(int i=0;i<4;i++) K[i]=M[i]+N[i];
    cout<<"            | "<<K[0]<<" "<<K[1]<<" |"<<endl;
    cout<<"Somme   =   "<<"|     |"<<endl;
    cout<<"            | "<<K[2]<<" "<<K[3]<<" |"<<endl;
}
//Comatrice 2*2
void comatrice2(float M[]){
    cout<<"                | "<<M[3]<<" "<<-1*M[2]<<" |"<<endl;
    cout<<"Comatrice   =   "<<"|      |"<<endl;
    cout<<"                | "<<-1*M[1]<<" "<<M[0]<<" |"<<endl;
}
//Syntaxe des matrice 3*3
void syntax3(){
    cout<<"|  1,1"<<" 1,2"<<" 1,3"<<" |"<<endl;
    cout<<"|  2,1"<<" 2,2"<<" 2,3"<<" |"<<endl;
    cout<<"|  3,1"<<" 3,2"<<" 3,3"<<" |"<<endl;
}
//Somme de deux matrice 3*3
void Somme3(float M[],float N[]){
    float K[9];
    for(int i=0;i<9;i++) K[i]=M[i]+N[i];
    cout<<"            | "<<K[0]<<" "<<K[1]<<" "<<K[2]<<" |"<<endl;
    cout<<"Somme   =   | "<<K[3]<<" "<<K[4]<<" "<<K[5]<<" |"<<endl;
    cout<<"            | "<<K[6]<<" "<<K[7]<<" "<<K[8]<<" |"<<endl;
}
//Power
int power1(int A,int B){
    int p=1;
        if(A==0 && B==0) return -1;
        else{
            for(int i=0;i<B;i++) p*=A;
        return p;
        }
}
//Liste des Caractere d'operation
void liste(){
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"                           Liste des Operateurs"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<" + : Somme ex: a+b+c+d... "<<endl;
    cout<<" - : Sustraction ex: a-b-c-d..."<<endl;
    cout<<" * : Produit ex:a*b*c*d..."<<endl;
    cout<<" / : division ex: a/b (2 Entree!!!)"<<endl;
    cout<<" ! : Factoriel a*(a-1)(a-2)...*1=a!(Un seul Entre !!!)"<<endl;
    cout<<" % : Modulas ex:a=b*q+r ,r: modulas (2 Entre !!!)"<<endl;
    cout<<" ^ : power ex:a^b (2 Entre !!!)"<<endl;
    cout<<" 1 : Resoudre equations de premiere degre ex: ax+b=c (3 Entre )"<<endl;
    cout<<" 2 : Resoudre equation de deuxieme degre : ax^2+bx+c=0 (3 Entre ) "<<endl;
    cout<<" ? : Pair ou impair (Un seul Entre !!!)"<<endl;
    cout<<" p : nombre premier ? (Un seul Entre !!!)"<<endl;
    cout<<" P : calculer le Pgcd de deux nombre"<<endl;
    cout<<" n : minimum de trois numbers (3 Entre ) "<<endl;
    cout<<" x : maximum de trois numbers (3 Entre ) "<<endl;
    cout<<" N : minimum de deux numbers (2 Entre ) "<<endl;
    cout<<" X : maximum de deux numbers (2 Entre )"<<endl;
    cout<<" t : Transpose d'un matrice type : 2*2 "<<endl;
    cout<<" T : Transpose d'un matrice type : 3*3 "<<endl;
    cout<<" d : Determinant d'un matrice type : 2*2 "<<endl;
    cout<<" D : Determinant d'un matrice type : 3*3 "<<endl;
    cout<<" i : Inverse d'un matrice type : 2*2 "<<endl;
    cout<<" I : Inverse d'un matrice type : 3*3 "<<endl;
    cout<<" C : Comatrice d'un matrice 3*3 "<<endl;
    cout<<" c : Comatrice d'un matrice 2*2 "<<endl;
    cout<<" q : Produit de deux Matrice type : 2*2 "<<endl;
    cout<<" Q : Produit de deux Matrice type : 3*3 "<<endl;
    cout<<" s : Somme de deux Matrice type : 2*2 "<<endl;
    cout<<" S : Somme de deux Matrice type : 3*3 "<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
}
void swith(char code){
    switch(code){
//Somme
        case '+':
            somme();
            break;
//sustraction
        case '-':
            Sustraction();
            break;
//Produit
        case '*':
             produit();
            break;
//Factoriel
        case '!':
            factoriel();
           break;
//Pair ou impair
        case '?':
            paire();
            break;
//Primary numbers
           case 'p':
           premiere();
           break;
//Division
      case '/':
                division();
       break;
//Power
      case '^':
        cout<<"Enter le prmrmier nombre : ";cin>>T[0];
        cout<<"Enter le deuxieme nombre : ";cin>>T[1];
        if(power1(T[0],T[1])!=-1) cout<<"power ("<<T[0]<<" , "<<T[1]<<" )= "<<power1(T[0],T[1])<<endl;
        else cout<<"impossible 0^0 "<<endl;
        break;
//Minimum de trois numbers
       case 'n':
                mini3();
                break;
//Maximum de trois numbers
       case 'x':
                maxi3();
                break;
//Maximum de deux numbers
       case 'X':
                maxi2();
        break;
//Mininmum de deux numbers
       case 'N':
        mini2();
        break;
//Equation de premiere ordre
       case '1':
           Eq1();
           break;
//Equation de deuxieme ordre
       case '2':
           Eq2();
           break;
//Determinant d'un matrice 2*2
       case 'd':
           syntax2();
           lire2(T);
           afichage2(T);
           determninant2(T);
           break;
//Determinant d'un matrice 3*3
       case 'D':
           syntax3();
           lire3(T);
           afichage3(T);
           determninant3(T);
           break;
//inverse d'un matrice 2*2
        case 'i':
            syntax2();
           lire2(T);
           afichage2(T);
           inverse2(T);
           break;
//Produit de deux Matrice 2*2
        case 'q':
            syntax2();
            cout<<"Entre les element de la premiere matrice : "<<endl;
            lire2(T);
            afichage2(T);
            cout<<"Entre les element de la deuxieme matrice : "<<endl;
            lire2(Z);
            afichage2(Z);
            produit2(T,Z);
            break;
//Produit de deux Matrice 3*3
        case 'Q':
            syntax3();
            cout<<"Entre les element de la premiere matrice : "<<endl;
            lire3(T);
            afichage3(T);
            cout<<"Entre les element de la deuxieme matrice : "<<endl;
            lire3(Z);
            afichage3(Z);
            produit3(T,Z);
            break;
//Somme de deux matrice 2*2
        case 's':
            syntax2();
            cout<<"Entre les element de la premiere matrice : "<<endl;
            lire2(T);
            afichage2(T);
            cout<<"Entre les element de la deuxieme matrice : "<<endl;
            lire2(Z);
            afichage2(Z);
            Somme2(T,Z);
            break;
//Somme de deux matrice 3*3
        case 'S':
            syntax3();
            cout<<"Entre les element de la premiere matrice : "<<endl;
            lire3(T);
            afichage3(T);
            cout<<"Entre les element de la deuxieme matrice : "<<endl;
            lire3(Z);
            afichage3(Z);
            Somme3(T,Z);
            break;
//Transpose d'un matrice 3*3
        case 'T':
            syntax3();
            cout<<"Entre les element de la matrice : "<<endl;
            lire3(T);
            afichage3(T);
            transpose3(T);
            break;
//Transpose d'un matrice 2*2
        case 't':
            syntax2();
            cout<<"Entre les element de la matrice : "<<endl;
            lire2(T);
            afichage2(T);
            transpose2(T);
            break;
//Comatrice 3*3
        case 'C':
            syntax3();
            cout<<"Entre les element de la matrice : "<<endl;
            lire3(T);
            afichage3(T);
            comatrice3(T);
            break;
//Comatrice 3*3
        case 'c':
            syntax2();
            cout<<"Entre les element de la matrice : "<<endl;
            lire2(T);
            afichage2(T);
            comatrice2(T);
            break;
//inverse d'un matrice 3*3
        case 'I':
           syntax3();
           cout<<"Entre les element de la matrice : "<<endl;
           lire3(T);
           afichage3(T);
           inverse3(T);
           break;
// Pgcd de deux nombre
        case 'P':
            int a,b;
            cout<<"Entrer le premier nombre : ";cin>>a;
            cout<<"Entree le deuxieme nombre : ";cin>>b;
            cout<<"Pgcd("<<a<<" , "<<b<<") = "<<pgcd(a,b)<<endl;
            break;
        default : cout << "Cette operation n'exist pas !!!"<<endl;
           }
}



int main()
{
    char choix;
    do{
    	cout<<"\n\n";
    	cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"                         Liste des choix"<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"1-Liste des caracteres"<<endl;
        cout<<"2-Operation"<<endl;
        cout<<"3-Exit"<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Entrer leur choix : ";
        cin>>choix;
        system("cls");
        if(choix=='1') liste();
        else if(choix=='2') {
            cout<<"Entrez le symbole d'operation : ";
            cin>>symbole;
            swith(symbole);
        }
        else if(choix=='3') cout<<"Bonne Chance"<<endl;
        else cout<<"Entre un nombre existe dans Les choix"<<endl;
    }while(choix!='3');

    return 0;
}
