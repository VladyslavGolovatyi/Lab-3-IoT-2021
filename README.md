# Lab-3-IoT-2021

Кому це подобається?


Ви напевно знаєте систему лайків з Facebook та інших соцмереж. Люди можуть "лайкати" публікації у блозі чи фото. Потрібно створити текст, який повинен відображатися поруч із лайками. Реалізуйте функцію like[String] -> String, яка повинна приймати вхідний масив, що містить імена людей, яким подобається фото. Він повинен повертати відображуваний текст, як показано в прикладах:
likes({}) => "no one likes this"
likes({"Peter"}) => "Peter likes this"
likes({"Jacob", "Alex"}) => "Jacob and Alex like this"
likes({"Max","John","Mark"}) => "Max, John and Mark like this"
likes({"Alex", "Jacob", "Mark", "Max"}) => "Alex, Jacob and 2 others like this"
Для 4 і більше імен кількість у “2 інших” просто збільшується.
* return має бути виділеним рядком
* не змінювати введення
