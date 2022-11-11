class clockType

{

public:
 void setTime(int, int, int);
 void getTime(int&, int&, int&) const;
 void printTime() const;
 void incrementSeconds();
 void incrementMinutes();
 void incrementHours();
 bool equalTime(const clockType&) const;
 int getHours();
 int getMinutes();
 int getSeconds();
 void setHours(int);
 void setMinutes(int);
 void setSeconds(int);

 

private:

 int hr;
 int min;
 int sec;

};
