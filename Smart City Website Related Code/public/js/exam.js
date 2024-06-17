setInterval(getInformation,500);
function getInformation() {
		firebase.database().ref().once('value').then(function(snapshot){
		var s1=snapshot.val().S1;
		var s2=snapshot.val().S2;
		var s3=snapshot.val().S3;

    	if(s1=="1"){
    		document.getElementById('img1').src='Images/alloted_car.png';
					
		}else{
			document.getElementById('img1').src='Images/slot2.jpg';
		}
		if(s2=="1"){
			document.getElementById('img2').src='Images/alloted_car.png';
		}else{
			document.getElementById('img2').src='Images/slot2.jpg';	
		}
		if(s3=="1"){
			document.getElementById('img3').src='Images/alloted_car.png';
			
		}else{
			document.getElementById('img3').src='Images/slot2.jpg';
			
		}
	})
}



