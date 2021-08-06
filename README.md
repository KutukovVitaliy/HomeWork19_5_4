#HomeWork19_5_4
Разработайте программу, которая получает на вход, в стандартный ввод,
путь к файлу. На выходе программа должна определить, является ли данный
файл PNG-изображением. Данная процедура не просто должна смотреть на
расширение файла, но и произвести минимальный анализ его внутренностей,
в бинарном режиме.
Внутренности валидного бинарного файла начинаются со специального 
8-байтового заголовка. Нас будут интересовать первые четыре байта.
Первый байт всегда имеет значение −119 (число со знаком минус), а
следующие — это просто символы ‘P’, ‘N’, ‘G’, расположенные друг за
другом. Обратите внимание, что все они в верхнем регистре.
По результатам проверки пути и внутренностей требуется сообщить
пользователю о результате проверки в стандартный вывод.