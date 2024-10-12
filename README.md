<div align="center">
  <h1>C++ Module 04</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>

</div>
<p align="center">
C++ dilinde nesne yönelimli programlamanın temel kavramlarını kapsamaktadır. İçerisinde sanal fonksiyonlar, soyut sınıflar, polimorfizm, kopyalama yöntemleri (yüzeysel ve derin kopya) ve arayüzler gibi konular yer almaktadır. Her bölümde açıklayıcı örnekler ile kavramların nasıl çalıştığı gösterilmektedir. Bu rehber, C++ programlama becerilerinizi geliştirmenize yardımcı olacaktır.
</p>


### İçindekiler 📚
- [Virtual (Sanal Fonksiyonlar)](#virtual-sanal-fonksiyonlar)
- [Abstract Class (Soyut Sınıflar)](#abstract-class-soyut-sınıflar)
- [Virtual ve Subtype Polymorphism (Sanal ve Alt Tür Polymorphism)](#virtual-ve-subtype-polymorphism-sanal-ve-alt-tür-polymorphism)
- [Function Override (Fonksiyon Geçersiz Kılma)](#function-override-fonksiyon-geçersiz-kılma)
- [Shallow Copy ve Deep Copy](#shallow-copy-ve-deep-copy)
- [Interfaces (Arayüzler)](#interfaces-arayüzler)

---

<a name="virtual-sanal-fonksiyonlar"></a>
## Virtual (Sanal Fonksiyonlar)

Virtual, C++ dilinde sanal fonksiyonlar oluşturmak için kullanılan bir anahtar kelimedir. Sanal fonksiyonlar, üst sınıf türündeki bir nesnenin alt sınıflarının fonksiyonlarını dinamik olarak çağırabilmesini sağlar. Bu sayede, aynı üst sınıftan türetilmiş nesneler farklı davranışlar sergileyebilir.

**örnek:**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meows!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();  // Barks!
    a2->makeSound();  // Meows!

    delete a1;
    delete a2;

    return 0;
}
```

---

<a name="abstract-class-soyut-sınıflar"></a>
## Abstract Class (Soyut Sınıflar) 

Soyut sınıflar, en az bir saf sanal fonksiyon içeren ve doğrudan nesne oluşturulamayan sınıflardır. Bu sınıflar, belirli bir arayüz sunar ve alt sınıfların bu arayüzü uygulamasını zorunlu kılar.

**örnek:**

```cpp
class Hayvan {
public:
    virtual void beslen() = 0; // Saf sanal fonksiyon
    virtual void hareketEt() = 0;
};

class Kedi : public Hayvan {
public:
    void beslen() override {
        cout << "Kedi, balık yiyerek beslenir." << endl;
    }
    void hareketEt() override {
        cout << "Kedi, dört ayak üzerinde hareket eder." << endl;
    }
};
```

---

<a name="virtual-ve-subtype-polymorphism-sanal-ve-alt-tür-polymorphism"></a>
## Virtual ve Subtype Polymorphism (Sanal ve Alt Tür Polymorphism)

Sanal fonksiyonlar, alt tür polymorphism'i sağlayarak üst sınıf türündeki bir nesnenin alt sınıf türündeki bir nesneye dinamik olarak dönüştürülmesini mümkün kılar. Bu sayede, belirli bir nesne türüne göre uygun alt sınıf fonksiyonları çağrılabilir.

<a name="shallow-copy-ve-deep-copy"></a>
### Shallow Copy ve Deep Copy

- **Shallow Copy (Yüzeysel Kopya):** Mevcut nesnenin bellek alanının bir kopyasını oluşturur, ancak referans türündeki verileri doğrudan kopyalar. Bu nedenle, iki nesne birbirini etkileyebilir.
- **Deep Copy (Derin Kopya):** Mevcut nesnenin tamamen bağımsız bir kopyasını oluşturur. Bellek alanı ve veriler ayrı ayrı kopyalanır; bu nedenle değişiklikler birbirini etkilemez.

**örnek**

```cpp
#include <iostream>
#include <string>
using namespace std;

class Elbise {
private:
    string renk;

public:
    Elbise(const string &renk) : renk(renk) {}

    string getRenk() const {
        return renk;
    }

    void setRenk(const string &yeniRenk) {
        renk = yeniRenk;
    }
};

int main() {
    // Shallow Copy
    Elbise elbise1("Mavi");
    Elbise elbise2 = elbise1; // Yüzeysel kopya

    elbise2.setRenk("Sarı");
    cout << "Elbise 1 Rengi: " << elbise1.getRenk() << endl; // Sarı - Etkilendi

    // Deep Copy
    Elbise elbise3("Kırmızı");
    Elbise elbise4 = Elbise(elbise3.getRenk()); // Derin kopya

    elbise3.setRenk("Yeşil");
    cout << "Elbise 4 Rengi: " << elbise4.getRenk() << endl; // Kırmızı - Etkilenmedi

    return 0;
}
```

---
<a name="function-override-fonksiyon-geçersiz-kılma"></a>
## Function Override (Fonksiyon Geçersiz Kılma)

C++ dilinde "function override" (fonksiyon geçersiz kılma), bir alt sınıfın üst sınıfta tanımlanan sanal bir fonksiyonu yeniden tanımlaması anlamına gelir. Bu, polimorfizm ve nesne yönelimli programlama için temel bir özelliktir.

**Temel Kurallar**
- **Sanal Fonksiyon:** Geçersiz kılınacak fonksiyon, üst sınıfta virtual anahtar kelimesi ile tanımlanmalıdır.
- **Aynı İmza:** Alt sınıfta tanımlanan fonksiyonun, üst sınıftaki ile aynı isim, dönüş tipi ve parametre listesine sahip olması gerekir.
- **override Anahtar Kelimesi:** C++11 ile birlikte override anahtar kelimesi kullanarak, fonksiyonun gerçekten geçersiz kılınıp kılınmadığını belirtmek iyi bir uygulamadır.

---

<a name="interfaces-arayüzler"></a>
## Interfaces (Arayüzler)

Arayüzler, yalnızca saf sanal fonksiyonlar içeren sınıflardır. Bir arayüz, belirli bir işlevi tanımlar ve bu işlevi uygulayan sınıfların tüm fonksiyonları tanımlaması zorunludur.

**örnek**

```cpp
class Printer {
public:
    virtual void print() const = 0; // Saf sanal fonksiyon
};
```

---
