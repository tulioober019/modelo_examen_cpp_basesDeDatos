#include <iostream>
using namespace std;

class preguntaExamen {
    private:
        int numeroPregunta;
        string nombrePregunta;
        string opcionA;
        string opcionB;
        string opcionC;
        string opcionD;
        char respuesta;

    public:
        preguntaExamen(int numeroPregunta,string nombrePregunta,string opcionA,string opcionB,string opcionC,string opcionD,char respuesta) {
            this->nombrePregunta = nombrePregunta;
            this->numeroPregunta = numeroPregunta;
            this->opcionA = opcionA;
            this->opcionB = opcionB;
            this->opcionC = opcionC;
            this->opcionD = opcionD;
            this->respuesta = respuesta;
        }

        bool preguntarPregunta() {
            char respuestaAlumno;
            bool correcto = false;
            cout << to_string(this->numeroPregunta) << ". " << nombrePregunta << endl;
            cout << "   a) " << opcionA << endl;
            cout << "   b) " << opcionB << endl;
            cout << "   c) " << opcionC << endl;
            cout << "   d) " << opcionD << endl;
            cout << "Tu respuesta: ";
            cin >> respuestaAlumno;

            if (respuestaAlumno == this->respuesta) {
                correcto = true;
            }

            return correcto;
        }

        double obtenerPuntuacion(bool isCorrecto) {
            bool statusPregunta = isCorrecto;
            double puntos = 0;
            if (statusPregunta && true) {
                puntos = 1;
            }
            else {
                puntos = -0.33;
            }

            return puntos;
        }

};

