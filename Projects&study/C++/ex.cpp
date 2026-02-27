#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string cinema(int l, int c)
{
    if(l<0 || c<0)
    {
        return "Assento invalido";
    }
    int assentos[5][5];
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            assentos[i][j]=rand()%1;
        }
    }
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(assentos[l][c]==0)
            {
                return "Assento livre";
            }
            else
            {
                return "Assento ocupado";
            }
        }
    }

}

char verificaVencedor(char M[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        if (M[i][0] != ' ' && M[i][0] == M[i][1] && M[i][1] == M[i][2])
            return M[i][0];
    }

    
    for (int j = 0; j < 3; j++) {
        if (M[0][j] != ' ' && M[0][j] == M[1][j] && M[1][j] == M[2][j])
            return M[0][j];
    }

    
    if (M[0][0] != ' ' && M[0][0] == M[1][1] && M[1][1] == M[2][2])
        return M[0][0];

    
    if (M[0][2] != ' ' && M[0][2] == M[1][1] && M[1][1] == M[2][0])
        return M[0][2];

    
    return ' ';
}

void maior10()
{
    int matriz[4][4],count=0;
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>matriz[i][j];
            if(matriz[i][j]<10)
            {
                count++;
            }
        }
    }
    cout<<"a matriz possui "<<count<<"numeros maior que 10."<<endl;
}


