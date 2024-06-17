setInterval(get_waste_status,500);
function get_waste_status() {
	firebase.database().ref('smart_waste/').once('value').then(function(snapshot){
		var l1=snapshot.val().status;
		console.log(l1);
		
		
    	if(l1=="0"){
    		document.getElementById('check').innerHTML="-";
    		
    	}else if (l1=="1"){
			document.getElementById('check').innerHTML="Full";
		}
	})
	}