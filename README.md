# Pryecto: el prgrama para falcitar el proceso de aviso, lista, y pago de residencia.

Este proyecto es para ayudar a las personas que se encargan de la gestión de la residencia en nuestro campus. Hay prefectos que se encargan de cada uno de los pisos. Su deber es comprobar si los residentes están en sus habitaciones a las 10:20 tocando las puertas. Además, si los residentes no regresan antes de las 10:30, tienen que sacar el aviso y cuando lleguen tienen que decir a las personas de la recepción que ya han llegado. Así, tienen varios trabajos que tienen que realizar todos los días

Para que las personas que se encargan de esto puedan hacerlos de manera fácil, de los trabajos que tienen ellos, voy a crear un programa que tiene una funcion que pueden ayudarles. La función es para checar el monto total de pago y el prefecto puede ingresar el numero de habitacion y checar los datos del residente y al final el programa imprime el monto total que el residente tiene que pagar. 

<img width="449" alt="image" src="https://github.com/DongjuMun/proyecto/assets/150094637/1e968627-3cf3-43f9-8fdf-f93cc234033d">



<img width="445" alt="image" src="https://github.com/DongjuMun/proyecto/assets/150094637/483bb1f9-f988-459f-a1e7-ca88b4b9b644">
https://drive.google.com/file/d/1qCcJ1d9q6THF63YxdEB8U6v0XtB7gZAD/view?usp=sharing

En esta imagen, hay 5 clases. En la clase de Prfecto, hay una varibale prefectoID que guarda el id del prefecto. Y la realcion entre la clase Prefecto y la clase Residente es agregacion. Con el constructor Prefecto(), va a inicializar las variables y con los metodos getPrefectoID y setPrefectoID, se puede regresar y modificar el valor de la variable prefectoID.

En la clase de Residente, hay 5 variables que son datos importantes del residente y para cada variable hay un getter. Con el metodo buscaResidente, el prefecto puede ingresar el numero de habitacion de un residente, entonces el metodo va a buscar los datos del residente de un archivo de texto y va a modificar los datos de las variables de la clase Residente como si fuera ese metodo un setter. Hay un archivo de texto para cada piso y en el metodo, dependiendo del numero de habitacion, el metodo puede aceder a un cierto archvio de texto usando switch-case. El metodo imprimeResidente puede mostrar los datos que tiene el residente al prefecto.
En la clase Residente, también existe un metodo que se llama tipoDePago(). Este metodo es para encontrar cual es el tipo de pago del residente. Hay dos tipos de pago, que son Pago anticipado y Pago parcial. En el metodo, con el numero de habitacion, se van a buscar los datos del pago, acediendo al archivo de texto que se llama Pago. En los dos metodos calculaMontoTotalAntc y calculaMontoTotalParc, con los metodos de la clase PagoAnticipado y la clase PagoParcial, va a regresar el monto total usnado los metodos de las dos clases.

En la clase PagoAnticipado, hay dos variables y tienen getter y setter para cada una. Tambien hay un constructor de la clase. En el metodo de calculaMontoTotalAntc, calcula el monto total. La explicacion esta abajo. 

En la clase PagoParcial, hay dos variables y tienen getter y setter para cada una. Tambien hay un constructor de la clase. En el metodo de calculaMontoTotalParc, calcula el monto total. La explicacion esta abajo. 

En el Main.cpp, primero, pregunta el ID del Profecto. Si el ID de prefecto existe en el arreglo dentro de la funcion local esPrefecto(), puede realizar el siguente proceso. Si no, va a inidicar que el ID es invalida y termina el programa. En el siguente proceso, primero el programa preguta el numero de habiaticion para checar el estado de pago del residente. Con el valor string (ex) 402A, 304B), ingresa ese valor al metodo de buscaDeResidente y ahi va a buscar el residente y ingresar los valores a las variables del objeto residente(buscaDeResidente funciona como un setter de todas las variables de la clase Residente). Despues, con el metodo imprimeResidente, imprime los datos de las variables de la clase. Despues, dependiendo el tipo de pago, si  el resultado del metodo tipoDePago de la clase Residente es 1, eso significa que el pago del residente es anticipado, y si es 2, eso significa que el pago es parcial. Dependiendl del tipo de pago, varia cuanto paga el residente. Por ejemplo, si el pago es anticipado y la habitación es individual, el residnete tiene que pagar 75150 mxn(sin descuento en este caso. Si haya descuento, entonces el residente solo tiene que pagar 75150*0.85 = 63877.5 mxn). Ahora dependiendo el tipo de pago, en el metodo calculaMontoTotalAntc() o en el calculaMontoTotalParc() va a regresar el monto Total que el residente tiene que pagar con el interes. Por ejemplo, si el residente tiene descuento, su pago es parcial, su habitacion es doble y no ha pagado por 2 meses, el monto total será (10500*0.85) * 1.02 + (10500*0.85) = 18028.5 (Al nuevo monto parcial no le aplica el interés). Si el residente tiene descuento, su pago es anticipado, tiene un cuarto compartido y no ha pagado por 4 meses, entonces su monto total será (50100*0.85) * 1.015 * 1.015 * 1.015 * 1.015 = 45198.16… = 45198.2. Así, el prgrama termina. 
