class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int); //show nat_id
		void display_thai();
		~Thai_person();
 };

 Thai_person::Thai_person(int nid){
	nat_id=nid;
	cout<<"National Id: "<<nat_id<<endl;
 }

 Thai_person::~Thai_person(){
	cout<<"Destructor nid="<<nat_id<<endl;
 }

 void Thai_person::display_thai(){
	cout<<"National id"<<endl;
 	cout<<"Nid: "<<nat_id<<endl;
 }