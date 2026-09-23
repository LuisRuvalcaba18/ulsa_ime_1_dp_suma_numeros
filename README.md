# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
es un programa cuyo objetivo es realizar la suma de numeros, con un maximo de 5 numeros, el programa te pedira los 5 numeros y como resultado te dara la suma de estos. no acepta letras como numeros romanos

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. _____Numeros decimales

**Salidas:**
1. _____suma de los 5 numeros

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____no aacepta numeros romanos
- _____ser < a 5

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
_____si, para mas precision en calculos 

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____que la suma sea de 5 numeros

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | __2_3__ | __4_5_6_ |
| 2 | __4__6_ | __8__10_ |
| 3 | __1_2__ | __1_2__ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** _si, cambie el <= 5 por _CANTIDAD___

## 6. Cómo compilar y ejecutar (Fase 3)
se utiliza el comando "g++ -Wall -Wextra -std=c++17 main.cpp -o suma"
si no marca errores pones "./suma" y ahora te pedira los 5 valores

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_suma_numeros> g++ -Wall -Wextra -std=c++17 main.cpp -o suma
PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_suma_numeros> ./suma
ingresar numero
2
ingresar numero
3
ingresar numero
4
ingresar numero
5
ingresar numero
6
la suma es:20

```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
_____

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | _15____ | __compilo correctamente___ |
| Todos ceros | 0 ×5 | 0 | __0___ | _compilo correctamente_____ |
| Con negativos | -1,-3,-5,-6.-1 | _-16 | __-16___ | __compilo___ |
| Decimales | 0.5 ×5 | 2.5 | __2.5___ | __compilo___ |
| Todos iguales | 7 ×5 | 35 | __35___ | ___compilo__ |
| Caso propio 1 | __1x5___ | ___5__ | _5____ | _compilo____ |
| Caso propio 2 | __8x5___ | __40___ | __40___ | __compilo___ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | no compilaba con <=5|lo cambie por CANTIDAD | __si___ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**que hay muchas formas de programar un mismo objetivo
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**realizar mas a detalle el pseudocodigo
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____que el codigo no compilaba por <=5 y lo resolvi cambiandolo por CANTIODAD

**¿Qué pregunta me quedó sin responder?**
_____que significa std::cout<<"ingresar numero"<<endl;

## 13. Lista de verificación antes de entregar (Fase 5)

- [v ] Llené todas las secciones (no quedan `_____`)
- [ v] Mi programa compila sin advertencias
- [v ] Probé todos los casos de la tabla
- [ v] Hice al menos 3 commits con mensajes claros
- [V ] Hice `git push` y verifiqué mi fork en GitHub
- [ v] Entregué el enlace de mi fork en Classroom