# LATIHAN4DPBO2023
## Janji 
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas 
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan
Python yang mengimplementasikan konsep inheritance, composition, dan array of
object pada kelas-kelas tersebut:
● Mahasiswa: NIM, nama, jenis_kelamin, fakultas
● Human: NIK, nama, jenis_kelamin
● SivitasAkademik: asal_universitas, email_edu
● Dosen: NIP, nama, jenis_kelamin, fakultas, pend_terakhir, keahlian
● Course: nama_matakuliah,
● Program Studi: nama_prodi, kode, course

## Desain Program 
dalan membuat program ini, terdiri dari beberapa struktur antara lain:
1. 'class Human' yang menjadi parent pertama kemudian Inheritance dengan 'class Sivitas'
2. dari class sivitas (yang sudah inheritance dengan class Human), akan menjadi multiple parent dari class Mahasiswa dan class Dosen karena kedua class ini memiliki objek yang sama 
3. class course akan menjadi class yang berkomposisi dengan class Dosen, class Mahasiswa, dan class Program Studi
4. class dosen 'has a' class course dan class prodi karena di setiap dosen akan memiliki array of list matakuliah yang diampu nya dan program studi yang bisa berbeda2 setiap dosennya
5. class Mahasiswa 'has a' class course dan class prodi karena setiap Mahasiswa memiliki array of list matakuliah yang dikontraknya dan program studi
6. class program studi 'has a' class course karena setiap program studi memiliki matakuliah, dan setiap program studi memiliki matakuliah yang berbeda-beda

## penjelasan Alur kode program
1. setter gether method di setiap class

2. prosedur tambahan untuk menampilkan output permasing-masing class 
- Class mahasiswa
<img width="214" alt="image" src="https://user-images.githubusercontent.com/101001227/223420813-ba5f5983-7134-431a-8b7e-a89966cb8e18.png">
- Class Dosen
<img width="176" alt="image" src="https://user-images.githubusercontent.com/101001227/223421070-de60f1ac-15b4-4c4c-a9b0-4f4a65fb81e5.png">
- Class Prodi
<img width="178" alt="image" src="https://user-images.githubusercontent.com/101001227/223421178-a8f5df3d-c978-482c-913c-b3f459b5afe1.png">

3. membuat vector untuk menjadi list tampungan
<img width="246" alt="image" src="https://user-images.githubusercontent.com/101001227/223421293-5b0d392f-5351-4362-b724-ae657020f285.png">

4. Hardcode course (matakuliah)
<img width="410" alt="image" src="https://user-images.githubusercontent.com/101001227/223421530-92427a3d-4378-4d73-9682-3b4efb39e43a.png">

5. sebagai contoh :
<img width="401" alt="image" src="https://user-images.githubusercontent.com/101001227/223421622-db18c618-6f06-40eb-8532-d7c10c78ba9a.png">
ada 2 objek class prodi, kemudian disetiap objeknya dapat menampung list dari course sesuai yang dibutuhkan

## dokumentasi 
1. class prodi
<img width="349" alt="image" src="https://user-images.githubusercontent.com/101001227/223448499-55141c4e-f54b-432d-9487-7e0b35d482c5.png">
2. class Mahasiswa
<img width="424" alt="image" src="https://user-images.githubusercontent.com/101001227/223448667-014e4b8a-7955-4b4e-8936-cad7c0de06f9.png">
3. class Dosen 
<img width="374" alt="image" src="https://user-images.githubusercontent.com/101001227/223448811-308a38a3-7fd2-42c8-a6a8-a4effef7aa8e.png">

## implementasi diagram
![UML (final)](https://user-images.githubusercontent.com/101001227/223454533-539093a2-c9bd-4bd9-8c63-2b2a5ba98392.jpg)

