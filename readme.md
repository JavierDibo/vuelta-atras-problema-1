# Problema 1

## Formas de sacar un valor dado con n dados

Se dispone de `n` dados de seis caras. 

Se desea conocer el número de combinaciones que existen para conseguir una puntuación dada con los `n` dados. Por ejemplo, si `n = 5`, para sacar `6`, existen `5` formas:

```
1, 1, 1, 1, 2
1, 1, 1, 2, 1
1, 1, 2, 1, 1
1, 2, 1, 1, 1
2, 1, 1, 1, 1
```

*Guía*: Una combinación parcial no es factible si se pasa o si ya es imposible obtener el valor.