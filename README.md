# So_Long - 2D Adventure Game

<div align="center">
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language">
  <img src="https://img.shields.io/badge/Graphics-MinilibX-green" alt="Graphics">
  <img src="https://img.shields.io/badge/Platform-Linux-orange" alt="Platform">
  <img src="https://img.shields.io/badge/School-42-red" alt="School">
  <img src="https://img.shields.io/badge/License-MIT-yellow" alt="License">
</div>

## 🎮 Proje Hakkında

**So_Long**, 42 okulu müfredatının bir parçası olarak geliştirilmiş profesyonel bir 2D oyun projesidir. Bu proje, C programlama dilinde MinilibX grafik kütüphanesi kullanılarak geliştirilmiş olup, oyun geliştirme ve grafik programlama becerilerini sergilemektedir.

### ✨ Özellikler

- **🎯 Hedef Odaklı Oynanış**: Oyuncu tüm toplanabilir öğeleri topladıktan sonra çıkışa ulaşmalı
- **🎮 Sezgisel Kontroller**: WASD veya ok tuşları ile hareket sistemi
- **🎨 Retro Pixel Art**: Nostaljik 2D sprite grafikleri
- **🗺️ Özel Harita Sistemi**: .ber formatında özelleştirilebilir harita desteği
- **⚡ Performans Optimizasyonu**: Düşük kaynak kullanımı ve hızlı rendering
- **🔍 Hata Yönetimi**: Kapsamlı hata kontrolü ve kullanıcı dostu mesajlar

## 🚀 Teknik Özellikler

### Kullanılan Teknolojiler
- **Programlama Dili**: C (C99 standardı)
- **Grafik Kütüphanesi**: MinilibX (42 okulu grafik kütüphanesi)
- **Platform**: Linux (Ubuntu/Debian destekli)
- **Build System**: GNU Make

### Proje Mimarisi
```
so_long_linux/
├── src/
│   ├── main.c              # Ana program giriş noktası
│   ├── file_control.c      # Dosya işlemleri ve validasyon
│   ├── map_control.c       # Harita analizi ve kontrol
│   ├── maps_control_1.c    # İleri seviye harita kontrolü
│   ├── move_key.c          # Oyuncu hareket mantığı
│   ├── error_utils.c       # Hata yönetimi
│   └── utils.c             # Yardımcı fonksiyonlar
├── includes/
│   └── so_long.h           # Header dosyası
├── assets/
│   ├── textures/           # Oyun sprite'ları
│   ├── maps/               # Oyun haritaları
│   └── img/                # Ek görsel kaynaklar
├── libs/
│   └── mlx_linux/          # MinilibX kütüphanesi
└── Makefile                # Build konfigürasyonu
```

## 📋 Sistem Gereksinimleri

### Minimum Gereksinimler
- **İşletim Sistemi**: Linux (Ubuntu 20.04+, Debian 11+)
- **Derleyici**: GCC 9.0+ veya Clang 10.0+
- **Grafik Sistemi**: X11 window system
- **Bellek**: 512 MB RAM
- **Disk Alanı**: 100 MB boş alan

### Gerekli Kütüphaneler
```bash
sudo apt-get update
sudo apt-get install gcc make xorg libxext-dev libbsd-dev
```

## 🛠️ Kurulum ve Çalıştırma

### 1. Projeyi Klonlama
```bash
git clone https://github.com/Nalveiz/so_long_linux.git
cd so_long_linux
```

### 2. Derleme
```bash
make
```

### 3. Oyunu Çalıştırma
```bash
./so_long maps/map.ber
```

### 4. Temizleme (İsteğe Bağlı)
```bash
make clean    # Nesne dosyalarını temizle
make fclean   # Tüm çıktıları temizle
make re       # Yeniden derle
```

## 🎮 Oyun Kuralları

### Oynanış Mekanikleri
1. **Hareket**: WASD veya ok tuşları ile karakter kontrolü
2. **Hedef**: Tüm toplanabilir öğeleri (C) topla
3. **Çıkış**: Tüm öğeler toplandıktan sonra çıkış noktasına (E) ulaş
4. **Engeller**: Duvarlar (1) geçilemez
5. **Hareket Sayacı**: Her hareket ekranda gösterilir

### Kontroller
- `W` / `↑` : Yukarı hareket
- `A` / `←` : Sola hareket  
- `S` / `↓` : Aşağı hareket
- `D` / `→` : Sağa hareket
- `ESC` : Oyundan çıkış

## 🗺️ Harita Formatı

### .ber Dosya Yapısı
```
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111
```

### Harita Elemanları
- `0` : Boş alan
- `1` : Duvar
- `C` : Toplanabilir öğe
- `E` : Çıkış noktası
- `P` : Oyuncu başlangıç pozisyonu

### Harita Kuralları
- Harita dikdörtgen şeklinde olmalı
- Harita duvarlarla çevrilmeli
- Tam olarak 1 oyuncu (P) ve 1 çıkış (E) bulunmalı
- En az 1 toplanabilir öğe (C) bulunmalı
- Tüm öğelere ulaşılabilir bir yol olmalı

## 🏆 Geliştirici Becerileri

Bu proje aşağıdaki teknik becerileri sergilemektedir:

### Programlama Becerileri
- **C Programlama**: İleri seviye C programlama teknikleri
- **Bellek Yönetimi**: Manuel bellek tahsisi ve serbest bırakma
- **Pointer Kullanımı**: Karmaşık veri yapıları ve pointer aritmetiği
- **Algoritma Tasarımı**: Oyun mantığı ve optimizasyon algoritmaları

### Grafik Programlama
- **2D Rendering**: Sprite tabanlı grafik sistemi
- **Event Handling**: Klavye ve pencere olayları yönetimi
- **Grafik Optimizasyonu**: Performans odaklı rendering teknikleri

### Yazılım Mimarisi
- **Modüler Tasarım**: Ayrılmış sorumluluklar ve temiz kod
- **Hata Yönetimi**: Kapsamlı hata kontrolü ve validasyon
- **Dosya İşlemleri**: Harita dosyalarının parsing ve validasyonu

## 🚀 Performans Özellikleri

- **Hızlı Rendering**: 60 FPS sabit frame rate
- **Düşük Bellek Kullanımı**: Optimize edilmiş bellek yönetimi
- **Hızlı Başlatma**: Anında oyun yükleme
- **Stabil Çalışma**: Bellek sızıntısı ve crash'siz deneyim

## 📊 Proje İstatistikleri

- **Toplam Kod Satırı**: ~800 satır
- **Fonksiyon Sayısı**: 25+ fonksiyon
- **Dosya Sayısı**: 10+ kaynak dosya
- **Test Haritası**: 5+ farklı zorluk seviyesi

## 🤝 Katkıda Bulunma

Bu proje 42 okulu müfredatının bir parçasıdır. Eğitim amaçlı geliştirilmiş bu proje, modern yazılım geliştirme standartlarını takip eder.

## 📞 İletişim

**E-posta**: [ozemusta44@gmail.com]  
**LinkedIn**: [https://www.linkedin.com/in/mustafa-ozer-aa2705187/]  

---

<div align="center">
  <p><strong>42 School | Born2Code</strong></p>
  <p>Bu proje, profesyonel yazılım geliştirme becerilerini sergileyen eğitim amaçlı bir çalışmadır.</p>
</div>
