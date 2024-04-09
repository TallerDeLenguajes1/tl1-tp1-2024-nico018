El archivo .gitignore es un archivo especial en un repositorio Git que especifica qué archivos y directorios deben ser ignorados por Git. Esto significa que Git no rastreará ni incluirá en los cambios aquellos archivos y directorios que estén listados en este archivo. Hay varias razones por las cuales es conveniente incluir un archivo .gitignore en un repositorio:
Evita archivos no deseados en el repositorio: Muchos proyectos generan archivos temporales, archivos de compilación, archivos de configuración local, archivos de log, y otros archivos que no deben ser compartidos entre los colaboradores del proyecto o que simplemente no tienen sentido incluir en el repositorio. El .gitignore permite excluir estos archivos.

Mantiene el repositorio limpio: Al evitar que archivos innecesarios se agreguen al repositorio, se mantiene el repositorio más limpio y enfocado en los archivos esenciales para el proyecto.

Facilita la colaboración: Al mantener fuera del repositorio archivos que son específicos de la configuración local de cada desarrollador, se facilita la colaboración en equipos donde los entornos de desarrollo pueden ser diferentes.

Evita la inclusión accidental de información sensible: A veces, los desarrolladores pueden tener archivos de configuración que contienen información sensible, como claves de API o contraseñas. Al añadir estos archivos al .gitignore, se evita que sean compartidos accidentalmente.

Para configurar el archivo .gitignore: 
Utilizar patrones de coincidencia: Los patrones de coincidencia permiten especificar qué archivos o tipos de archivos se deben ignorar. Por ejemplo, *.log ignorará todos los archivos con extensión .log, mientras que /logs/ ignorará todo el directorio logs/.

Especificar archivos específicos: Se pueden listar archivos específicos que se deseen ignorar, como config.ini o credentials.json.

Utilizar comentarios: Los comentarios pueden ser útiles para documentar el propósito de ciertas exclusiones. Los comentarios en un archivo .gitignore comienzan con #.

3g. El hecho de que los resultados de los apartados 2 y 3 sean los mismos se debe a que el puntero está apuntando a la dirección de memoria de la variable. Cuando se accede a la dirección de memoria de la variable (&variable) y se asigna esta dirección al puntero, el puntero ahora contiene la misma dirección de memoria que la variable.

El punto 4 al imprimir la dirección de memoria del puntero (&puntero), se obtiene la dirección de memoria donde se almacena el puntero en lugar de la dirección de memoria de la variable. Esta dirección de memoria puede ser diferente de las direcciones de memoria de la variable y del puntero.