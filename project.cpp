#include<iostream>
using namespace std;
int main(){
	int finalResult=0;
	char playAgain;
	int playQuiz(void);
	finalResult = playQuiz();
	cout<<"Your score is" <<finalResult<<endl;
	
	if(finalResult>=6){
		cout<<"You are pass"<<endl;
		cout<<"Do you want to play QUIZ again ?y or n"<<endl;
		cin>>playAgain;
		if(playAgain=='y'|| playAgain=='Y'){
			playQuiz();
		}
	}
	else{
		cout<<"You are fail"<<endl;	
		cout<<"Do you want to play QUIZ again ?y or n"<<endl;
		cin>>playAgain;
		if(playAgain=='y'|| playAgain=='Y'){
		playQuiz();
		}		
	else{
		cout<<"Thank you to play Quiz!"<<endl;
	    }
	}	
}

int playQuiz(){
	char c;
	char option;
	int score=0;
	playInsideFunction:
	cout<<"------welcome to quiz game------"<<endl;
	cout<<"------Please follow these instructions-------"<<endl;
	cout<<"Step1 : Quiz contains total 10 questions"<<endl;
	cout<<"Step2 : You will given 1 marks for each right Answer"<<endl;
	cout<<"Step3 : There will be no negative marking"<<endl;
	cout<<"Step4 : Please press s to start the quiz"<<endl;
	cout<<"Step5 : Please select option a, b, c, d"<<endl;
	cout<<"step6 : If you score >=6 , you will pass tha quiz"<<endl;
	cin>>c;
	if(c=='s' || c=='s'){
		cout<<"Q1 . What is the capital of India"<<endl;
		cout<<"(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
		}
		else{
			score=score+0;
		}
		
			cout<<"Q2 . Who is the Prime minister of India"<<endl;
		cout<<"(a) Narendra Modi (b) Amit Shah (c) Yogi (d) Rahul Gandhi"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
        }
        else{
        	score=score+0;
		}
		
		cout<<"Q3 . What is the National Bird of India"<<endl;
		cout<<"(a) Peacock (b) Parrot (c) Hen (d) Pigeon"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;			
		}
		else{
			score=score+0;
		}	
		cout<<"Q4 . What is the National animal of India"<<endl;
		cout<<"(a) Tiger (b) Lion (c) Dog (d) Cow"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
	    }
	    else{
	    	score=score+0;
		}
		cout<<"Q5 . What is the Currency of India"<<endl;
		cout<<"(a) Rupee (b) Paisa (c) Doller (d) None of these"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
		}
		else{
			score=score+0;
		}
		cout<<"Q6 . Who is tha Chief Minister of U.P"<<endl;
		cout<<"(a) Adityanath (b) Narendra Modi (c) Amit Shah (d) Arvind Kejriwal"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
	    }
	    else{
	    	score=score+0;
		}
		cout<<"Q7 . Who is the Home Minister of India"<<endl;
		cout<<"(a) Amit Shah (b) Rahul Gandhi (c) Yogi (d) None of these"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
	    }
		else{
			score=score+0;
		}
		cout<<"Q8 . What is the National Flower of India"<<endl;
		cout<<"(a) Lotus (b) Lily (c) Rose (d) None of these"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;	
		}
		else{
			score=score+0;
		}
		cout<<"Q9 . What is the Capital of U.P"<<endl;
		cout<<"(a) Lucknow (b) Allahabad (c) Agra (d) Varanasi"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
	    }
	    else{
	    	score=score+0;
		}
		cout<<"Q10 . Who is  Defence Minister of India"<<endl;
		cout<<"(a) Rajnath singh (b) Amit Shah (c) Adityanath Yogi (d) Modi"<<endl;
		cin>>option;
		if(option=='a' || option=='A'){
			score=score+1;
	    }
	    else{
	    	score=score+0;
		}
	}	
	else{
		cout<<"You have entered wrong value, please enter s "<<endl;
		playQuiz();
}
	return score;
}
