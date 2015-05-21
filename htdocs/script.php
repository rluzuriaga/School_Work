<script src="simpleCart.js"></script>
<script>
simpleCart({ 
    checkout: { 
        type: "SendForm" , 
        url: "http://yoursite/yourfolder/sendcart.php" ,
        method: "POST" 
    } 
});
</script>
<script>
simpleCart.bind( 'beforeCheckout' , function( data ){
data.first_name = document.getElementById("first_name").value;
data.last_name = document.getElementById("last_name").value;
data.email = document.getElementById("email").value;
data.phone = document.getElementById("phone").value;
data.comments = document.getElementById("comments").value;
data.address = document.getElementById("address").value;
});
</script>
