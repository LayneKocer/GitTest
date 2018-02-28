
void printData(int* data);
void swap(int* data, int index0, int index1);
bool isSorted(int* data);

bool strCompare(char* str1, char* str2);
void printHelp();
void printVersion();

void print(char* str1);

int Str_To_Int(char* str1);
int StrLen(char* str1);
int SimplePower(int base, int power);

void printData(int* data){
//  std::cout << data[0] << std::endl;
  for(int i=1; i<data[0]+1; i++){
    std::cout << data[i] << " : ";
  }
  std::cout << std::endl;
}

bool isSorted(int* data){
  bool sorted = true;
  for(int i=1; i<data[0]; i++){
    if(data[i] > data[i+1]){
      sorted = false;
    }
  }
  return sorted;
}

void swap(int* data, int index0, int index1){
  int tmp = data[index0];
//  std::cout << index0 << " index0 : " << data[index0] << std::endl;
//  std::cout << index1 << " index1 : " << data[index1] << std::endl;
  data[index0] = data[index1];
  data[index1] = tmp;
}

bool strCompare(char* str1, char* str2){
  int i = 0;
  while(str1[i] != '\0' || str2[i] != '\0'){
    if(str1[i] != str2[i]){
      return false;
    }
    i++;
  }
  return true;
}

void printHelp(){
  std::cout << "Usage: bogosort [LENGTH] [RANGE]" << std::endl;
  std::cout << "Default: LENGTH=5 RANGE=100" << std::endl;
  std::cout << "-h: print this message" << std::endl;
}

void printVersion(){
  std::cout << "Version: v1.0.0" << std::endl;
}

int Str_To_Int(char* str1){
  int len = StrLen(str1);
  int value = 0;
  for(int i=0; i<len; i++){
    value = value + (SimplePower(10,len-i-1)*(int)(str1[i]-'0'));
  }
  return value;
}

int StrLen(char* str1){
  int len = 0;
  while(str1[len] != '\0'){
    len++;
  }
  return len;
}

int SimplePower(int base, int power){
  int value = 1;
  for(int i=0; i<power; i++){
    value = value * base;
  }
  return value;
}

void print(char* str1){
  std::cout << str1 << std::endl;
}
