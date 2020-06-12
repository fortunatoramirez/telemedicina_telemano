var port = 5001;
var socket;

function init() {
	try {
		socket = io.connect('http://201.174.122.203:5001', {'forceNew': true});

		socket.on('messages', function(data){
		    render(data);
		});

	}
	catch(ex){ 
		console.log(ex); 
	}
}

function render(data){

	var html = "Muestra: "+data;
	document.getElementById('messages').innerHTML = html;
}


  // var i=0;
    function funcion_1()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_1").value;
        
        valor_1_int = parseInt(valor_1);
        valor_1_int=valor_1_int +1000;
        console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}

function funcion_2()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_2").value;

         valor_1_int = parseInt(valor_1);
         valor_1_int=valor_1_int +2000;
         console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}

function funcion_3()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_3").value;

         valor_1_int = parseInt(valor_1);
         valor_1_int=valor_1_int +3000;
         console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}

function funcion_4()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_4").value;

         valor_1_int = parseInt(valor_1);
         valor_1_int=valor_1_int +4000;
         console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}

function funcion_5()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_5").value;

         valor_1_int = parseInt(valor_1);
         valor_1_int=valor_1_int +5000;
         console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}

function funcion_6()
{
         //i++;
    // console.log("Click a BOTON 1 = "); //+i);
        var valor_1 = document.getElementById("txt_6").value;

         valor_1_int = parseInt(valor_1);
         valor_1_int=valor_1_int +6000;
         console.log(valor_1_int);

        socket.emit("angulo", valor_1_int.toString());
}
