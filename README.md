<div dir="rtl" lang="he">

# אנשי השלג

כיתבו פונקציה המציירת איש-שלג!
הגדרה מפורטת של הקלט והפלט נמצאת כאן:
https://codegolf.stackexchange.com/q/49671/12019

כדי לראות איך הפונקציה אמורה לעבוד, ראו בקובץ
[Demo.cpp](Demo.cpp)
המצורף.

בשלב א עליכם לכתוב את הקבצים הדרושים כך שהפקודות הבאות יעבדו ללא שגיאות קימפול:

<div dir='ltr'>

    make demo
    ./demo
	make test
    ./test

</div>

עליכם לכתוב את  הקבצים הבאים:

* snowman.hpp - כותרת לפונקציה.
* snowman.cpp - מימוש בסיסי של הפונקציה - לא חייב להיות מלא - צריך רק להתקמפל.
* Test.cpp - בדיקות-יחידה בפורמט doctest. יש לכתוב בדיקות מפורטות ולהתייחס למקרי קצה.
   * ניתן לראות דוגמה לבדיקות בקובץ TestExample.cpp, אבל יש לכתוב הרבה בדיקות נוספות.
   * במטלות בקורס זה אנחנו כותבים את הבדיקות לפני המימוש, ולכן רוב הבדיקות ייכשלו וזה בסדר - המימוש המלא ייכתב בחלק ב של המטלה.

מומלץ לוודא שהפקודה הבאה רצה ללא אזהרות (כדי להריץ יש להתקין את  clang-tidy):

<div dir='ltr'>

    make tidy

</div>

שימו לב:
אין לשנות קבצים קיימים, אלא רק להוסיף קבצים חדשים.
מערכת הבדיקה האוטומטית מעתיקה מחדש את כל הקבצים הקיימים על-גבי הפתרון שאתם מגישים,
ולכן כל שינוי שתעשו בקבצים הקיימים יימחק.

</div>