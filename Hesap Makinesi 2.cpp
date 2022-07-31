#include <iostream>
using namespace std;

int main()
{
    int sayi_1, sayi_2, sonuc;
    bool sonuc_hesapla;
    char islem, cevap='e';

    while (cevap=='e')
    {
        cout << "Islemi giriniz: "<<endl;
        cin>>sayi_1>>islem>>sayi_2;

        sonuc_hesapla=true;
        switch(islem)
        {
           case'+':
            sonuc = sayi_1+sayi_2;
            break;

           case'-':
            sonuc    = sayi_1-sayi_2;
            break;


           case'*':
            sonuc    = sayi_1*sayi_2;
            break;

           case'/':
            if(sayi_2==0)
            {
               cout << "Bolum 0 olamaz!"<<endl;
               sonuc_hesapla= false;
               break;
            }
             sonuc= sayi_1 /sayi_2;
             break;


            case '%':
            sonuc= sayi_1%sayi_2;
            break;
            default:
                cout<< "Yanlis islem girdiniz!"<<endl;
                sonuc_hesapla=false;
                break;
                }
                if(sonuc_hesapla)
                {
                    cout << "Sonuc: "<<endl;
                    cout << sayi_1<<" "<<islem<<" "<<sayi_2<< " = "<<sonuc<<endl;

                }
                cout << "Islem yapmaya devam etmek istiyor musunuz?"<<endl;
                cout <<"(Evet:e, Hayir:h)"<<endl;
                cin >> cevap;


    }
    return 0;

}
