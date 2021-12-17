class Devirdaim{
  
 private:
   boolean calisma=false;
   int suSicaklik=;
   int anlikSicaklik=24;
   int butonPin=;
   int potPin=A0
  public:
    Devirdaim(int bPin, int
      butonPin=bPin;
      potPin=pPin;
}
   boolean checkCalisma(){
     if(digitalRead(butonPin)==HIGH)return true; else return false;
   }
    void check(){
      if(checkCalisma()==true) Serial.println("Sistem Çalışıyor");else Serial.println("STOP");
      
    }
    int sicaklik(){
      
    int sDeger=analogRead(potPin);
    sDeger=sDeger/10;
    return sDeger;
      suSicaklik=SS;  