//Ex-02
void mcom1(int a,int b)
{
    int m[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(j==0)
            {
                m[i][j]=1;
            }
            else{
                m[i][j]=0;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

//Ex-03

float media(float s,int d)
{
    int media = s/d;
    return media;
}




int main()
{

    //maior10();
    cout<<"dite a linha e coluna:";
    int a,b;
    cin>>a>>b;
    mcom1(a,b);
    //-------------03
    int m[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }
    int soma=0;
    for(int i=2;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            soma=soma+m[i][j];
        }
    }
    cout<<"soma: "<<soma<<endl;
    //----------------04

    int p[5][4];
    int a1[5];
    int count[5]={};
    
    for(int i=0;i<5;i++)
    {
        
        soma=0;
        for(int j=0;j<4;j++)
        {
            cout<<"digite a nota: ";
            cin>>p[i][j];
            soma=soma+p[i][j];
            count[i]++;
        }
        a1[i]=soma;

    }
    for(int i=0;i<5;i++)
    {
        cout<<"aluno["<<i<<"] media = "<<media(a1[i],count[i])<<endl;
    }
    //------------------5
    int ma[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            ma[i][j]=i*j;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    //------------------6

    soma=0;
    int mi[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mi[i][j]; 
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                soma=soma+mi[i][j];
            }
        }
    }
    cout<<"soma do elementos na diagonal: "<<soma<<endl;
    //-------------------------7
    int mb[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            mb[i][j]=rand() % 100;
        }

    }
    cout<<"Digite o valor para busca: ";
    int x;
    cin>>x;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(x==m[i][j])
            {
                cout<<"valor encontrado linha: "<<i<<" coluna: "<<j<<endl;
                i=6;
            }
        }
        if(i=6-1)
        {
            cout<<"valor nao encontrado."<<endl;
        }
    
    }
    //----------------------------------------------------------------------------Ex-08
    int m1[2][2],m2[2][2],mr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m2[i][j];
            mr[i][j]=m2[i][j]+m1[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //----------------------------------------------------------------------------Ex-09
    
    cout<<"maior valor matriz 10x10"<<endl;
    int m10[10][10],maior=0,posi,posl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            m10[i][j]=rand()%100;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(m10[i][j]>maior)
            {
                maior=m10[i][j];
                posi=i;
                posl=j;
            }
        }
    }
    cout<<"Maior valor: "<<maior<<endl<<"linha: "<<posi<<endl<<"coluna: "<<posl<<endl;

    //----------------------------------------------------------------------------Ex-10

    int assento[10][4];
    int livre=0;
    cout<<"Assentos disponiveis preencher com '0' para livre e '1' ocupado"<<endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<"Assento ["<<i<<"] ["<<j<<"]: ";
            assento[i][j]=0;
            if(assento[i][j]==0)
            {
                livre++;
            }
        }
    }
    
    cout<<"Total de assentos livres: "<<livre<<endl;

    //----------------------------------------------------------------------------Ex-11
    int mats[5][5],aux;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mats[i][j];
            if(i==4)
            {
                aux=mats[i][j];
                mats[i][j]=mats[2][j];
                mats[2][j]=aux;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<mats[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //----------------------------------------------------------------------------Ex-12
    
    int ma[3][3],sl[3]={0},sc[3]={0},sd=0,sds=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ma[i][j];
        }
    }
    for(int i=0;i<3;i++)
    { 
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sd=sd+ma[i][j];
                if(i+j==2)
                {
                    sds=sds+ma[i][j];
                }
            }
            else if((i+j)==2)
            {
                sds=sds+ma[i][j];
            }
            sc[j]=sc[j]+ma[i][j];
            sl[i]=sl[i]+ma[i][j];
        }
    }
    if(sl[0]==sl[1] && sl[1]==sl[2] && sc[0]==sc[1] && sc[1]==sc[2] && sd==sds)
    {
        cout<<"eh magica"<<endl;
    }
    else
    {
        cout<<"nao eh magica"<<endl;
    }

    //----------------------------------------------------------------------------Ex-13

    char pro[5][10],gab[10]={'A','E','B','A','C','D','E','B','A','A'};   //cada questao vale 0,5 pontos
    float nota[5]={0};

    for(int i=0;i<5;i++)
    {
        
        for(int j=0;j<10;j++)
        {
            cout<<"Questao "<<j+1<<": ";
            cin>>pro[i][j];
            if(toupper(pro[i][j])==gab[j])
            {
                nota[i]=nota[i]+0.5;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        
        cout<<"Aluno "<<i+1<<": "<<nota[i]<<endl;
    }

    //----------------------------------------------------------------------------Ex-14

    int l,c;
    cout<<"Digite a linha e coluna do assento desejado: ";
    cin>>l>>c;
    cout<<cinema(l,c)<<endl;

    //----------------------------------------------------------------------------Ex-15

    int o[4][4];     opl9
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>o[i][j];
        }
        cout<<endl;
    }

    //----------------------------------------------------------------------------Ex-16

    const int N = 5;
    int A[N][N];
    bool simetrica = true; 

    // ---- Leitura da matriz ----
    cout << "Digite os 25 elementos da matriz 5x5:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i][j] != A[j][i]) {
                simetrica = false;
                break;
            }
        }
        if (!simetrica) break;
    }

    
    if (simetrica)
        cout << "A matriz é simétrica." << endl;
    else
        cout << "A matriz NÃO é simétrica." << endl;

    //----------------------------------------------------------------------------Ex-19

    char M[3][3];

    cout << "Digite a matriz 3x3 (X, O ou espaco):\n";

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> noskipws >> M[i][j]; 
        }
    }

    
    char vencedor = verificaVencedor(M);

    if (vencedor == 'X')
        cout << "X ganhou!\n";
    else if (vencedor == 'O')
        cout << "O ganhou!\n";
    else
        cout << "Deu velha!\n";

    //----------------------------------------------------------------------------Ex-20

    const int N = 6;
    int M[N][N];

    
    cout << "Digite os 36 valores da matriz 6x6:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> M[i][j];
        }
    }

    int somaAcima = 0;
    int somaAbaixo = 0;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (j > i) { 
                
                somaAcima += M[i][j];
            }
            else if (j < i) {
                
                somaAbaixo += M[i][j];
            }
        }
    }

    
    cout << "Soma dos elementos acima da diagonal: " << somaAcima << endl;
    cout << "Soma dos elementos abaixo da diagonal: " << somaAbaixo << endl;

    //----------------------------------------------------------------------------Ex-21

    const int N = 5;
    int M[N][N];

    cout << "Digite os 25 elementos da matriz 5x5:" << endl;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> M[i][j];
        }
    }

    bool existePonto = false;

    
    for (int i = 0; i < N; i++) {

        
        int menor = M[i][0];
        int colMenor = 0;

        for (int j = 1; j < N; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
                colMenor = j;
            }
        }

        
        bool maiorDaColuna = true;
        for (int k = 0; k < N; k++) {
            if (M[k][colMenor] > menor) {
                maiorDaColuna = false;
                break;
            }
        }

        
        if (maiorDaColuna) {
            cout << "Ponto de sela encontrado no elemento M[" 
                 << i << "][" << colMenor << "] = " << menor << endl;
            existePonto = true;
        }
    }

    if (!existePonto) {
        cout << "Nao existe ponto de sela na matriz." << endl;
    }

    //----------------------------------------------------------------------------Ex-22

    const int N = 5;
    int matriz[N][N];
    int resultado[N][N];

    
    cout << "Digite a matriz 5x5 (0 para vazio e -1 para mina):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    
    int direcoes[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            
            if (matriz[i][j] == -1) {
                resultado[i][j] = -1;
                continue;
            }

            int contador = 0;

            
            for (auto &d : direcoes) {
                int ni = i + d[0];
                int nj = j + d[1];

                
                if (ni >= 0 && ni < N && nj >= 0 && nj < N) {
                    if (matriz[ni][nj] == -1) {
                        contador++;
                    }
                }
            }

            resultado[i][j] = contador;
        }
    }

    
    cout << "\nMatriz resultante (dicas):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    //----------------------------------------------------------------------------Ex-23

    const int L1 = 3, C1 = 2;
    const int L2 = 2, C2 = 3;

    int A[L1][C1];
    int B[L2][C2];
    int C[L1][C2] = {0};

    
    cout << "Digite a matriz A (3x2):\n";
    for (int i = 0; i < L1; i++) {
        for (int j = 0; j < C1; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Digite a matriz B (2x3):\n";
    for (int i = 0; i < L2; i++) {
        for (int j = 0; j < C2; j++) {
            cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < L1; i++) {
        for (int j = 0; j < C2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < C1; k++) {  // ou L2
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "\nMatriz C (resultado da multiplicacao A x B):\n";
    for (int i = 0; i < L1; i++) {
        for (int j = 0; j < C2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    //----------------------------------------------------------------------------Ex-25

    const int N = 10;
    int atual[N][N];
    int proxima[N][N];

    
    cout << "Digite a matriz 10x10 (0 = morto, 1 = vivo):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> atual[i][j];
        }
    }

    
    int direcoes[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int vizvivos = 0;

            
            for (auto &d : direcoes) {
                int ni = i + d[0];
                int nj = j + d[1];

                if (ni >= 0 && ni < N && nj >= 0 && nj < N) {
                    if (atual[ni][nj] == 1)
                        vizvivos++;
                }
            }

            
            if (atual[i][j] == 1) {  
                if (vizvivos < 2 || vizvivos > 3)
                    proxima[i][j] = 0; 
                else
                    proxima[i][j] = 1; 
            } 
            else { 
                if (vizvivos == 3)
                    proxima[i][j] = 1; 
                else
                    proxima[i][j] = 0; 
            }
        }
    }

    
    cout << "\nProxima geracao:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << proxima[i][j] << " ";
        }
        cout << endl;
    }

    //----------------------------------------------------------------------------Ex-26

    const int N = 9;
    int matriz[N][N];

    
    cout << "Digite a matriz 9x9 do Sudoku (0 = vazio):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    
    bool usado[10] = {false};

    
    bool valido = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int valor = matriz[i][j];

            if (valor != 0) {  
                if (usado[valor]) {
                    valido = false;  
                } else {
                    usado[valor] = true;
                }
            }
        }
    }

    
    if (valido)
        cout << "\nSetor 3x3 valido (sem repeticoes).\n";
    else
        cout << "\nSetor 3x3 INVALIDO (ha numeros repetidos).\n";
    
    
    //----------------------------------------------------------------------------Ex-27
    int estoque[4][3];
    
    float custo_unitario[3];
    
    
    cout << "Digite as quantidades de produtos em cada armazém (4 armazéns, 3 produtos):\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Armazém " << i + 1 << ", Produto " << j + 1 << ": ";
            cin >> estoque[i][j];
        }
    }

    
    cout << "\nDigite os custos unitários dos 3 produtos:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Produto " << i + 1 << ": ";
        cin >> custo_unitario[i];
    }

    
    cout << "\nResultado:\n";
    for (int i = 0; i < 4; i++) {
        int total_quantidade = 0;
        float total_valor = 0.0;
        
        for (int j = 0; j < 3; j++) {
            total_quantidade += estoque[i][j];
            total_valor += estoque[i][j] * custo_unitario[j];
        }

        cout << "Armazém " << i + 1 << ":\n";
        cout << "Quantidade total de produtos: " << total_quantidade << endl;
        cout << "Valor total acumulado em estoque: R$ " << total_valor << endl;
        cout << "------------------------\n";
    }

    //----------------------------------------------------------------------------Ex-28

    int imagem[8][8];

    cout << "Digite a matriz binaria 8x8 (valores 0 ou 1):\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> imagem[i][j];
        }
    }

    cout << "\nResultado RLE:\n";

    for (int i = 0; i < 8; i++) {
        cout << "Linha " << i + 1 << ": ";

        int atual = imagem[i][0];
        int count = 1;

        for (int j = 1; j < 8; j++) {
            if (imagem[i][j] == atual) {
                count++;
            } else {
                
                cout << count << "x" << atual << ", ";
                atual = imagem[i][j];
                count = 1;
            }
        }

        cout << count << "x" << atual;

        cout << endl;
    }











}