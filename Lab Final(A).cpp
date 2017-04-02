#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Word
{
private:
	string word;
public:
	Word();
	~Word();
	void setWord(string);
	string getWord();
	void operator+(Word);//word+word
};

class Sentence:public Word
{
private:
	string sentence;
public:
	Sentence();
	~Sentence();
	void operator+(Word);//sentence+word
	void operator+=(Word);//word+sentence
	void operator+(Sentence);//sentence+sentence
	void setSentence(string);
	string getSentence();
};

class Interrogative:public Sentence
{
private:
	string interrogative;
public:
	Interrogative();
	~Interrogative();
	void setInterrogative(string);
	string getInterrogative();
	void outputInterrogative();
};

class Exclamatory:public Sentence
{
private:
	string exclamatory;
public:
	Exclamatory();
	~Exclamatory();
	void setExclamatory(string);
	string getExclamatory();
	void outputExclamatory();
};

//WORD
Word::Word()
{
	word="\0";
}

Word::~Word()
{
}

void Word::setWord(string w)
{
	word=w;
}

string Word::getWord()
{
	return word;
}

void Word::operator+(Word w)
{
	word=word+" "+w.word;

}

//SENTENCE
Sentence::Sentence()
{
	sentence="\0";
}

Sentence::~Sentence()
{
}

void Sentence::setSentence(string s)
{
	sentence=s;
}

string Sentence::getSentence()
{
	return sentence;
}

void Sentence::operator+(Word w)
{
	sentence=sentence+" "+w.getWord();
}

void Sentence::operator+(Sentence s)
{
	sentence=sentence+" "+s.sentence;
}

void Sentence::operator+=(Word w)
{
	sentence=w.getWord()+" "+sentence;
}

//INTERROGATIVE
Interrogative::Interrogative()
{
	interrogative="\0";
}

Interrogative::~Interrogative()
{
}

void Interrogative::setInterrogative(string i)
{
	interrogative=i;
}

string Interrogative::getInterrogative()
{
	return interrogative;
}

void Interrogative::outputInterrogative()
{
	interrogative=interrogative+" "+"!";
	cout<<interrogative;
}


//Exclamatory
Exclamatory::Exclamatory()
{
	exclamatory="\0";
}

Exclamatory::~Exclamatory()
{
}

void Exclamatory::setExclamatory(string e)
{
	exclamatory=e;
}

string Exclamatory::getExclamatory()
{
	return exclamatory;
}

void Exclamatory::outputExclamatory()
{
	exclamatory=exclamatory+" "+"?";
	cout<<exclamatory;
}

int main()
{
	Word w1;
	w1.setWord("hello");
	Word w2;
	w2.setWord("world");
	Word w3;
	w3.setWord("hill");
	Word w4;
	w4.setWord("house");

	w1+w2;
	cout<<w1.getWord()<<endl;
	Sentence s1,s2,s3,s4;
	s1.setSentence("house will built on a");
	s2.setSentence("will built on a hill");
	s3.setSentence("house will built");
	s4.setSentence("on a hill");

	s1+w3;
	cout<<s1.getSentence()<<endl;

	s2+=w4;
	cout<<s2.getSentence()<<endl;

	s3+s4;
	cout<<s3.getSentence()<<endl;

	Interrogative i1;
	i1.setInterrogative("This is Mudassar");
	i1.outputInterrogative();
	cout<<endl;

	Exclamatory e1;
	e1.setExclamatory("Who the fuck is this");
	e1.outputExclamatory();
	cout<<endl;

	//FILE HANDLING 
	Sentence obj;

	ifstream read("sentence.txt");
	int size=0;
	read>>size;
	cout<<size;


	return 0;
}