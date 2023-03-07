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
4. class dosen 'has a' class course karena di setiap dosen akan memiliki array of list matakuliah yang diampu nya yang bisa berbeda2 setiap dosennya
5. class Mahasiswa 'has a' class course karena setiap Mahasiswa memiliki array of list matakuliah yang dikontraknya
6. class program studi 'has a' class course karena setiap program studi memiliki matakuliah, dan setiap program studi memiliki matakuliah yang berbeda-beda

##penjelasan Alur kode program
1. setter gether method di setiap class

2. prosedur tambahan untuk menampilkan output permasing-masing class 
- Class mahasiswa
<img width="214" alt="image" src="https://user-images.githubusercontent.com/101001227/223420813-ba5f5983-7134-431a-8b7e-a89966cb8e18.png">
-Class Dosen
<img width="176" alt="image" src="https://user-images.githubusercontent.com/101001227/223421070-de60f1ac-15b4-4c4c-a9b0-4f4a65fb81e5.png">
-Class Prodi
<img width="178" alt="image" src="https://user-images.githubusercontent.com/101001227/223421178-a8f5df3d-c978-482c-913c-b3f459b5afe1.png">

3. membuat vector untuk menjadi list tampungan
<img width="246" alt="image" src="https://user-images.githubusercontent.com/101001227/223421293-5b0d392f-5351-4362-b724-ae657020f285.png">

4. Hardcode course (matakuliah)
<img width="410" alt="image" src="https://user-images.githubusercontent.com/101001227/223421530-92427a3d-4378-4d73-9682-3b4efb39e43a.png">

5. sebagai contoh :
<img width="401" alt="image" src="https://user-images.githubusercontent.com/101001227/223421622-db18c618-6f06-40eb-8532-d7c10c78ba9a.png">
ada 2 objek class prodi, kemudian disetiap objeknya dapat menampung list dari course sesuai yang dibutuhkan

##dokumentasi 
1. class prodi
<img width="367" alt="image" src="https://user-images.githubusercontent.com/101001227/223422251-bf1fa90d-103b-479b-9b25-ee48ab7d0774.png">
2. class Mahasiswa
<img width="369" alt="image" src="https://user-images.githubusercontent.com/101001227/223422421-56222b0c-9ed2-4150-b43f-56dfb60efd23.png">
3. class Dosen 
<img width="264" alt="image" src="https://user-images.githubusercontent.com/101001227/223422498-3cbc62fc-179e-4696-9e34-a8de3ab6843a.png">

##implementasi diagram
![Untitled Diagram (5)](https://user-images.githubusercontent.com/101001227/223423338-29c2a2b7-6405-405e-b071-153a3a48ed38.jpg)
