#include <Arduino.h>
/*
  Este código es para el proyecto de la mano para lenguaje de señas.
*/ 
#include <Servo.h>
int posicion;

// mangos.

Servo pulgarmini; // PORTD0
Servo pulgar; // PORTD1
Servo indice; // PORTD2
Servo medio; // PORTD3 
Servo anular; // PORTD4
Servo menique;
Servo antebrazo; // PORTD5

char letra;
int DEFAULT_DELAY = 4000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pulgarmini.attach(9); //PWM 3
  pulgar.attach(3); //PWM 5
  indice.attach(4); //PWM 6
  medio.attach(10); //PWM 9
  anular.attach(6); //PWM 10
  menique.attach(7);
  antebrazo.attach(8); //PWM 11
}

void loop() {
  /*if (Serial.available())
  {
    posicion = Serial.parseInt();
    antebrazo.write(posicion);
    Serial.println(posicion);
  }
  */
  // put your main code here, to run repeatedly:
  
  if (Serial.available() > 0)
  {
    char letra = Serial.read();

switch(letra)
    {
      case 'a':
      case 'A':
      // LETRA A
      Serial.println(letra);
      pulgarmini.write(180); // Abierto
      pulgar.write(180); // Abierto
      indice.write(180); // Cerrado
      medio.write(180); // Cerrado 
      anular.write(0); // Cerrado
      menique.write(45); // Cerrado
      antebrazo.write(0); // Quieto
      delay(4000); //
      break;

      case 'b':
      case 'B': 
      //Letra B
      Serial.println(letra);
      pulgarmini.write(90); // Cerrado
      pulgar.write(90); // Cerrado
      indice.write(0); // Abierto
      medio.write(0); // Abierto
      anular.write(180); // Abierto
      menique.write(180); // Abierto
      antebrazo.write(0); // Quieto
      delay(4000);
      break;

      case 'c':
      case 'C':
      //Letra C
      Serial.println(letra);
      pulgarmini.write(90); // Dentro
      pulgar.write(100); // Poco flexionado
      indice.write(130); // Poco flexionado
      medio.write(100); // Poco flexionado
      anular.write(100); // Poco flexionado
      menique.write(90); // Poco flexionado
      antebrazo.write(90); // Poco rotado
      delay(4000);
      break;  

      case 'd':
      case 'D':
      //Letra D
      Serial.println(letra);
      anular.write(90); // Cerrado
      menique.write(60); // Cerrado      
      medio.write(100); // Cerrado 
      delay(500); // Espera     
      pulgarmini.write(90); // Cerrado
      delay(500);
      pulgar.write(90); // Cerrado
      indice.write(0); // Abierto
      antebrazo.write(90); // Rotado
      delay(4000);
      break;              

      case 'e':
      case 'E':
      Serial.println(letra);
      pulgarmini.write(90); // Cerrado
      pulgar.write(90); // Cerado
      indice.write(180); // Cerrado
      medio.write(180); // Cerrado 
      anular.write(0); // Cerrado
      menique.write(45); // Cerrado 
      antebrazo.write(0); // Quieto
      delay(4000); //
      break;

      case 'i':
      case 'I':
      Serial.println("i");
      pulgarmini.write(90); // Cerrado
      pulgar.write(90); // Cerrado
      indice.write(180); // Cerrado
      medio.write(180); // Cerrado 
      anular.write(0); // Cerrado
      menique.write(180); // Abierto
      antebrazo.write(0); // Quieto
      delay(4000); //
      break;

      case 'o':
      case 'O':
      Serial.println("o");
      pulgarmini.write(90); // Cerrado
      pulgar.write(90); // Cerrado
      indice.write(180); // Cerrado
      medio.write(180); // Cerrado 
      anular.write(0); // Cerrado
      menique.write(45); // Cerrado
      antebrazo.write(90); // Rotando
      delay(4000); //  
      break;

      case 'u':
      case 'U':

      // LETRA U
      Serial.println(letra);
      pulgarmini.write(90); // Cerrado
      pulgar.write(90); // Cerrado
      indice.write(0); // Abierto
      medio.write(0); // Abierto 
      anular.write(0); // Cerrado
      menique.write(45); // Cerrado 
      antebrazo.write(0); // Quieto
      delay(4000); //
      
      default:
      // Mano abierta 
      Serial.println("Abierto");
      pulgarmini.write(180); // Abierta 
      pulgar.write(180); // Abierta
      indice.write(0); // Abierto
      medio.write(0); // Abierto
      anular.write(180); // Abierto
      menique.write(180); // Abierto
      antebrazo.write(0); // Quieto
      delay(4000);
      break;
    }
    //posicion = Serial.parseInt();
    //antebrazo.write(posicion);
    //Serial.println(posicion);
  }
}
  // put your main code here, to run repeatedly:

  // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  // // LETRA A
  // pulgarmini.write(180); // Abierto
  // pulgar.write(180); // Abierto
  // indice.write(180); // Cerrado
  // medio.write(180); // Cerrado 
  // anular.write(0); // Cerrado
  // menique.write(45); 
  // antebrazo.write(0); // mkdlasmdlksad
  // delay(4000); //

  // // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  // // LETRA E
  // pulgarmini.write(90); // Abierto
  // pulgar.write(90); // Abierto
  // indice.write(180); // Cerrado
  // medio.write(180); // Cerrado 
  // anular.write(0); // Cerrado
  // menique.write(45); 
  // antebrazo.write(0); // mkdlasmdlksad
  // delay(4000); //

  // // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  // // LETRA I
  // pulgarmini.write(90); // Abierto
  // pulgar.write(90); // Abierto
  // indice.write(180); // Cerrado
  // medio.write(180); // Cerrado 
  // anular.write(0); // Cerrado
  // menique.write(180); 
  // antebrazo.write(0); // mkdlasmdlksad
  // delay(4000); //

  // // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  // // LETRA O
  // pulgarmini.write(90); // Abierto
  // pulgar.write(90); // Abierto
  // indice.write(180); // Cerrado
  // medio.write(180); // Cerrado 
  // anular.write(0); // Cerrado
  // menique.write(45); 
  // //antebrazo.write(90); // mkdlasmdlksad
  // delay(4000); //  

  // // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  // // LETRA U
  // pulgarmini.write(90); // Abierto
  // pulgar.write(90); // Abierto
  // indice.write(0); // Cerrado
  // medio.write(0); // Cerrado 
  // anular.write(0); // Cerrado
  // menique.write(45); 
  // antebrazo.write(0); // mkdlasmdlksad
  // delay(4000); // 

  //   // Mano abierta 
  // pulgarmini.write(180); // Abierta 
  // pulgar.write(180); // Abierta
  // indice.write(0); // Abierto
  // medio.write(0); // Abierto
  // anular.write(180); // Abierto
  // menique.write(180);
  // antebrazo.write(0);
  // delay(4000);

  /*/ Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(4000);*/

  //pulgarmini.write(posicion); // RANGO DE 90 A 180 (ABIERTO)
  //pulgar.write(posicion); // 0 representa cerrado 
  //indice.write(posicion); // 180 representa abierto 
  //medio.write(posicion); // 0 representa abierto 
  //anular_menique.write(posicion); // 0 representa cerrado 
  //antebrazo.write(posicion); //pendiente 
  //delay(5000);



    //-------------------------------------------------------------------------------------------------------------------------
    /*switch (letra)
    {
      case 'a':
      case 'A':
      Serial.println("heree2");

        // LETRA A
        pulgarmini.write(180); // Abierto
        pulgar.write(180); // Abierto
        indice.write(180); // Cerrado
        medio.write(180); // Cerrado 
        anular.write(0); // Cerrado
        menique.write(45); // Cerrado
        antebrazo.write(0); // Quieto
        delay(DEFAULT_DELAY); //
        break;

      default:
      Serial.println("heree");
        // Mano abierta 
        // pulgarmini.write(180); // Abierta 
        // pulgar.write(180); // Abierta
        // indice.write(0); // Abierto
        // medio.write(0); // Abierto
        // anular.write(180); // Abierto
        // menique.write(180); // Abierto
        // antebrazo.write(0); // Quieto
        // delay(DEFAULT_DELAY);
        break;
    }
  }
  
  //Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // LETRA A
  pulgarmini.write(180); // Abierto
  pulgar.write(180); // Abierto
  indice.write(180); // Cerrado
  medio.write(180); // Cerrado 
  anular.write(0); // Cerrado
  menique.write(45); 
  antebrazo.write(0); // mkdlasmdlksad
  delay(DEFAULT_DELAY); //

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // LETRA E
  pulgarmini.write(90); // Abierto
  pulgar.write(90); // Abierto
  indice.write(180); // Cerrado
  medio.write(180); // Cerrado 
  anular.write(0); // Cerrado
  menique.write(45); 
  antebrazo.write(0); // mkdlasmdlksad
  delay(DEFAULT_DELAY); //

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // LETRA I
  pulgarmini.write(90); // Abierto
  pulgar.write(90); // Abierto
  indice.write(180); // Cerrado
  medio.write(180); // Cerrado 
  anular.write(0); // Cerrado
  menique.write(180); 
  antebrazo.write(0); // mkdlasmdlksad
  delay(DEFAULT_DELAY); //

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // LETRA O
  pulgarmini.write(90); // Abierto
  pulgar.write(90); // Abierto
  indice.write(180); // Cerrado
  medio.write(180); // Cerrado 
  anular.write(0); // Cerrado
  menique.write(45); 
  antebrazo.write(90); // mkdlasmdlksad
  delay(DEFAULT_DELAY); //  

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // LETRA U
  pulgarmini.write(90); // Abierto
  pulgar.write(90); // Abierto
  indice.write(0); // Cerrado
  medio.write(0); // Cerrado 
  anular.write(0); // Cerrado
  menique.write(45); 
  antebrazo.write(0); // mkdlasmdlksad
  delay(DEFAULT_DELAY); // 

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);

  // Mano abierta 
  pulgarmini.write(180); // Abierta 
  pulgar.write(180); // Abierta
  indice.write(0); // Abierto
  medio.write(0); // Abierto
  anular.write(180); // Abierto
  menique.write(180);
  antebrazo.write(0);
  delay(DEFAULT_DELAY);*/

  //pulgarmini.write(posicion); // RANGO DE 90 A 180 (ABIERTO)
  //pulgar.write(posicion); // 0 representa cerrado 
  //indice.write(posicion); // 180 representa abierto 
  //medio.write(posicion); // 0 representa abierto 
  //anular_menique.write(posicion); // 0 representa cerrado 
  //antebrazo.write(posicion); //pendiente 
  //delay(DEFAULT_DELAY); */
  
