Como ADMON-HR quiero crear/ver/actualizar/deshabilitar BONOS para asociarlos a los USUARIO(s) con el fin de tener el histórico y valores para hacer los calculos de nómina

Diseñar la página CRUD de los bonos
Implementar la página CRUD de los bonos
Asociar el bono como un campo histórico


HR	Como ADMON-HR quiero crear/ver/actualizar ARL/EPS/CAJA-COMPSENSACIÓN para asociarlos un USUARIO(s) y DOCUMENTOS-SOPORTE con el fin de tener el histórico y valores para hacer los calculos de nómina
HR	Como ADMON-HR quiero asociar un ARL a USUARIO(s)


Diseñar la página CRUD de ARL/EPS/CAJA-COMPENSACIÓN
Implementar la página CRUD de los ARL/EPS/CAJA-COMPENSACIÓN
Asociar ARL/EPS/CAJA-COMSENSACIÓN como un campo histórico a un USUARIO
Asociar un documento de soporte para cada uno (ARL/EPS/CAJA-COMSENSACIÓN)




Como ADMON-HR quiero crear/ver/actualizar CONTRATOS para asociarlos un USUARIO(s) y DOCUMENTO-SOPORTE  con el fin de tener el histórico

Diseñar la página CRUD de CONTRATOS
Implementar la página CRUD de los CONTRATOS
Asociar CONTRATOS como un campo histórico a un USUARIO
Asociar un documento de soporte al CONTRATO
Ver la lista de CONTRATOS históricos


Como ADMON-HR quiero crear/ver/actualizar/deshabilitar NOVEDADES(Accidente laboral, Vacaciones, Permiso no remunerado) para asociarlos un USUARIO y/o DOCUMENTO-SOPORTE si es necesario; con el fin de tener el histórico y hacer los cálculos de NOMINA


Diseñar la página CRUD de NOVEDADES
Implementar la página CRUD de los NOVEDADES
Asociar NOVEDADES como un campo histórico a un USUARIO
Asociar un documento de soporte al CONTRATO
Ver la lista de NOVEDADES históricos de un USUARIO



Como ADMINISTRADOR-ALMACEN crear/ver/actualizar/deshabilitar MATERIALES con el fin de asignarlos a una CUADRILLA y tener actualizado la disponibilidad

Diseñar la página CRUDL de MATERIALES
Implementar la página CRUDL de los MATERIALES
Asociar CATEGORIA(s) a un MATERIAL
Ver la lista de MATERIALES filtrando por (CUADRILLAS, CANTIDAD, NOMBRE, CATEGORIA)
Actualizar la disponibilidad de MATERIALES manteniendo el histórico de NUEVOS-INGRESOS



Como ADMINISTRADOR-ALMACEN crear/ver/actualizar/deshabilitar VEHÍCULO(s) con el fin de asignarlos a una CUADRILLA y tener actualizado la disponibilidad

Diseñar la página CRUDL de VEHÍCULO(s)
Implementar la página CRUDL de los VEHÍCULO(s)
Asociar CATEGORIA(s) a un VEHÍCULO
Ver la lista de VEHÍCULO(s) filtrando por (CUADRILLAS, PLACA, CATEGORIA)
Actualizar la disponibilidad de VEHÍCULO(s) manteniendo el histórico de NUEVOS-INGRESOS



Como ADMINISTRADOR-ALMACEN crear/ver/actualizar/deshabilitar BODEGA(s) con el fin de asignar RECURSOS(MATERIALES, HERRAMIENTAS, EQUIPOS, ELEMENTO-DOTACION, VEHICULO)

Diseñar la página CRUDL de BODEGA(s)
Implementar la página CRUDL de los BODEGA(s)
Asociar CATEGORIA(s) a un BODEGA (PROPIA, TERCERO)
Ver la lista de BODEGA(s) filtrando por (CATEGORIA)


Como BODEGISTA debo cambiar el estado de un RECURSO(s) (Entrega/Retiro)

Diseñar la página CAMBIO-ESTADO-RECURSO
Implementar la página CAMBIO-ESTADO-RECURSO
Cambiar el estado guardando en que fecha cambió y quien lo hizo



Como JEFE-DESPACHADOR quiero asignar CUADRILLAS a un DESPACHADOR para que sea gestionado adecuadamente
Diseñar la página asignación de CUADRILLAS
Implementar la página CUADRILLAS
Verificar máximo de 15 cuadrillas a un DESPACHADOR

Como DESPACHADOR crear/ver/actualizar/deshabilitar CUADRILLAS para asignarle RECURSOS(JEFE-CUADRILLA, TECNICOS, MATERIALES, HERRAMIENTAS, EQUIPOS, ELEMENTO-DOTACION, VEHICULO)



Como DESPACHADOR quiero hacer la carga de uno o varias ORDEN-SERVICIOS(s) haciendo uso de un FORMATO-CARGA predeterminado
Diseñar la página de carga de uno o varios ORDEN-SERVICIOS(s)
Implementar la páginade carga de uno o varios ORDEN-SERVICIOS(s)
Genera lista de ORDENES-DE-SERVICIO cargadas, modificadas o no cargadas
Modificar el archivo y realizar la carga de nuevo o crearlos manualmente si la lista es corta


Como DESPACHADOR quiero crear PLANTILLA-DE-ORDEN-SERVICIO
Diseñar la página de PLANTILLA-DE-ORDEN-SERVICIO 
Implementar la página de PLANTILLA-DE-ORDEN-SERVICIO
Listar plantillas genéricas basado en los casos mas comunes
Asociar una o varias EMPRESAS a la plantilla
Agregar campos adicionales a la plantilla


Como DESPACHADOR quiero crear/ver/actualizar/deshabilitar/listar ORDEN-DE-SERVICIO
Diseñar la página de CRUDL ORDEN-DE-SERVICIO
Implementar la página de CRUDL ORDEN-DE-SERVICIO
Escoger la PLANTILLA-DE-ORDEN-SERVICIO
Marcar CAMPO-OBLIGATORIO(s) para que se puedan hacer las LIQUIDACIONES correctamente
Cambiar el ESTADO-ORDEN-SERVICIO (Inicio, En-proceso, Terminado)



Como ADMON/CLIENTE/DESPACHADOR quiero ver un DASHBOARD donde pueda ver en un mapa la ubicación de CUADRILLA(s) para ver información relevantes según las necesidades
Diseñar la página DE ORDEN-SERVICIO-EN-EJECUCIÓN
Implementar la página de ORDEN-SERVICIO-EN-EJECUCIÓN
Filtros con la siguiente jerarquía (EMPRESA => CONTRATOS => ORDEN-SERVICIO-EN-EJECUCIÓN)
Mapa con actualización tiempo transcurrido en ejecución de la ORDEN-SERVICIO-EN-EJECUCIÓN




Como JEFE-DE-CUADRILLA quiero iniciar sesión en la APP-MOVIL para actualizar la ORDEN-SERVICIO(s) y geo-posición
Diseñar la interfaz de usuario (UI) de inicio de sesión
Implementar la interfaz de usuario (UI) de inicio de sesión


Como JEFE-DE-CUADRILLA ver las ORDEN-SERVICIO(s) para gestionarlas
Diseñar la interfaz de gestión de ORDEN-SERVICIO(s)
Implementar la interfaz de gestión de ORDEN-SERVICIO(s)
Iniciar contador de tiempo de inicio de trabajo
Agregar imagenes
Cambiar el estado

