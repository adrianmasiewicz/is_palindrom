bool is_palindrom(const string& tekst)
{
    string nowy_tekst;
    
    for (int i = 1; i < tekst.length()+1; i++)
    {
        nowy_tekst += tekst[tekst.length()-i];
    }
    
    return nowy_tekst == tekst;   
}
