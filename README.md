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

# 📚 Biblioteca Virtuală

Aplicație C++ cu interfață grafică (Dear ImGui) și interacțiune în terminal, care permite gestiunea și utilizarea unei biblioteci virtuale, oferind funcționalități distincte pentru **Administrator** și **Utilizator**.

---

## 🔧 Cerințe

- CMake ≥ 3.10
- MinGW sau alt compilator C++ cu suport C++17
- GLFW
- OpenGL
- Dear ImGui (inclus ca sursă în proiect)

---

## 🏗️ Structură

```
Biblioteca_virtuala/
├── CMakeLists.txt
├── build/                  # Folder generat de CMake
├── main.cpp                # Interfață grafică cu ImGui
├── main_administrator.cpp  # Executabil CLI pentru Administrator
├── main_utilizator.cpp     # Executabil CLI pentru Utilizator
├── carti.txt               # Baza de date a cărților
├── cos_utilizator.txt      # Cărțile din coșul utilizatorului
├── imprumuturi.txt         # Istoricul împrumuturilor
├── shared/classes/         # Cod sursă organizat pe module
│   ├── administrator/
│   ├── utilizator/
│   ├── gestionareFisiere/
│   └── ...
└── external/               # GLFW + Dear ImGui (surse incluse)
```

---

## ▶️ Cum compilez și rulez?

### 1. Configurare cu CMake

```bash
cmake -S . -B build
```

### 2. Compilare

```bash
cmake --build build
```

### 3. Rulare interfață grafică (GUI)

```bash
cd build
./Biblioteca_virtuala.exe
```

### 4. Rulare în terminal (CLI)

#### Administrator:

```bash
./admin_biblioteca.exe adauga carte 123 Titlu Autor 5
./admin_biblioteca.exe vizualizare carti
./admin_biblioteca.exe sterge carte 123
./admin_biblioteca.exe modifica carte 123 10
./admin_biblioteca.exe vizualizare imprumuturi
```

#### Utilizator:

```bash
./utilizator_biblioteca.exe adauga carte 123 2
./utilizator_biblioteca.exe modifica carte 123 3
./utilizator_biblioteca.exe sterge carte 123
./utilizator_biblioteca.exe vizualizare cos
./utilizator_biblioteca.exe imprumuta Nume Prenume
```

---

## 👤 Modul Utilizator

Funcționalități disponibile:

- ✅ Adăugare carte în coș
- 🔁 Modificare număr exemplare
- ❌ Ștergere carte din coș
- 📋 Vizualizare coș
- 📦 Împrumut (dacă există în stoc)
- 🎨 Interfață grafică (Dear ImGui)
- 🧪 Validări (numere negative, carte inexistentă, coș gol etc.)

---

## 🔐 Modul Administrator

Funcționalități disponibile:

- ➕ Adăugare carte în bibliotecă
- ❌ Ștergere carte
- 🔁 Modificare stoc
- 📚 Vizualizare toate cărțile
- 📂 Vizualizare fișe de împrumut
- 🧪 Validări (stoc negativ, ISBN inexistent etc.)

---

## 🗃️ Salvare date

Fișierele persistente folosite:

- `carti.txt` – baza de date cu cărțile
- `cos_utilizator.txt` – coșul curent al utilizatorului
- `imprumuturi.txt` – fișele de împrumut salvate cronologic

---

## 🙋‍♂️ Autor

Crăciunescu Vlad – Facultatea de Matematică și Informatică, 2025  
Proiect realizat în cadrul cursului de Programare C++

---

## 📜 Licență

Proiect didactic, realizat în scop educațional.  
Utilizarea în afara contextului academic nu este permisă fără acordul autorului.

Dacă ai întrebări sau feedback, mă poți contacta la:  
📧 [vlad.craciunescu06@e-uvt.ro]

