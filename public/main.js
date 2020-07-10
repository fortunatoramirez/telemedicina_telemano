var port = 5001;
var socket;

///var socket = io.connect('192.168.100.215', {'forceNew': true});


function render(data){

    var html = "Muestra: "+data;
    /*
    var html = data.map(function(elem, index){
        return(`<div>
        <strong>${elem.author}</strong>:
        <em>${elem.text}</em>
        </div>`);
    }).join(" ");
    */

    document.getElementById('angulo').innerHTML = html;
}



var host = "ws://127.0.0.1:"+port; // No need to change this if using localhost


//Declare Variables
var socket;
var explodedValues = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]; //initial value for the plot = 0
var arreglo = [];

function init() {
    try {
        socket = io.connect('192.168.100.215:5001', {'forceNew': true});

        socket.on('angulo', function(data){
            //console.log(data);
            render(data);
        arreglo.push(parseInt(data));
            if(arreglo.length == 30)
        {
          graficar_1();
          arreglo = [];
        }
           
            
        });
    }
    catch(ex){ 
        console.log(ex); 
    }
    
}


function graficar_1()
{

    //for(var i=0; i<explodedValues.length; i++) { explodedValues[i] = ; } 
    //console.log(explodedValues);
    drawVisualization();
    console.log(arreglo);


}

function drawVisualization() {
    // Create and populate the data table from the values received via websocket
    var data = google.visualization.arrayToDataTable([
        ['Tracker', '1'],
        ['1', arreglo[0]],
    ['2', arreglo[1]],
    ['3', arreglo[2]],
    ['4', arreglo[3]],
    ['5', arreglo[4]],
    ['6', arreglo[5]],
    ['7', arreglo[6]],
    ['8', arreglo[7]],
    ['9', arreglo[8]],
    ['10', arreglo[9]],
    ['11', arreglo[10]],
    ['12', arreglo[11]],
    ['13', arreglo[12]],
    ['14', arreglo[13]],
    ['15', arreglo[14]],
    ['16', arreglo[15]],
    ['17', arreglo[16]],
    ['18', arreglo[17]],
    ['19', arreglo[18]],
    ['20', arreglo[19]],
    ['21', arreglo[20]],
    ['22', arreglo[21]],
    ['23', arreglo[22]],
    ['24', arreglo[23]],
    ['25', arreglo[24]],
    ['26', arreglo[25]],
    ['27', arreglo[26]],
    ['28', arreglo[27]],
    ['29', arreglo[28]],
    ['30', arreglo[29]]
    ]);
    
    // use a DataView to 0-out all the values in the data set for the initial draw
    var view = new google.visualization.DataView(data);
    view.setColumns([0, {
        type: 'number',
        label: data.getColumnLabel(1),
        calc: function () {return 0;}
    }]);
    
    // Create and draw the plot
    var chart = new google.visualization.LineChart(document.getElementById('visualization'));
    
    var options = {
        title:"Valor de amplitud",
        width: 1500,
        height: 500,
        bar: { groupWidth: "95%" },
        legend: { position: "none" },
        animation: {
            duration: 0
        },
        hAxis: {
            // set these values to make the initial animation smoother
            minValue: 0,
            maxValue: 150
        }
    };
    
    var runOnce = google.visualization.events.addListener(chart, 'ready', function () {
        google.visualization.events.removeListener(runOnce);
        chart.draw(data, options);
    });
    
    chart.draw(view, options);
    
    // you can handle the resizing here - no need to recreate your data and charts from scratch
    /*
    $(window).resize(function() {
        chart.draw(data, options);
    });
    */
}

google.load('visualization', '1', {packages: ['corechart'], callback: drawVisualization});




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