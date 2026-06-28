# Project-Mikrocontroller-Water
Project untuk mata kuliah Sistem Mikrocontroller- Kelompok 9

# Deskripsi

# Fitur

# Nama Anggota:
1. Cindy Marcellina
2. Mochammad Andwi Haikal (23552011011)





# Smart Galon Monitoring System

Prototype monitoring ketersediaan air galon berbasis ESP32 dan sensor HC-SR04 yang dapat memantau kondisi air secara real-time menggunakan Web Dashboard, indikator LED, dan buzzer.

**ESP32 WeMos • HC-SR04 • LED • Buzzer • Web Dashboard • HTTP • FreeRTOS**

---

# 1. Gambaran Umum

Smart Galon Monitoring System merupakan sistem monitoring sederhana yang dirancang untuk mengetahui kondisi ketersediaan air pada galon secara otomatis. Sistem menggunakan sensor ultrasonik HC-SR04 untuk mengukur jarak antara sensor dan permukaan air.

Data hasil pembacaan sensor diproses oleh ESP32 WeMos untuk menentukan status kondisi air berdasarkan jarak yang terdeteksi. Informasi tersebut kemudian ditampilkan secara real-time melalui Web Dashboard yang dapat diakses menggunakan smartphone maupun laptop yang berada dalam jaringan yang sama.

Sistem juga dilengkapi dengan LED sebagai indikator visual serta buzzer sebagai alarm otomatis ketika kondisi air dianggap kosong atau tidak terdeteksi.


---

# 2. Tujuan Proyek

- Membaca jarak permukaan air menggunakan sensor HC-SR04.
- Memantau kondisi ketersediaan air secara otomatis.
- Menampilkan data monitoring melalui Web Dashboard.
- Menampilkan indikator kondisi menggunakan LED.
- Memberikan alarm menggunakan buzzer.
- Mengimplementasikan HTTP Server pada ESP32.
- Mengimplementasikan RTOS (Real-Time Operating System).

---


```text
2 cm – 5 cm
