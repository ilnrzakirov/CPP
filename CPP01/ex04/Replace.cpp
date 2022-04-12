#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) {
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replace::~Replace() {
}

void Replace::check_s1(std::string &str) {
	int i;

	i = str.find(s1); //find возвращяет начало вхождения
	while(i != -1)
	{
		str.erase(i, s1.length()); // удаляет n элементов (в данном случае с
		// начала вхождения и в количествве длины строик  s2
		str.insert(i, s2); //встаялет s2 с i;
		i = str.find(s1); // повторный поиск
	}
}

void Replace::replace() {
	std::ifstream stream_in; // ifstream -входит в библиотеку fstream,
	// (файловый ввод) описывает объект, управляющий извлечением элементов из буфера потока
	std::string   outfile;
	std::ofstream stream_out; // файловый вывод,
	std::string   str;

	if(this->filename.length() == 0 || this->s1.length() == 0 || this->s2
	.length() == 0){ // length - возвращяет длину строки
		std::cout << "Error: bad arguments\n";
		exit(EXIT_FAILURE);
	}
	stream_in.open(this->filename); //открываем файл
	if (!stream_in.is_open()) // проверяем открыт ли файл
	{
		std::cout << "Error: bad arguments\n";
		exit(EXIT_FAILURE);
	}
	stream_in.seekg(0, std::ios::end); //перемещение каретку в конец файла
	if (stream_in.tellg() == 0) // смотрим на сколько символов преместился
		// картека  tellg и tellp
	{
		std::cout << "Error: empty file\n";
		exit(EXIT_FAILURE);
	}
	stream_in.seekg(0, std::ios::beg); // перемещаем каретку снова в начала
	// файла
	outfile = "res.replace"; // назване будущего файла для записи результатов
	stream_out.open(outfile); // открываем файл что бы записать результат
	if (!stream_out.is_open()) // проверяем открыт ли файл
	{
		std::cout << "Error: output file is not created\n";
		stream_in.close(); // закрываем файл чтения
		exit(EXIT_FAILURE);
	}
	while (std::getline(stream_in, str)) //считываем из файла по одной строке
		// за итерацию
	{
		check_s1(str);
		stream_out << str << "\n"; // записываем в файл
	}
	stream_in.close(); // закрываем файлы
	stream_out.close();
}
