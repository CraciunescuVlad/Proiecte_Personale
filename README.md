# Proiecte personale – Portofoliu

Acest repository conține o colecție de proiecte personale dezvoltate în timpul studiilor, ca parte a procesului meu de învățare și aprofundare în domeniul programării și al dezvoltării web.

## 📂 Proiecte incluse

### 1. Galerie Foto (C)

**Descriere:**  
Aplicație în limbajul C pentru gestionarea unei galerii foto, cu suport pentru:
- Crearea și administrarea de albume și poze
- Salvare și încărcare din fișiere
- Interfață simplă în linia de comandă
- Lucru cu structuri și pointeri

**Tehnologii:** C, fișiere, structuri, pointeri  
**Folder:** `/galerie-foto`

---

### 2. Blog Personal (HTML, CSS, JavaScript)

**Descriere:**  
Site static creat de la zero, ce funcționează ca un blog personal:
- Structură pe pagini (home, articole, contact)
- Design responsive
- Elemente interactive folosind JavaScript

**Tehnologii:** HTML, CSS, JavaScript  
**Folder:** `/Proiect_blog`

---

### 3. Blog Personal – Versiune Django

**Descriere:**  
Migrare a blogului static într-o aplicație dinamică cu Django:
- Pagini gestionate dinamic prin framework
- Integrare cu bază de date SQLite
- Interfață de administrare Django pentru gestionarea articolelor
- Sistem de rutare și template-uri

**Tehnologii:** Django, Python, SQLite, HTML, CSS  
**Folder:** `/demo`

---

# 4. Biblioteca Virtuală – proiect C++

Acesta este un proiect de aplicație desktop pentru gestiunea și utilizarea unei biblioteci virtuale, dezvoltat în C++ ca parte din activitatea universitară.

## ✅ Funcționalități actuale (în dezvoltare)
- Vizualizare listă de cărți din fișier
- Interfață grafică în C++ folosind **Dear ImGui** + **GLFW** + **OpenGL**
- Gestionare fișiere locale (`carti.txt`, `cos_utilizator.txt`, `imprumuturi.txt`)
- Cod modular: `Carte`, `Administrator`, `Utilizator`, `GestionareFisiere`, etc.

## 🧭 Obiectiv
Crearea unei aplicații complete de bibliotecă virtuală:
- cu UI grafic
- două moduri de utilizare: administrator și utilizator
- gestionare locală a datelor
- ulterior, extensie cu frontend web

## 🚧 Stare actuală

> ⚠️ Proiectul nu este încă finalizat. Va fi complet funcțional până la **mijlocul lunii iunie**.

Pe măsură ce dezvoltarea avansează, voi publica și varianta cu **frontend HTML + JavaScript** ce comunică cu backend-ul C++.

---

## 🔧 Cerințe minime pentru compilare

- [x] CMake 3.20+
- [x] Compilator C++20
- [x] [Dear ImGui](https://github.com/ocornut/imgui)
- [x] [GLFW](https://github.com/glfw/glfw)

## ▶️ Rulare aplicație grafică (`biblioteca_ui`)

După ce ai descărcat proiectul:

```bash
mkdir build
cd build
cmake ..
cmake --build .
./biblioteca_ui

## 📌 Notă

Aceste proiecte sunt în curs de dezvoltare și actualizare. Sunt rezultatul autodidactismului și pasiunii pentru programare, și nu reprezintă aplicații de producție.

## 🔗 Contact

Dacă ai întrebări sau feedback, mă poți contacta la:  
📧 [vlad.craciunescu06@e-uvt.ro]

