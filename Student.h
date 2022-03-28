class Student {
  // private section
	private:
  //    int studentId
  //    name <- 20 charcters
    int studentId;
		char name[20];
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
	public:
		void assignDetails(int pstudentId, const char pname[]);
		void Display();
};
