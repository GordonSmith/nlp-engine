#include "lite/nlp_engine.h"

#ifdef LINUX
main(
#else
_tmain(
#endif
   int argc,
   _TCHAR *argv[],
   _TCHAR *envp[]
   )
{
    _TCHAR analyzer[1001];
    _TCHAR input[1001];
    _TCHAR output[1001];

    _stprintf(analyzer,"%s",_T("noop"));
     _t_cout << _T("[analyzer name: ") << analyzer << _T("]") << endl;
     
    NLP_ENGINE *nlpEngine = new NLP_ENGINE(analyzer);

    _stprintf(input,"%s",_T("The quick brown fox jumped over the lazy boy."));
    _t_cout << _T("[input: ") << input << _T("]") << endl;
    output[0] = '\0';

    nlpEngine->analyze(input,1000,output,1000);

    _t_cout << _T("[output: ") << output << _T("]") << endl;
}