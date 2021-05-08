#ifndef CUTEST_SEEN
#define CUTEST_SEEN

typedef char * a_result;

#define PASS NULL

#define test(name) static a_result test_##name() 
#define do_assert(msg, test) do{if(!(test)) return msg;}while(0)
#define do_test(name) do{a_result msg=test_##name();if(msg) return msg;}while(0)
#define run_test(name) test_##name()
#define do_print_result(fd,result) do{if(result!=PASS){fprintf(fd,"FAILED | %s | %s\n", __FILE__, result);}else{fprintf(fd,"PASSED\n");}}while(0);
#define a_status(r) result!=PASS ? 1 : 0;

#endif 
