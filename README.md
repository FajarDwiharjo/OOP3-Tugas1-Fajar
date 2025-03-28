# 🧠 C++ Projects: OOP vs Procedural Comparison

Selamat datang di proyek perbandingan antara pendekatan **Object-Oriented Programming (OOP)** dan **Procedural Programming** menggunakan bahasa C++. 📘

Proyek ini mencakup lima skenario berbeda yang dikembangkan dalam dua pendekatan untuk menunjukkan perbedaan dalam gaya desain dan struktur kode. Yuk simak! 👇

---

## 1️⃣ Kalkulator Sederhana

### OOP Version 🧱
Kode memanfaatkan class `Kalkulator` untuk mengenkapsulasi operasi matematika seperti penjumlahan, pengurangan, perkalian, dan pembagian.

**Fitur:**
- Menggunakan konstruktor untuk inisialisasi nilai.
- Metode terpisah untuk setiap operasi.
- Validasi pembagian oleh nol.

### Procedural Version 🛠️
Menggunakan fungsi prosedural terpisah untuk masing-masing operasi matematika tanpa class.

**Fitur:**
- Fungsi `penambahan`, `pengurangan`, dll. langsung diakses dari `main`.
- Lebih ringan dan langsung.

---

## 2️⃣ Data Siswa

### OOP Version 🎓
Class `Student` menyimpan nama, ID, dan nilai huruf, serta menyediakan *getter* dan *setter* untuk setiap atribut.

**Fitur:**
- Akses terkontrol terhadap atribut melalui metode.
- Cocok untuk sistem informasi sekolah.

### Procedural Version 📋
Struktur `Student` dipadukan dengan fungsi-fungsi untuk manipulasi data siswa.

**Fitur:**
- Fungsi `setName`, `getId`, dll. menerima `Student&` sebagai argumen.
- Mirip sistem C-style dengan pendekatan modular.

---

## 3️⃣ Persegi Panjang

### OOP Version 🟪
Class `Rectangle` digunakan untuk menyimpan sisi panjang dan lebar, serta menghitung luas.

**Fitur:**
- Penyimpanan atribut internal.
- Fungsi `luas()` sebagai metode internal.

### Procedural Version 📐
Fungsi `luasRectangle(double a, double b)` langsung dipanggil dengan argumen sisi panjang dan lebar.

**Fitur:**
- Tanpa objek; langsung input dan output.

---

## 4️⃣ Counter Angka

### OOP Version 🔢
Class `Counter` menjaga nilai hitungan dan menyediakan metode `increment()` dan `displayCount()`.

**Fitur:**
- Menggambarkan enkapsulasi nilai.
- Sangat cocok untuk demonstrasi state di OOP.

### Procedural Version 🧮
Menggunakan variabel `count` biasa dan fungsi `increment(int&)` serta `displayCount(int)`.

**Fitur:**
- Langsung dan efisien.
- Menunjukkan kontrol mutasi nilai secara manual.

---

## 5️⃣ Jarak Koordinat dari Titik (0,0)

### OOP Version 📏
Class `Range` menerima koordinat (x, y) dan menghitung jarak menggunakan rumus Pythagoras.

**Fitur:**
- Pendekatan terstruktur dengan metode `hitung()`.
- Lebih mudah dikembangkan untuk sistem koordinat kompleks.

### Procedural Version 🌐
Fungsi `hitungJarak(int x, int y)` menghitung jarak langsung dari (0,0).

**Fitur:**
- Tanpa state; hanya kalkulasi langsung.
- Ideal untuk operasi cepat dan ringan.

---

## 🔚 Kesimpulan

| Pendekatan     | Keunggulan                         | Kekurangan                        |
|----------------|------------------------------------|-----------------------------------|
| OOP 🧱          | Struktur modular, mudah dikembangkan | Lebih kompleks, kadang overkill   |
| Prosedural 🛠️  | Simpel, ringan, mudah dibaca        | Kurang fleksibel untuk skala besar|

🧪 *Catatan:* Gunakan OOP ketika kamu butuh sistem yang kompleks dan bisa berkembang. Gunakan prosedural untuk program kecil dan langsung.

---

## 📂 Struktur File yang Direkomendasikan

```
📁 project/
├── kalkulator_oop.cpp
├── kalkulator_procedural.cpp
├── student_oop.cpp
├── student_procedural.cpp
├── rectangle_oop.cpp
├── rectangle_procedural.cpp
├── counter_oop.cpp
├── counter_procedural.cpp
├── range_oop.cpp
├── range_procedural.cpp
└── README.md
```

Semoga README ini membantumu memahami perbedaan gaya pemrograman C++ dengan lebih jelas! 😄
