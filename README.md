# Решение стахостического дифференциального уравнения методом Хюна(Хойна)

`module` - библиотека с решением

`rand_lib` - библиотека для получения случайного числа (необходимо для добавления шума)

Описание класса `HoyneMethod`:
* `HoyneMethod()` - конструктор
* `HoyneMethod calculate()` - решение уравнения с определённым количеством повторов (необходимо для вычисления вероятности)
* `std::ostream& operator<<()` - вывод данных (в данном случае необходимо для вывода данных в файл)

В результате решения получаем следующий график:

![График на 500000 элементов](https://psv4.userapi.com/c532036/u466252744/docs/d33/98fc0054edab/3.png?extra=xiQrA8F_d7cB_Tq7pEABEoOR544aRPWstbrSyxAeQs9v1CM6TyX6rOTfgZZ1v_NmvCrVI3rs513bHQEp5fedxo4w4yXOdQxuSuKvPw50QIRQ5_ktOtQLANyMv2uoYA0U2FzlNTaJCGh8_PNnVuKSqtV2Wg)

График вероятностей (500 повторов):

![График на 500 повторов](https://psv4.userapi.com/c520036/u466252744/docs/d12/8459c6ec80e4/1.png?extra=FstajSXJREA_NguQQ8CtJ5KPPz8ufFlnn0Tfm8c17uva6_I6OosLyW_1zgMfMu2xVo1GkB9c6gBiw2zk0L9vsWWdK2oS1eK998CGDD2p-Siql4ALsqHQx7Z9AHHH4FPXSNUUG-z8dh0B8D_agaXAqWNk5g)

График вероятностей с линейным масштабом:

![График на 500 повторов с лин.масштабом](https://psv4.userapi.com/c505536/u466252744/docs/d4/49b5875a72d1/2.png?extra=KuApBxlmV9MF3VJwMKSJ80JHhaIPJzf--JQgzBwUQhDqCSWemtcB2KFSN60nAwyz9ydkA7v_9DI82rOib2HPXQMvbCkxZJgmTjhETaMvcMm2r09MEzhCQwCfE7oezrJnC_wxNrrkA5Z7kJrDaDhjVeLeAg)

TODO:

- [x] Максимально ускорить программу;
- [x] Переписать под `CMake`;
- [x] Подключить `Intel C++ Compiler (ICC)` и добавить необходимые ключи в `Makefile`;
- [ ] Распараллелить с помощью `TBB` или `OpenMP`. 
