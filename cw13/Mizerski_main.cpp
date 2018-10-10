#include"MIZERSKI"


int main(int argc,char* argv[])
{
    vector <plik*> V;
    for(int i=1;i<argc;i++)
    {
        
        V.push_back(new plik(argv[i]));
    }
    
    for(int i=0;i<argc-1;i++)
    {
        V[i]->zlicz();
        V[i]->wypisz();
    }
    
    /*
    string s1=("Mizerski_main.cpp");
    plik A(s1);
    A.zlicz();
    A.wypisz();
    */
    for(int i=0;i<argc-1;i++)
        delete V[i];
    
    
}
