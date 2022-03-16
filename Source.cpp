#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "RU");

	int n = 1, errorz = 0, error, sum = 0;
	char h[2];
	double v;

	printf("Добро пожаловать в клавиатурный тренажёр!");
	printf("Перед тем, как выбрать уровень сложности, давайте ознакомимся с разболовкой или условиях прохождения каждого из уровней.\nМаксимально можно набрать три балла:\n");
	printf("1 балл - за прохождение уровня;\n1 балл - за скорость печати (180 символов в минуту и более);\n1 балл - за количество ошибок(их не дожно быть вообще);\n");
	printf("По завершению работы нажмите ENTER.\n");
	printf("Проходить уровни можно только последовательно.\n");
	printf("Уровни сложности тренажёра:\n");
	printf("1: dfkl.\n");
	printf("2: asl;.\n");
	printf("3: vbnm.\n");
	printf("4: tgyh.\n");
	printf("5: erui.\n");
	printf("6: xc,..\n");
	printf("7: qwop.\n");
	printf("8: z'[].\n");
	printf("9: 1234567890.\n");
	printf("10: буквы a-z.\n");
	printf("11: слова.\n");
	printf("12: Фраза\n");

	srand(time(NULL));

	do {
		switch (n)
		{
		case 1:
		{

			char a[102] = { "ffdd dlkd ldfk dkfl dflk fdkl dfkl dfkld fdlkf dflk dfkl dfkd fkld fdkl dfkl flkk kkdd lldd fkdl fkll" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(a), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}

		break;

		case 2:
		{

			char a[122] = { "asl; sla;l sla;l sl;aa s;a;ls sl;ll sl;sa as;la as;la sl;la saa;a ;slsl slal; llsa s;lla alla sla;s slaa lsla; slal; sala" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");
			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 3:
		{

			char a[106] = { "vbnm mvnb bvmb bnvm bmvb bvmm bnnn vbbn vmbn vmbnn vmbn mmvn vmbn bnvv bnmm bnbn bnvm bnmm bnvv vvbm bnmv" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 4:
		{

			char a[200] = { "tghy tgyh hytg gtyh gtht ythh ghyt gght ythg tygt tgyt ygth gyth tyhg ghty ghty ghtt yygh gyth ghyy tygh gytg ghty ghtt gyth gtyt gthy htgy htgy gthy hgty htyg thgy htgy gttt htyg hyyy gtyt ttgh ghyy" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 5:
		{

			char a[151] = { "erui iuer urie ueir erui urie eiru eiru ieru erui uei ueriu ei irier eirui eirueri uerieir ueue irui euri erur uure eui ruii eieu ierue eiri urie eiru" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");
			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 6:
		{

			char a[171] = { "xc,. x.c, xc.,, c,c,x ,xc. c,x. c,x.. c,,cx.. ,c.x. ,c,x., x.c,,c c,,c.x ,c.xc, x.cx.c, xc.,x x.c,x.c ,c,.x, xc,,. ,c,.x. ,c,.x ,c,xc. ,x.c,c. ,x.cx.. x.cx.,c ..xc, c..xc" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 7:
		{

			char a[151] = { "qwop qpwo qwopqw oqwpqwo qwoqp pqwop woqp qpwopq oqwpq qpwo qwoq pqwoo qwop qwpoq qwop qwop qwopp qwo qwoop qwoppp qwooppooo woqpwoqpp owqpqooqop poqp" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");
			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 8:
		{

			char a[78] = { "z'[] [[z]' z'z[] 'z[]'z [z]z'[ ]'z[]'z [z]z' ]zz[ 'z[z] z'[z' '[]zzz z[[] z[]" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 9:
		{

			char a[186] = { "1234567890 234 123 29300 10384 27401237 9287391 0237012 173013 217303 10370129 12931037 12370123 0123023 2838921 1283 91 319 7823 1 7771739 923871 8360271 2370167 238010 320710 10370021" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 10:
		{

			char a[193] = { "adjasd mvpq vmzvn zxc vmpqwe ptroiu glhj hgkjr vnjwe rtyw vbnc ghfd kdynr bgrh nvmd dmkw dfhaqz dwqnj vjwiu nvplmk rivb ceryf bcvu vwkq qwmq zxcv bnmk sdfg wqer ytedf ghja klyr vbwe ecjw cwbui" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 11:
		{

			char a[199] = { "world apple book rock land deutsch house speed russia system question factory night moon beer bear last attack mark help love hurricane name liquid fallen angel rainbow happy report sword art online" };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;

		case 12:
		{

			char a[473] = { "In 1884, auf einer Ausstellung in Frankreich, lernte Adam das Fahrrad kennen und entzündete sich an einer neuen Idee – der Veröffentlichung von Fahrrädern. Im Jahr 1885 erweiterte Opel die Produktion und begann, vollständig zusammengebaute Fahrräder in Deutschland zu verkaufen. Bis 1895 war Adam Opel ein internationaler Marktführer auf dem Nähmaschinenmarkt, der Nähmaschinen nach Europa, den USA, Russland und Indien exportierte und 2000 Fahrräder pro Jahr produzierte." };
			char string[sizeof(a)];
			printf("Наберите строку (старайтесь делать это быстро и аккуратно, так вы наберете больше баллов):\n\n");

			for (int i = 0; a[i] != '\0'; i++)
			{
				printf("%c", *(a + i));
			}

			printf("\n\nЧтобы начать нажмите ENTER:\n");
			fgets(h, sizeof(h), stdin);

			time_t start = time(NULL);
			fgets(string, sizeof(string), stdin);
			time_t stop = time(NULL);
			printf("\n");

			for (int i = 0; i < sizeof(a); i++)
			{
				if (*(a + i) != *(string + i))
				{
					errorz += 1;
				}
			}
			error = errorz;
			errorz = 0;
			printf("error = %d", error);
			double timer = difftime(stop, start);
			v = (timer * 150) / (double)strlen(string);
			printf("\nВремя, за которые вы печатаете 150 символов = %lf\n\n", v);
			if ((v <= 60) && (error <= 0))
			{
				printf("Поздравляем! Вы прошли последний уровень.\n");
			}
			else printf("Вам есть над чем поработать.\n");
			error = 0;
		}
		break;
		}
		n++;
	} while (n <= 12);
	return 0;
}