# Proyecto XV6 – Extensión del Kernel

## Integrantes

* Josue David Poma Sucso		    2022-119090
* Hilder Elvis Robles Gonzales		2022-119014	

## Descripción

El proyecto consiste en la extensión del sistema operativo educativo **XV6** mediante la implementación de nuevas llamadas al sistema y comandos de usuario, con el fin de analizar el comportamiento interno del kernel y reforzar conceptos de **llamadas al sistema, planificación, gestión de procesos y protección de memoria**.

## Funcionalidades

* Instrumentación de llamadas al sistema (rastrear).
* Contador de invocaciones por syscall (`contador`).
* Inspección de procesos activos (`psinfo`).
* Consulta del estado general del sistema y uptime.


## Requisitos

```bash
sudo apt-get install build-essential gdb git gcc-multilib qemu-system-x86
```


## Compilación

```bash
make clean
make
```

## Ejecución

```bash
make qemu
```

Comandos disponibles:

```bash
contador
contador <id_syscall>
psinfo
estado_proc
rastrear <0 o 1> 1 activado y 0 desactivado el rastreo
```