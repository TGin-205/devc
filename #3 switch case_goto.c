switch () {
	case constant1:
	//statements
	break; 
	case constant2:
	//statements
	break; 
	.
	.
	.
	.
	default:
		// default statement
}

có thể gộp các case có chung các lệnh giống nhau
Ex:
switch () {
	case 1: case 2: case 4: case 5 :....
		printf ("....");
			break;
	default:
		//......;
}

/////////////////////////////
goto label;
	
EX: printf(" xin chao \n"); 1
	goto nhan;
	printf (" zo zo zo \n");2
	nhan:
	printf ( " he he he \n");3   // nó sẽ in 1 sau đó nhảy đến 3 và in 3 và bỏ qua câu lệnh 2