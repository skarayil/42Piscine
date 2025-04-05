# BSQ

Bu projede, boş alanlar ve engeller içeren bir harita alıp, harita üzerinde en büyük kareyi bularak yazdıran bir program oluşturacağız. Tüm dosyalar, daha iyi anlaşılabilmesi için yorumlanmıştır.

## Harita Oluşturucu

`maps` klasörü, rastgele haritalar oluşturmanıza olanak tanıyan bir betik (script) içerir. Bu betiği kullanmak için şu parametreleri girmeniz gerekir:

```
program satır_sayısı sütun_sayısı yoğunluk > harita_adı
```

Burada:

- `satır_sayısı`: Haritadaki satır sayısı  
- `sütun_sayısı`: Haritadaki sütun sayısı  
- `yoğunluk`: Haritadaki engellerin yüzde olarak oranı  
- `harita_adı`: Oluşturulacak dosyanın adı

### Örnek Kullanım

```bash
./map_generator.pl 50 50 5 > map7
# 5% engelli 50x50 boyutunda bir harita oluşturur
```

### Harita Formatı

Programın haritayı okuyabilmesi için haritanın bir başlık (header) içermesi gerekir. Bu başlık, satır sayısını ve hangi karakterlerin neyi temsil ettiğini belirtir.

Örneğin:

```
50.ox
```

Burada:

- `50`: Satır sayısı  
- `.`: **Boş** alan  
- `o`: **Engel**  
- `x`: **Dolu kare** (bulunan en büyük kare)

## Ana Program

Programı çalıştırmak için tüm dosyaların birlikte derlenmesi gerekir. Bunun için projede bir `Makefile` kullandık.

### Derlemek için:

```bash
make all
```

### Çalıştırmak için:

```bash
./bsq ./map/harita_adı
# harita_adı yerine mevcut bir harita dosyasının adını yazın
```
