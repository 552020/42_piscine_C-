#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample 
{
public:

	int foo;

	Sample(void);
	~Sample(void);

	static int getNbInst(void);

private:

	static int _nbInst;
	
};

#endif
