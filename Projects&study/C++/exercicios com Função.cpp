#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
//Ex-01
int sobrenome(string x)
{
    int cont=0;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ||
           x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U')
        {
            cont++;
        }
    }
    return cont;
}
//Ex-02
void vetork(void)
{
    int n[5];
    int k;
    cin>>k;
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"n["<<i<<"] * "<<k<<" = "<<n[i]*k<<endl;
    }
    
}
//EX-03
string concatenar(string a,string b)
{
    string c;
    c=a+b;
    return c;
}
//EX-04
string maiuscula(string a)
{
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    return a;
}
//EX-05
void rotacao()
{
    vector<int> v(10);
    int N;

    
    cout << "Digite 10 numeros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    
    cout << "Digite N (quantidade de rotacoes): ";
    cin >> N;

    
    N = N % 10;

    
    vector<int> resultado(10);

    
    for (int i = 0; i < 10; i++) {

        int novaPos = (i + N) % 10;
        resultado[novaPos] = v[i];
    }

    cout << "Vetor rotacionado: ";
    for (int i = 0; i < 10; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;
}
//EX-06
string removerC(string frase, char c)
{
    int j=0;
    for(int i=0;i<frase.size();i++)
    {
        if(frase[i]!=c)
        {
            frase[j]=frase[i];
            j++;
        }
    }
    frase.resize(j);
    return frase;
}
//EX-07
int contador(string palavra)
{
    int cont=1;
    for(int i=0;i<palavra.size();i++)
    {
        if(palavra[i]==' ')
        {
            cont++;
        }
    }
    return cont;
}

//EX-08

void doisvetores()
{
    vector<int> A(10), B(10), C(20);

    
    cout << "Digite 10 valores para o vetor A:\n";
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    
    cout << "Digite 10 valores para o vetor B:\n";
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }

    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    
    for (int i = 0; i < 10; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < 10; i++) {
        C[i + 10] = B[i];
    }

    
    sort(C.begin(), C.end());

    
    cout << "Vetor C (20 valores em ordem crescente):\n";
    for (int i = 0; i < 20; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

//EX-09

string criptografia(string g)
{
    for (int i = 0; i <g.size(); i++) {

        
        if (g[i] == 'z') {
            g[i] = 'a';
        }
        
        else {
            g[i] = g[i] + 1;
        }
    }
    return g;
}

//Ex-10

string senhaforte(string senha)
{
    bool temNumero = false;
    bool temMaiuscula = false;

    for (char c : senha) {
        if (c >= '0' && c <= '9')
            temNumero = true;

        if (c >= 'A' && c <= 'Z')
            temMaiuscula = true;
    }

    
    if (senha.size() >= 8 && temNumero && temMaiuscula) {
        senha = "senha forte!";
        return senha;
    } else {
        senha = "senha fraca!";
        return senha;
    }
}

//Ex-11

int vectortam(int p)
{
    vector<int> v(p);

    cout << "Digite os valores:\n";
    for (int i = 0; i < p; i++) {
        cin >> v[i];
    }

    
    int maior = 0;
    int segundoMaior = 0;

    for (int x : v) {
        if (x > maior) {
            segundoMaior = maior;
            maior = x;
        }
        else if (x > segundoMaior && x < maior) {
            segundoMaior = x;
        }
    }
    return segundoMaior;
}

//Ex-12

void compressao()
{
    string s;
    cout << "Digite a string: ";
    getline(cin, s);

    string comprimida = "";
    int count = 1;

    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == s[i - 1]) {
            count++;
        } else {
            
            comprimida += s[i - 1];
            comprimida += to_string(count);
            count = 1;
        }
    }

    if (comprimida.size() >= s.size()) {
        cout << "Resultado: " << s << endl;
    } else {
        cout << "Resultado: " << comprimida << endl;
    }
}

//Ex-13

