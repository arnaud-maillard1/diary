# Semaine 3/16

- [ ] Numération (https://heig-tin-info.github.io/handout/content/numeration.html)
- [ ] Types de données en C


## Bases

### Base 3

- Trois symboles : [%, &, $]
- Notation positionnelle

```
%%$&
```

On redefini les symboles avec des symboles que l'on connaît bien

```
% -> 0
& -> 1
$ -> 2

0021
21

(2 * b^1) + (1 * b^0)
(2 * 3^1) + (1 * 3^0)
(2 * 3) + (1 * 1) --> `7`
```

## Binaire (base 2)

- Deux symboles : [0, 1]
- Notation positionnelle

```
101

(1 * 2^2) + (0 * 2^1) + (1 * 2^0)
(1 * 4) + (0 * 2) + (1 * 1)
4 + 0 + 1 --> `5`
```

## Base 8 (Octal)

- Huit symboles : [0, 1, 2, 3, 4, 5, 6, 7]
- Notation positionnelle

```
0123 (si zéro devant --> octal)

1 * 8^2 + 2 * 8^1 + 3 * 8^0
1 * 16 + 2 * 8 + 3
```

## Convention de nommage

- Binaire (2) `0b101`
- Octal (8) `0101` (préfixé par un zéro)
- Hexadecimal (16) `0x123`


## Base 16 (Hexadécimal)

- Symboles numériques indo-arabes : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
- Six symboles additionnels : [a, b, c, d, e, f]

```
0xf2

(f * 16^1) + (2 * 16^0)
(15 * 16) + (2 * 1)
240 + 2 --> 242
```

## Lien entre 2, 8, 16 (binaire, octal, hexadecimal)

```
0b10101001 (nombre 8 bits)

0b01111 --> 8 + 4 + 2 + 1 --> 15 --> 0xf
0b10000 --> 0x10

0b 1010 1001 (nombre 8 bits)
    A    9   (0xA9)

0b 010 101 001 (nombre 8 bits)
    2   5   1  (0251)
```

0b1010 -> 0xA -> 10
0x1011 -> 0xB -> 11

0b101 -> 0x5 -> 5
0b100 -> 0x4 -> 4

1    = 1
10   = 2
100  = 4
1000 = 8

## Parité

0b10010011101 (impaire)
0b10001111100 (pair)

## Nombre relatifs

                    76543210
  -123 (negatif)  0b11111011
  +123 (positif)  0b01111011

  0   1111011
  +   1 + 2 + 8 + 16 + 32 + 64


  00000000 --> +0
  10000000 --> -0

## Les valeurs minimales et maximales

- Complément à deux
  - min : 2^(n - 1)
  - max : 2^(n - 1) - 1
- Nombre positif uniquement
  - min : 0
  - max : 2^(n) - 1

## Je dois savoir quoi ?

- Les nombres hexadécimaux de 0..f et leurs équilvalents binaire et décimaux
- Le complément à deux permet de stocker des nombres négatifs
- La conversion d'une valeur négative en équivalent positif :
  - Inverse tous les bits
  - Rajoute 1
- Convertir un nombre d'une base B vers la base 10
- Convertir un nombre de la base 10 vers la base B
  - où B = [2, 8, 16]
- Vous devez savoir que les prefixes
  - `0x` Hexadecimal
  - `0` Octal
  - `0b` Binaire

