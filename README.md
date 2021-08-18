# C++ FTP ve USB Dosya Yazma

İki adet sayının ebob ve ekok'unu hesaplayıp "**Data.txt**" dosyasına kaydeden, aynı zamanda bu dosyayı USB belleğe ve FTP sunucuya gönderen bir program geliştirdim.

# Nasıl Çalıştırılır?

Projeyi çalıştırırken IDE üzerinden çalıştırırsanız hata ile karşılaşabilirsiniz. Ftp bağlantısı sağlarken kullanmış olduğum kütüphanede linkleme problemi olduğu için sorun çıkartıyor. Bu yüzden konsol üzerinden linkleme yapıyoruz.

    g++ main.cpp DbAccess.h Calculator.h -o main -lwininet -lm

yukarıdaki komut ile derleyebilirsiniz. Derledikten sonra konsol ekranına **main** yazarak çalıştırabilirsiniz.

