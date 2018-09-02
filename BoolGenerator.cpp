#include "BoolGenerator.h"


BoolGenerator &BoolGenerator::AddVarProp(const std::string &name)
{
  props.push_back(name);
  return *this;
}
void BoolGenerator::Build()
{
  
  if(props.empty()){
    throw std::exception("PropVars should not be empty");
  }
  

  const int len = 1 << props.size();
  auto iter = props.begin();
  for(int pos = len / 2; pos > 0; pos = pos/2, ++iter){
    auto &prop = *iter;
    for(int idx =0; idx< len; ++idx){
      prop.rows.push_back(Generate(idx/pos));
    }
  }
}
bool BoolGenerator::Generate(const int num)
{
  return num % 2 ==0;
}
