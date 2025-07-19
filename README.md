# 🚦 Semaforo Pedonale con Arduino + LCD

Questo è il **primo progetto Arduino che ho realizzato completamente da solo** 🥳  
Il progetto simula il funzionamento di un semaforo pedonale, utilizzando LED, un pulsante e un display LCD I2C.

---

## 🎯 Funzionalità

- Tre LED rappresentano il semaforo per le auto (verde, giallo, rosso)
- Un pulsante permette al pedone di richiedere l'attraversamento
- Il display LCD mostra messaggi per indicare quando è sicuro attraversare
- Il codice gestisce le temporizzazioni e lo stato del traffico

---

## 🔧 Componenti usati

- Arduino UNO (o compatibile)
- LED x3 (rosso, giallo, verde)
- Pulsante
- Resistenze (220Ω per i LED)
- LCD 16x2 con interfaccia I2C
- Cavi jumper

---

## ⚙️ Collegamenti principali

| Componente        | Pin Arduino |
|-------------------|-------------|
| LED rosso         | 13          |
| LED giallo        | 12          |
| LED verde         | 11          |
| Pulsante          | 10 (INPUT_PULLUP) |
| LCD I2C SDA       | A4          |
| LCD I2C SCL       | A5          |

---

## 📷 Screenshot del circuito (opzionale)

_Aggiungi uno screenshot se usi Wokwi o Tinkercad_

---

## 📚 Cosa ho imparato

- Come usare `digitalRead()` e `digitalWrite()`
- Gestione degli input con `INPUT_PULLUP`
- Utilizzo del display LCD I2C con `LiquidCrystal_I2C`
- Scrittura di codice pulito e strutturato
- Caricare un progetto su GitHub 💻

---

## ✅ Stato

✅ **Completato e funzionante**

---

## 🔄 Idee future

- Aggiungere un LED rosso per il pedone
- Usare `millis()` al posto di `delay()` per una logica più avanzata
- Visualizzare un countdown sul display

---

## 🧠 Autore

Realizzato da **[Il tuo nome o nickname]** — primo progetto Arduino completo ✨