int padronizado(string txt, string padrao)
{
    int idx = -1;

    for (int i = 0; i <= txt.size() - padrao.size(); i++) {
        bool ok = true;
        for (int j = 0; j < padrao.size(); j++) {
            if (txt[i + j] != padrao[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            idx = i;
            break;
        }
    }
    return idx;

}

//Ex-14

int somamenos(int n)
{
    vector<int> v(n);
    cout << "Digite os valores: "<<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = n - 1;
    int melhorSoma = 1e9;
    int a = v[0], b = v[n - 1];

    while (i < j) {
        int soma = v[i] + v[j];

        if (abs(soma) < abs(melhorSoma)) {
            melhorSoma = soma;
            a = v[i];
            b = v[j];
        }

        if (soma > 0)
            j--;
        else
            i++;
    }
    cout << "Par mais proximo de zero: " << a << " e " << b << endl;
    cout << "Soma: " << melhorSoma << endl;
}

//Ex-15

string prefixo()
{
    string a, b, c;
    cout << "Digite a primeira string: ";
    cin >> a;
    cout << "Digite a segunda string: ";
    cin >> b;
    cout << "Digite a terceira string: ";
    cin >> c;

    string prefixo = "";
    int tamanhoMin = min({a.size(), b.size(), c.size()});

    for (int i = 0; i < tamanhoMin; i++) {
        if (a[i] == b[i] && a[i] == c[i])
        {
            prefixo += a[i];
        }  
        else
        {
           i=tamanhoMin;
        }
            
    }
    return prefixo;
}

int main()
{
    string Vogal;
    cin>>Vogal;
    sobrenome(Vogal);
    cout<<"Numero de vogais: "<<sobrenome(Vogal)<<endl;
    //---------------EX-02----------------
    
    vetork();

    //---------------EX-03----------------

    string a,b;
    cout<<"Leia A:"<<endl;
    getline(cin,a);
    cout<<"Leia B:"<<endl;
    getline(cin,b);
    concatenar(a,b);
    cout<<"as duas juntas: "<<concatenar(a,b)<<endl;

    //---------------EX-04----------------

    getline(cin,a);
    maiuscula(a);
    cout<<"Cnvertido: "<<maiuscula(a)<<endl;

    //---------------EX-05----------------

    rotacao();

    //---------------EX-06----------------

    string frase;
    char c;
    cout<<"Digite uma frase: ";
    cin>>frase;
    cout<<"Digite um caractere para remover: ";
    cin>>c;
    removerC(frase,c);
    cout<<"Frease modificada: "<<removerC(frase,c)<<endl;

    //---------------Ex-07----------------

    string palavra;
    cout<<"Digite uma(s) palavra(s): ";
    getline(cin,palavra);

    contador(palavra);
    cout<<"exite(m): "<<contador(palavra)<<"palavra(s)"<<endl;

    //---------------Ex-08-----------------

    doisvetores();

    //---------------Ex-09-----------------

    string g;

    cout<<"Digite alguma coisa: "<<endl;
    getline(cin,g);

    criptografia(g);
    cout<<"string criptografada: "<<criptografia(g)<<endl;

    //----------------Ex-10-----------------

    string senha;
    cout<<"Digite a senha: "<<endl;
    getline(cin,senha);
    senhaforte(senha);
    cout<<senhaforte(senha)<<endl;

    //----------------Ex-11-----------------

    int p;
    cout<<"Digite o tamanhanho do vetor: "<<endl;
    cin>>p;
    vectortam(p);
    cout<<"Segundo maior: "<<vectortam(p)<<endl;

    //----------------Ex-12-----------------

    compressao();

    //----------------Ex-13-----------------

    string txt,padrao;
    cout<<"Digite o texto: ";
    getline(cin,txt);
    cout<<"Digite o padrao: ";
    getline(cin,padrao);

    padronizado(txt,padrao);
    cout<<"indice: "<< padronizado(txt,padrao)<<endl;

    //----------------Ex-14------------------
    int n;
    cin>>n;
    
    somamenos(n);

    //----------------Ex-15------------------

    prefixo();
    cout<<"O maior: "<<prefixo()<<endl;

    //                                                     ___________
    //ACABOOOOOUUUU!!!!                                   | ( )   ( ) |
    //                                                    |     ^     |
    //                                                    |   \___/   |

    






    
    

}
