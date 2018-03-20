#define TIMER_START boost::timer t_##__func__;
#define TIMER_END std::cout << "[" << #__func__ << "]" << "cost time: " << t_##__func__.elapsed() << std::endl;

void FunctionA() {
  TIMER_START(FunctionA)
  SomeFunction();
  TIMER_END(FunctionA)
}

void FunctionA() {
  TIMER_START
  SomeFunction();
  TIMER_END
}
