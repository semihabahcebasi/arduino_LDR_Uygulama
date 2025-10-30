*# Arduino ile Işığa Duyarlı LED Kontrolü (LDR Projesi)*

*Bu proje, bir \*\*LDR (Light Dependent Resistor - Işığa Bağımlı Direnç)\*\* kullanarak ortam ışık seviyesini algılayan ve bu seviyeye göre farklı LED'leri etkinleştiren basit bir Arduino uygulamasıdır.* 

*## 🎯 Projenin Amacı*

*Bu projenin temel amaçları:*

*\* Bir analog sensör (LDR) okumasının nasıl yapılacağını öğrenmek.*

*\* LDR için gerekli olan \*\*Voltaj Bölücü (Voltage Divider)\*\* devresini kurmak.*

*\* Okunan analog veriyi `if-else` koşullu yapılarıyla işleyerek dijital çıkışları (LED'ler) kontrol etmektir.*

*## 🛠️ Kullanılan Malzemeler*

*Devreyi kurmak için kullanılan, değerleri doğrulanmış malzemeler aşağıdadır.*

*| Malzeme | Adet | Neden Bu Malzeme Seçildi? |*

*| :--- | :--- | :--- |*

*| Arduino Uno R3 | 1 | Prototipleme ve başlangıç projeleri için en yaygın, kullanımı kolay kart. |*

*| LDR (Fotoresistör) | 1 | Ortamdaki ışık yoğunluğunu algılamak için kullanılan ana sensör. |*

*| 330Ω Direnç | 1 | (Renk Kodu: Turuncu-Turuncu-Kahverengi) LDR ile Voltaj Bölücü devresi oluşturmak için. |*

*| Kırmızı LED | 1 | "Karanlık" durumunu göstermek için görsel bir uyarıcı. |*

*| Yeşil LED | 1 | "Aydınlık" durumunu göstermek için görsel bir uyarıcı. |*

*| 330Ω Direnç | 2 | (Renk Kodu: Turuncu-Turuncu-Kahverengi) LED'lere giden akımı sınırlayarak yanmalarını önlemek. |*

*| Breadboard | 1 | Devreyi lehim yapmadan hızlıca kurmak ve test etmek için. |*

*| Jumper Kablolar | ~10 | Bileşenler arası bağlantıları sağlamak için. |*

*## 🔌 Devre Şeması ve Kurulum Fotoğrafları*

*Devrenin breadboard üzerine kurulu halinin fotoğrafları aşağıdadır.*

*\*\*Genel Görünüm:\*\**

*!\[Projenin Genel Görünümü](media/LDR\_aci3.jpeg)*

*\*\*Devre Detayları:\*\**

*!\[Devre Detayları](media/LDR\_aci2.jpeg)*

*!\[Devre Detayları](media/LDR\_aci1.jpeg)*

*## 🔧 Kurulum ve Çalıştırma*

*Projeyi çalıştırmak için aşağıdaki adımları izleyin:*

*1.  Bu repoyu bilgisayarınıza indirin veya klonlayın.*

*2.  Yukarıdaki fotoğraflara göre devreyi kurun.*

*3.  Proje klasöründeki `.ino` uzantılı dosyayı Arduino IDE ile açın.*

*4.  Arduino kartınızı USB ile bilgisayara bağlayın.*

*5.  Arduino IDE üzerinden doğru kart (Arduino Uno) ve portu seçin.*

*6.  "Yükle" (Upload) butonuna basın.*

*Yükleme tamamlandığında, LDR sensörünün üzerine elinizle gölge yaparak veya bir ışık kaynağı tutarak devreyi test edebilirsiniz.*

*## 📜 Lisans*

*Bu proje \*\*MIT Lisansı\*\* ile lisanslanmıştır.*

