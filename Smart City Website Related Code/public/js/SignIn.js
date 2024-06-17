

function Signin() {
    var email=document.getElementById("userEmail").value;
    var password=document.getElementById("userPassword").value;
    
    console.log(email);
    console.log(password);

 
    if(1)
    {
        
        firebase.auth().signInWithEmailAndPassword(email,password).then(
            function () {
                
                window.location="Home.html";

        }).catch(function (error) {
           
            var errorMessage=error.message;
            alert(errorMessage);
        });

    }
    else
    {
        //alert when password did not matches
        alert("Please Enter All Fields");

    }

}