setInterval(get_waste_status,500);
function get_waste_status() {
	firebase.database().ref('smart_waste/').once('value').then(function(snapshot){
		var l1=snapshot.val().status;
		console.log(l1);
		var flag=0;
		
    	if(l1=="1" && flag==0){
    		document.getElementById('check').innerHTML="Full !";
    		flag=1;
    	}else if (l1=="0" && flag==1) {
			document.getElementById('check').innerHTML=" ";
			flag=0;
			
		}
	})
	}