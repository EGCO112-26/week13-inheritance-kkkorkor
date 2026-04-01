
class MU_person{
private: 

protected:long id;
	string name;

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n){
  id=x;
  name=n;
  // Set up all MU_Person values
  cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show student information"<<endl;
  cout<<"id: "<<id<<endl;
  cout<<"name: "<<name<<endl;
}
