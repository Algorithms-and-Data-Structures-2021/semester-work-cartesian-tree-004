# Cartesian Tree

[![CMake](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree-004/actions/workflows/cmake.yml/badge.svg)](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree-004/actions/workflows/cmake.yml)

**_Измените status badge сверху для отображения статуса сборки вашего проекта._**

`Actions > CMake > ... > Create status badge`

[Ссылка на Google Drive](https://drive.google.com/drive/folders/1oqktRnr9_LANAa9yFDgKWNFE_HwSwAWe)

_Краткое описание семестрового проекта. Следует отразить информацию по следующим пунктам:_

- Какая структура данных реализуется? _**Cartesian Tree - Декартово дерево.**_
- Что она из себя представляет (сбалансированное дерево, линейный список и пр.)? **Декартово дерево или дерамида (англ. Treap) — это структура данных, объединяющая в себе бинарное дерево поиска и бинарную кучу (отсюда и второе её название: treap (tree + heap) и дерамида (дерево + пирамида), также существует название курево (куча + дерево).**
- Где и как она используется (приложения)? **Используется в приложении AlgoLab в качестве сортировки.**
- Какие операции над ней можно выполнять (поиск, удаление, добавление, вставка и пр.)? **Split, merge, insert, erase.**
- Какова теоретическая сложность операций (поиск за `O(log(n))`, вставка за `O(n^2)` и т.д.)? **Split - O(log(n)), merge - O(log(n) + log(m)), insert - O(log(n)), erase - O(log(2n)).**
- Какая-то другая справочная информация о проекте. https://en.wikipedia.org/wiki/Cartesian_tree

## Команда "AnimeStars"

_Заполните таблицу с указанием вклада каждого из участников в проект._

**Примечание**. Преподаватель может определить вклад любого из участников команды по истории коммитов.

| Фамилия Имя   | Вклад (%) | Прозвище              |
| :---          |   ---:    |  ---:                 |
| Данияр Сабитов   | 50        |  Главная аниме тяночка           |
| Илья Усанов  | 50      |  Звёздная воительница


**Девиз команды**
> _Если хочешь чего-то добиться, надо действовать! Даже, если совсем нет надежды!_

## Структура проекта

_Описание основных частей семестрового проекта._

**Пример**. Проект состоит из следующих частей:

- [`src`](src)/[`include`](include) - реализация структуры данных (исходный код и заголовочные файлы);
- [`benchmark`](benchmark) - контрольные тесты производительности структуры данных (операции добавления, удаления,
  поиска и пр.);
- [`examples`](examples) - примеры работы со структурой данных;
- [`dataset`](dataset) - наборы данных для запуска контрольных тестов и их генерация;

## Требования (Prerequisites)

_В этом разделе задаются основые требования к программному и аппаратному обеспечению для успешной работы с проектом._

**Пример**. Рекомендуемые требования:

1. С++ компилятор c поддержкой стандарта C++17 (например, _GNU GCC 8.1.x_ и выше).
2. Система автоматизации сборки _CMake_ (версия _3.12.x_ и выше).
3. Интерпретатор _Python_ (версия _3.7.x_ и выше).
4. Рекомендуемый объем оперативной памяти - не менее 4 ГБ.
5. Свободное дисковое пространство объемом ~ 3 ГБ (набор данных для контрольных тестов).

## Сборка и запуск

_Инструкция по сборке проекта, генерации тестовых данных, запуска контрольных тестов и примеров работы._


### Пример (Windows)

#### Сборка проекта

_Опишите процесс сборки проекта._

Склонируйте проект к себе на устройство через [Git for Windows](https://gitforwindows.org/) (либо используйте
возможности IDE):

```shell
git clone https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree-004
```

## Генератор тестовых данных
Генератор тестовых данных отсутствует.

## Контрольные тесты
Тесты отсутствуют.

## Источники

_Список использованных при реализации структуры данных источников._

[Статья на хабре](https://habr.com/ru/post/101818/)

[Статья на вики ИТМО](https://neerc.ifmo.ru/wiki/index.php?title=%D0%94%D0%B5%D0%BA%D0%B0%D1%80%D1%82%D0%BE%D0%B2%D0%BE_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%BE)

[Страничка на википедии](https://en.wikipedia.org/wiki/Cartesian_tree)
