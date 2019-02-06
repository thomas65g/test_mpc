#if !defined(CALC_H)
#define CALC_H

#ifdef DLL
#ifdef DLLDIR_EX
#define DLLDIR  __declspec(dllexport)   // export DLL information
#else
#define DLLDIR  __declspec(dllimport)   // import DLL information
#endif 
#else
#define DLLDIR
#endif

class DLLDIR calc
{
public:
    calc( int );
    ~calc();
    void add( int );
    int get() const;  
private: 
    int m_current;
};

#endif