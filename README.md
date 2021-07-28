# part1

Merhaba, 2 adet sayının ebob ve ekok'unu hesaplayıp Data.txt dosyasına kaydeden, aynı zamanda bu dosyayı Usb belleğe ve ftp sunucuya gönderen bir program geliştirdim.

Projeyi çalıştırırken IDE üzerinden çalıştırırsanız hata ile karşılaşırsınız. Ftp bağlantısı sağlarken kullanmış olduğum kütüphane linkleme problemi olduğu için sorun çıkartıyor. 

Bu yüzden konsol üzerinden linkleme yapıyoruz.

g++ main.cpp DbAccess.h Calculator.h -o main -lwininet -lm

yukarıdaki komut ile derleyebilirsiniz. Derledikten sonra main yazarak çalıştırabilirsiniz. 