int main() {
    string nombre = "";
    string apellidos = "";
    double puntuacion = 0.00;

    cout << "########################################################################" << endl;
    cout << "# ADMINISTRACIÓN DE SISTEMAS GESTORES DE BASES DE DATOS UNIDADES 2 Y 3 #" << endl;
    cout << "########################################################################" << endl;
    cout << "" << endl;
    

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellidos: ";
    cin >> apellidos;
    cout << "" << endl;
    
    preguntaExamen pregunta1(
        1,
        "¿Qué sentencia se utiliza para modificar la contraseña de un usuario en MySQL?",
        "CHANGE USER",
        "MODIFY USER",
        "SET PASSWORD",
        "ALTER USER",
        'd'
    );

    bool respuesta1 = pregunta1.preguntarPregunta();
    puntuacion = puntuacion + pregunta1.obtenerPuntuacion(respuesta1);
    cout << "" << endl;

    preguntaExamen pregunta2(
        2,
        "¿Cuál es el mecanismo de control de acceso utilizado por MySQL para la autenticación?",
        "LDAP",
        "OAuth",
        "JWT",
        "PAM",
        'd'
    );

    bool respuesta2 = pregunta2.preguntarPregunta();
    puntuacion = puntuacion + pregunta2.obtenerPuntuacion(respuesta2);
    cout << "" << endl;

    preguntaExamen pregunta3(
        3,
        "¿Qué variable del sistema se utiliza para establecer el tamaño de la caché de claves (índices) en el motor de almacenamiento MyISAM?",
        "innodb_buffer_pool_size",
        "innodb_data_file_path",
        "key_buffer_size",
        "key_buffer_size",
        'd'
    );

    bool respuesta3 = pregunta3.preguntarPregunta();
    puntuacion = puntuacion + pregunta3.obtenerPuntuacion(respuesta3);
    cout << "" << endl;
    
    preguntaExamen pregunta4(
        3,
        "¿Cuál es la función primaria del sistema de privilegios de MySQL?",
        "Ejecutar procedimientos almacenados",
        "Crear bases de datos",
        "Autenticar usuarios",
        "Generar informes",
        'c'
    );

    bool respuesta4 = pregunta4.preguntarPregunta();
    puntuacion = puntuacion + pregunta4.obtenerPuntuacion(respuesta4);
    cout << "" << endl;

    preguntaExamen pregunta5(
        5,
        "¿Qué tipo de privilegio permite asignar a otros usuarios los privilegios que posee el usuario actual?",
        "GRANT OPTION",
        "SUPER",
        "CREAR",
        "ADMIN",
        'a'
    );

    bool respuesta5 = pregunta5.preguntarPregunta();
    puntuacion = puntuacion + pregunta5.obtenerPuntuacion(respuesta5);
    cout << "" << endl;

    preguntaExamen pregunta6(
        6,
        "¿Cuál es la principal ventaja de utilizar la base de datos INFORMATION_SCHEMA en lugar de las órdenes SHOW en MySQL?",
        "Proporciona información sobre las tablas del sistema.",
        "Cumple las reglas de Codd almacenando datos en tablas.",
        "Limita la flexibilidad en la consulta de metadatos.",
        "Requiere el uso de nuevas palabras clave SQL",
        'b'
    );

    bool respuesta6 = pregunta6.preguntarPregunta();
    puntuacion = puntuacion + pregunta6.obtenerPuntuacion(respuesta6);
    cout << "" << endl;

    preguntaExamen pregunta7(
        7,
        "¿Cuál de los siguientes elementos NO es proporcionado por el protocolo TLS en una conexión segura?",
        "Compresión",
        "Autenticación",
        "Confidencialidad",
        "Integridad",
        'a'
    );

    bool respuesta7 = pregunta7.preguntarPregunta();
    puntuacion = puntuacion + pregunta7.obtenerPuntuacion(respuesta7);
    cout << "" << endl;

    preguntaExamen pregunta8(
        8,
        "¿Cómo se cargan en memoria los cambios realizados en las tablas de usuarios y privilegios?",
        "Al reniciar el servidor",
        "Al ejecutar la sentencia FLUSH PRIVELEGES",
        "Al utilizar el comando mysqladmin reload",
        "Todas las anteriores",
        'd'
    );

    bool respuesta8 = pregunta8.preguntarPregunta();
    puntuacion = puntuacion + pregunta8.obtenerPuntuacion(respuesta8);
    cout << "" << endl;

    preguntaExamen pregunta9(
        9,
        "¿Cómo se pueden especificar opciones de funcionamiento en la línea de comandos al ejecutar programas MySQL (tanto clientes como servidores)?",
        "En un fichero de opciones",
        "En variables de entorno.",
        "Después del nombre del programa.",
        "Todas las anteriores",
        'c'
    );

    bool respuesta9 = pregunta9.preguntarPregunta();
    puntuacion = puntuacion + pregunta9.obtenerPuntuacion(respuesta9);
    cout << "" << endl;

    preguntaExamen pregunta10(
        10,
        "¿Qué sucede durante la fase de \"El servidor no acepta más conexiones\" en el proceso de apagado de MySQL?",
        "Se marcan los subprocesos asociados a los clientes como 'muertos'.",
        "Se realiza un rollback de las transacciones activas.",
        "Se cierran los puertos TCP/IP.",
        "Se crean subprocesos de apagado",
        'c'
    );

    bool respuesta10 = pregunta10.preguntarPregunta();
    puntuacion = puntuacion + pregunta10.obtenerPuntuacion(respuesta10);
    cout << "" << endl;

    preguntaExamen pregunta11(
        11,
        "¿En qué momento son efectivos los cambios de privilegios cuando se utilizan las sentencias GRANT, REVOKE o SET PASSWORD?",
        "Solo después de recargar manualmente las tablas en memoria",
        "Al reniciar el servidor",
        "Después de 24 horas",
        "Inmediatamente",
        'd'
    );

    bool respuesta11 = pregunta11.preguntarPregunta();
    puntuacion = puntuacion + pregunta11.obtenerPuntuacion(respuesta11);
    cout << "" << endl;

    preguntaExamen pregunta12(
        12,
        "¿Cuál es la función del parámetro REQUIRE en la creación de usuarios?",
        "Especificar el tipo de autenticación",
        "Establecer el límite de consultas por hora.",
        "Definir restricciones de seguridad basadas en SSL/TLS",
        "Todas las anteriores",
        'd'
    );

    bool respuesta12 = pregunta12.preguntarPregunta();
    puntuacion = puntuacion + pregunta12.obtenerPuntuacion(respuesta12);
    cout << "" << endl;

    preguntaExamen pregunta13(
        13,
        "¿Qué opción se utiliza para ver el modo SQL actualmente en uso en el servidor MySQL?",
        "SET [SESSION | GLOBAL] sql_mode = \"modos\"",
        "SELECT @@sql_mode",
        "SHOW VARIABLES LIKE '@sql ",
        "--sql-mode` al iniciar el servidor.",
        'b'
    );

    bool respuesta13 = pregunta13.preguntarPregunta();
    puntuacion = puntuacion + pregunta13.obtenerPuntuacion(respuesta13);
    cout << "" << endl;

    preguntaExamen pregunta14(
        14,
        "¿Cuál de los siguientes clientes de MySQL se utiliza para hacer copias de seguridad lógicas de las definiciones de objetos y los datos de la base de datos?",
        "mysqldump",
        "mysqlcheck",
        "mysqladmin",
        "mysqlpump",
        'a'
    );

    bool respuesta14 = pregunta14.preguntarPregunta();
    puntuacion = puntuacion + pregunta14.obtenerPuntuacion(respuesta14);
    cout << "" << endl;

    preguntaExamen pregunta15(
        15,
        "¿Cuál es una de las tareas principales de un administrador de bases de datos?",
        "Administrar servidores web",
        "Gestionar usuarios",
        "Desarollar aplicaciones",
        "Diseñar interfaces de usuario.",
        'b'
    );

    bool respuesta15 = pregunta15.preguntarPregunta();
    puntuacion = puntuacion + pregunta15.obtenerPuntuacion(respuesta15);
    cout << "" << endl;

    preguntaExamen pregunta16(
        16,
        "¿Cuál es el propósito principal de documentar la configuración del servidor MySQL?",
        "Almacenar información de errores",
        "Registrar consultas lentas.",
        "Facilitar la migración de datos",
        "Agilizar la detección de cambios en el rendimiento",
        'd'
    );

    bool respuesta16 = pregunta16.preguntarPregunta();
    puntuacion = puntuacion + pregunta16.obtenerPuntuacion(respuesta16);
    cout << "" << endl;

    preguntaExamen pregunta17(
        17,
        "¿Qué privilegio permite ejecutar comandos de supervisión en MySQL?",
        "SUPER",
        "SHUTDOWN",
        "REPLICATION CLIENT",
        "PROCESS",
        'a'
    );

    bool respuesta17 = pregunta17.preguntarPregunta();
    puntuacion = puntuacion + pregunta17.obtenerPuntuacion(respuesta17);
    cout << "" << endl;

    preguntaExamen pregunta18(
        18,
        "¿Qué permite MySQL en cuanto al cifrado de conexiones?",
        "Solo conexiones cifradas por defecto",
        "Activar el cifrado para conexiones individuales",
        "Cifrado solo para conexiones remotas",
        "Desactivar completamente el cifrado",
        'b'
    );

    bool respuesta18 = pregunta18.preguntarPregunta();
    puntuacion = puntuacion + pregunta18.obtenerPuntuacion(respuesta18);
    cout << "" << endl;

    preguntaExamen pregunta19(
        19,
        "¿Cómo se configuran las conexiones en el cliente gráfico Workbench?",
        "Utilizando tuberías para la comunicación.",
        "Estableciendo valores en el fichero de configuración del servidor.",
        "Escribiendo el nombre del cliente seguido de las opciones --verbose y --help en la consola",
        "Configurando las conexiones en la pestaña Home",
        'd'
    );

    bool respuesta19 = pregunta19.preguntarPregunta();
    puntuacion = puntuacion + pregunta19.obtenerPuntuacion(respuesta19);
    cout << "" << endl;

    preguntaExamen pregunta20(
        20,
        "¿Por defecto, MySQL cifra las conexiones entre clientes y el servidor?",
        "Solo en servidores Linux",
        "No",
        "Si",
        "Depende de la versión de MySQL",
        'b'
    );

    bool respuesta20 = pregunta20.preguntarPregunta();
    puntuacion = puntuacion + pregunta20.obtenerPuntuacion(respuesta20);
    cout << "" << endl;

    preguntaExamen pregunta21(
        21,
        "¿Cuál es una opción válida para permitir el acceso remoto al servidor a través de conexiones TCP/IP en Windows?",
        "Utilizar tuberías o memoria compartida para la comunicación.",
        "En el fichero de configuración, comentar la línea port y enable-named-pipe",
        "Lanzar el instalador y desmarcar la opción TCP/IP",
        "Lanzar el instalador y marcar la opción TCP/IP, indicando el puerto",
        'd'
    );

    bool respuesta21 = pregunta21.preguntarPregunta();
    puntuacion = puntuacion + pregunta21.obtenerPuntuacion(respuesta21);
    cout << "" << endl;

    preguntaExamen pregunta22(
        22,
        "¿Qué comando se utiliza para limpiar el contenido de los ficheros de registro en MySQL?",
        "FLUSH LOGS",
        "SHOW LOGS",
        "CLEAR LOGS",
        "RESET LOGS",
        'a'
    );

    bool respuesta22 = pregunta22.preguntarPregunta();
    puntuacion = puntuacion + pregunta22.obtenerPuntuacion(respuesta22);
    cout << "" << endl;

    preguntaExamen pregunta23(
        23,
        "¿Cuál es la prioridad de las opciones de configuración si una opción se especifica varias veces con valores diferentes?",
        "Variables de entorno > Ficheros de opciones > Línea de comandos",
        "Ficheros de opciones > Variables de entorno > Línea de comandos",
        "Línea de comandos > Variables de entorno > Ficheros de opciones",
        "Línea de comandos > Ficheros de opciones > Variables de entorno",
        'd'
    );

    bool respuesta23 = pregunta23.preguntarPregunta();
    puntuacion = puntuacion + pregunta23.obtenerPuntuacion(respuesta23);
    cout << "" << endl;

    preguntaExamen pregunta24(
        24,
        "¿Qué opción del servidor mysqld se utiliza para cambiar el idioma en el que se generan los mensajes de error?",
        "--locale",
        "--lc-messages",
        "--lang",
        "--language",
        'b'
    );

    bool respuesta24 = pregunta24.preguntarPregunta();
    puntuacion = puntuacion + pregunta24.obtenerPuntuacion(respuesta24);
    cout << "" << endl;

    preguntaExamen pregunta25(
        25,
        "¿Qué son los roles y perfiles en la gestión de usuarios de bases de datos?",
        "Estructuras para agrupar privilegios",
        "Tipos de consultas",
        "Nombres de bases de datos",
        "Elementos decorativos",
        'a'
    );

    bool respuesta25 = pregunta25.preguntarPregunta();
    puntuacion = puntuacion + pregunta25.obtenerPuntuacion(respuesta25);
    cout << "" << endl;

    preguntaExamen pregunta26(
        26,
        "¿Qué tipo de información se puede obtener de la tabla `TABLES` en la base de datos INFORMATION_SCHEMA?",
        "Restricciones de tablas",
        "Sistemas de comparación de caracteres",
        "Tablas de las bases de datos",
        "Privilegios de acceso a bases de datos",
        'c'
    );

    bool respuesta26 = pregunta26.preguntarPregunta();
    puntuacion = puntuacion + pregunta26.obtenerPuntuacion(respuesta26);
    cout << "" << endl;

    preguntaExamen pregunta27(
        27,
        "¿Qué opción en la cláusula REQUIRE de CREATE USER obliga al usuario a utilizar una conexión sin cifrar?",
        "ISSUER",
        "SSL",
        "NONE",
        "X509",
        'c'
    );

    bool respuesta27 = pregunta27.preguntarPregunta();
    puntuacion = puntuacion + pregunta27.obtenerPuntuacion(respuesta27);
    cout << "" << endl;

    preguntaExamen pregunta28(
        28,
        "¿Cuál es una ventaja del motor de almacenamiento InnoDB en comparación con MyISAM en términos de rendimiento?",
        "Mayor eficiencia con cargas de trabajo de lecturas masivas.s",
        "No soporta claves foráneas ni integridad referencial.",
        "Permite el uso de escrituras retrasadas de clave",
        "Indexación de texto completo y compresión de datos",
        'a'
    );

    bool respuesta28 = pregunta28.preguntarPregunta();
    puntuacion = puntuacion + pregunta28.obtenerPuntuacion(respuesta28);
    cout << "" << endl;

    preguntaExamen pregunta29(
        29,
        "¿Cuál es la sintaxis simplificada para crear un usuario y concederle privilegios en MySQL?",
        "CREATE USER usuario IDENTIFIED BY 'contraseña' GRANT privilegios;",
        "GRANT privilegios TO usuario;",
        "CREATE USER usuario GRANT privilegios;",
        "GRANT privilegios ON objeto TO usuario IDENTIFIED BY 'contraseña';",
        'd'
    );

    bool respuesta29 = pregunta29.preguntarPregunta();
    puntuacion = puntuacion + pregunta29.obtenerPuntuacion(respuesta29);
    cout << "" << endl;

    preguntaExamen pregunta30(
        30,
        "¿Cómo se puede cambiar el modo SQL del servidor durante el tiempo de ejecución para afectar solo al cliente actual?",
        "Con el comando `SET GLOBAL sql_mode = \"modos\"`",
        "Usando la opción `--sql-mode` al iniciar el servidor.",
        "Seleccionando con `SELECT @@sql_mode`.",
        "Agregando la línea `sql-mode = \"modos\"` en el archivo my.ini.",
        'a'
    );

    bool respuesta30 = pregunta30.preguntarPregunta();
    puntuacion = puntuacion + pregunta30.obtenerPuntuacion(respuesta30);
    cout << "" << endl;

    cout << nombre << " " << apellidos << ", su puntuación es " << puntuacion << endl;
    cout << "La nota de este examen es un " << puntuacion/3 << "." << endl;
    return 0;
}