/*
View the object file to see how Assembly looks.
*/
#include <stdio.h>

int main()
{

	enum ProgrammingLanguages { Python, Ruby, C, Cpp, Java, JavaScript, Csharp, Kotlin, Elixir, Erlang, Julia, R, D, Rust };
	enum ProgrammingLanguages preferredLanguage = C;

	switch (preferredLanguage)
	{
		case Python:
			printf("Python is the preferred language");
			break;
		case Ruby:
			printf("Ruby is the preferred language");
			break;
		case C:
			printf("C is the preferred language");
			break;
		case Cpp:
			printf("C++ is the preferred language");
			break;
		case Java:
			printf("Java is the preferred language");
			break;
		case JavaScript:
			printf("JavaScript is the preferred language");
			break;
		case Csharp:
			printf("C# is the preferred language");
			break;
		case Kotlin:
			printf("Kotlin is the preferred language");
			break;
		case Elixir:
			printf("Elixir is the preferred language");
			break;
		case Erlang:
			printf("Erlang is the preferred language");
			break;
		case Julia:
			printf("Julia is the preferred language");
			break;
		case R:
			printf("R is the preferred language");
			break;
		case D:
			printf("D is the preferred language");
			break;
		case Rust:
			printf("Rust is the preferred language"); 
			break;
		default:
			printf("I do not know of this language");
			break;
	}
	
}
