#include <iostream>
using namespace :: std ;

main ()
{   string member, namaa, cari, nb[50];
    int b, c, i, j, barang, temp, hb[50], jumlah[50], total=0, sel=0, ar=5;
    float diskon, tot;
    string nama[5]  = {"Bayu","Irvan","Susiati","Diana","Roni"} ;
    string nomor[5] = {"A001","A002","A003","A007","A008"} ;

    cout <<"Apakah ada kartu member (ya/tidak)  :   ";                                cin>>member;
    if (member=="tidak")
    {   cout <<"\nMasukkan nama anda              :   ";                              cin>>namaa;
        diskon = 0 ;
        cout <<"Anda tidak mendapat diskon";
    }
    else
    {   diskon = 0.05 ;
        cout <<"\nMasukkan nomor identitas        :   ";                              cin>>cari;
        for (i=0; i<ar; i++)
            {   if (cari==nomor[i])
                { namaa==nama[i] ;
                  cout <<"Nama anda adalah    =   ";                                  cout<<nama[i];
                }
            }
        cout <<"\nAnda mendapat diskon 5%";
        }

        cout <<"\n\nMasukkan jumlah barang yg akan dibeli    :   ";                   cin>>barang;
        for (b=1; b<=barang; b++)
        {   cout <<"\nMasukkan Nama Barang "<<b<<":   "   ;                           cin>>nb[b];
            cout <<"Masukkan Harga Barang :   "   ;                                   cin>>hb[b];
            cout <<"Masukkan Jumlahnya    :   "   ;                                   cin>>jumlah[b];

            total  = hb[b] * jumlah[b] ;
            sel    = sel + total;
        }
        for (i=1; i<barang; ++i)
                { for (j=1; j<=(barang-i); ++j)
                    if (hb[j]>hb[j+1])
                    {   temp = hb[j] ;
                        hb[j] =hb[j+1] ;
                        hb[j+1] = temp ;
                    }
                }
            cout <<"\nUrutan harga dari termurah ";
                for(i=1; i<=barang; ++i)
                    cout <<"\nHarga Barang        "  <<i<< " = "  <<hb[i];
            c = sel;
            tot    = c - (c * diskon) ;
            cout <<"\n\nHarga sebelum diskon   :   ";      cout<<c;
            cout <<"\nHarga sesudah diskon   :   ";        cout<<tot;
}
