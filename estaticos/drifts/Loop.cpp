void Drifts::Loop(){
	if(screen == 2){
		if(get_secs()%clock_spawn == 0 && checker_create_bola){
			int i = (rand()%3)+1;
			while(i > 0){ //random 1~3 bolas por tick
				Create_Bola();
				i -= 1;
			}
			
			//Create_Bola(); //1 bola por tick
        checker_create_bola = 0;
	    }
	    else if(get_secs()%clock_spawn != 0){
	        checker_create_bola = 1;
	    }
	}
	


}