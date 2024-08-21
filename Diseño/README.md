## Proceso de Diseño

El proceso de diseño de la pulsera HealthTag se centró en crear un dispositivo funcional y estéticamente agradable que pueda ser impreso en 3D de manera rápida y eficiente. A continuación, se describen los archivos y recomendaciones para la impresión:

<div align="center">
  <img src="Imagenes/EjemploPulseras.png" alt="Pulsera" width="250"/>
</div>

### Archivos de Diseño

- **Pulsera.stl**: Este archivo contiene el diseño completo de la pulsera HealthTag. El diseño está optimizado para una impresión 3D profesional, asegurando durabilidad y gran velocidad de fabricación. El archivo está listo para ser impreso.

<div align="center">
  <img src="Imagenes/Modelo Pulsera.png" alt="Sensor en Pulsera" width="250"/>
</div>

### Recomendaciones para la Impresión 3D

- **Material**: TPU es recomendado para asegurar una alta resistencia y durabilidad.
- **Tiempo de Impresión**: Aproximadamente 24 minutos en una impresora estándar como la Prusa MK4.

## Instrucciones de Armado de la Pulsera

Una vez impresa la pulsera, siga los pasos a continuación para ensamblar correctamente los componentes electrónicos:

1. **Preparación del NFC Tag:**
   - Tome el NFC tag y, utilizando una lija fina, moldéelo cuidadosamente para que se ajuste perfectamente al espacio designado en la pulsera. Este paso es crucial para asegurar un ajuste limpio y seguro.

   <div align="center">
     <img src="Imagenes/TagNFC.png" alt="NFC Tag" width="175"/> 
     <img src="Imagenes/Lija.png" alt="Lija" width="150"/> 
     <img src="Imagenes/TagFinal.png" alt="Tag Final" width="150"/>
   </div>

2. **Adhesión del NFC Tag:**
   - Una vez que el tag esté correctamente moldeado, proceda a fijarlo en la pulsera utilizando un adhesivo adecuado. Asegúrese de que el tag esté bien alineado y sujeto para evitar cualquier movimiento indeseado durante el uso.

3. **Finalización del Ensamblaje:**
   - Después de adherir el NFC tag, verifique que todos los componentes estén correctamente ensamblados y seguros dentro de la pulsera. Esto completa el proceso de armado de la pulsera HealthTag.

  <br>

   <div align="center">
     <img src="Imagenes/ResultadoFinal.png" alt="Resultado Final" width="200"/>
   </div>

   
## Instrucciones de Armado del Hardware

El siguiente proceso explica cómo conectar los componentes clave de la pulsera HealthTag, específicamente el sensor de latidos cardíacos y la pantalla LCD.

### Conexión del Sensor de Latidos Cardíacos

1. **Identificación de Pines:**
   - El sensor de latidos cardíacos debe ser conectado al pin **IO33 (GPIO 33)** del IdeaBoard (ESP32). Este pin es adecuado para leer la señal analógica proveniente del sensor.
   
2. **Conexión del Sensor:**
   - Conecte el pin de señal del sensor al pin **IO33** del IdeaBoard.
   - Conecte el pin de alimentación del sensor a **3.3V** y el pin de tierra a **GND**.

### Conexión de la Pantalla LCD 16x2

1. **Identificación de Pines:**
   - La pantalla LCD debe conectarse a los pines **SDA (Pin 21)** y **SCL (Pin 22)** del IdeaBoard (ESP32). Estos pines son necesarios para la comunicación I2C entre el microcontrolador y la pantalla.

2. **Conexión de la Pantalla:**
   - Conecte el pin **SDA** de la pantalla al **Pin 21** del IdeaBoard.
   - Conecte el pin **SCL** de la pantalla al **Pin 22** del IdeaBoard.
   - Asegúrese de conectar los pines de alimentación de la pantalla a **5V** y **GND**.

### Imagen de Referencia de Pines

Para mayor claridad, consulte la siguiente imagen que muestra la disposición de los pines del IdeaBoard y las conexiones necesarias para el sensor de latidos cardíacos y la pantalla LCD:

<div align="center">
  <img src="Imagenes/PinesIdeaboard.png" alt="Referencia de Pines" width="500"/>
</div>


Esta imagen ilustra claramente cómo deben ser conectados los componentes, asegurando que las conexiones sean precisas y estables.

---

Asegúrese de revisar todas las conexiones antes de alimentar el sistema para evitar daños en los componentes. Si tiene alguna duda, consulte la documentación 



## Incorporación del Hardware con la Pulsera

La integración del hardware dentro de la pulsera HealthTag es un paso crucial para asegurar tanto la funcionalidad como la comodidad del usuario. A continuación, se describen los pasos para colocar correctamente el sensor de pulsos en la pulsera.

### Colocación del Sensor de Pulsos

1. **Ubicación del Sensor:**
   - El sensor de pulsos debe ser colocado en la parte **inferior** de la pulsera, de manera que quede en contacto directo con la piel del usuario. Esto es fundamental para obtener lecturas precisas del ritmo cardíaco.

2. **Alineación del Sensor:**
   - Asegúrese de que el sensor quede correctamente alineado y sujeto dentro de la pulsera.

3. **Fijación del Sensor:**
   - Utilice un adhesivo seguro para fijar el sensor en su lugar, asegurándose de que no se mueva durante el uso diario. La estabilidad del sensor es esencial para la precisión de las lecturas.

### Consideraciones sobre la Pantalla

Debido al tamaño actual de la pantalla LCD, no es posible integrarla directamente en la pulsera. Sin embargo, en futuras versiones del proyecto, se planea implementar una pantalla más compacta que pueda colocarse sobre el **Tag NFC** de la pulsera. Esta pantalla permitirá visualizar los latidos del usuario directamente desde la pulsera, mejorando aún más la funcionalidad del dispositivo.

### Imagen de Referencia de la Integración

Para mayor claridad, consulte la siguiente imagen que muestra la disposición correcta del sensor de pulsos dentro de la pulsera:

<div align="center">
  <img src="Imagenes/SensorEnPulsera.png" alt="Sensor en Pulsera" width="200"/>
</div>

Esta imagen ilustra cómo debe ser colocado el sensor dentro de la pulsera para asegurar un rendimiento óptimo y comodidad para el usuario.

---

Una vez que el sensor esté correctamente incorporado, asegúrese de realizar pruebas para verificar que las lecturas de pulsos sean precisas y consistentes.

