#include <Arduino.h>
/*
  Este código es para el proyecto de la mano para lenguaje de señas.
*/ 
#include <Servo.h>
int posicion;

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

    switch (letra)
    {
      case 'a':
      case 'A':
        break;

      default:
        break;
    }
  }
  
  // Mano abierta 
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

  /*/ Mano abierta 
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
  //delay(DEFAULT_DELAY);
}
