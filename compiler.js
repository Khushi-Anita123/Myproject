let compile=document.getElementById("btn");
let selectvalue=document.getElementById("div1");
let output=document.getElementById("div2");

let url="https://course.codequotient.com/api/executeCode";
let language=0;
let call;
compile.addEventListener("click",function(){
    document.getElementById("btn").disabled = true;
    let request=new XMLHttpRequest();
    request.open("POST",url);
    const obj={
       code:  selectvalue.value,
       langId: language,
       }; 
    //    if(obj.code.trim() ===""){
    //     output.innerHTML="code not found";
    //     return;

    //    }
       request.setRequestHeader("Content-type","application/json");
       request.send(JSON.stringify(obj));
      
       request.onreadystatechange=()=>{
        if(request.readyState==4){
            let resp=JSON.parse(request.responseText);
            console.log(resp);
            if(obj.code.trim() ===""){
                output.innerHTML=resp.error;
                document.getElementById("btn").disabled = false;
                return; 
                }
                if(obj.langId==0)
                {
                    output.innerHTML=resp.error;
                    document.getElementById("btn").disabled = false;
                    return;     
                }
            if(resp.hasOwnProperty("codeId")){
                call=setInterval(() => {
                    codeid(resp.codeId,call);
                 },1000); 
            }
             
        }
       }   
   
})

let codeid=(codeId)=>{
    let req2=new XMLHttpRequest();
    req2.open("GET",`https://course.codequotient.com/api/codeResult/${codeId}`);
    req2.send();
    req2.onreadystatechange=()=>{
        if(req2.readyState==4){
            let ob=JSON.parse(req2.responseText);
             let data=JSON.parse(ob.data);
            //  if(data.output!=" "){
            //     document.getElementById("div2").innerHTML=data.output;
            //  }
            //  if(data.hasOwnProperty("langId")){
            //     clearInterval(call);
            //  }
            if(data.hasOwnProperty("langid")){
                clearInterval(call);
                if(data.errors!="")
                {
                    document.getElementById("div2").innerHTML=data.errors;
                    document.getElementById("btn").disabled = false;
                }
    
                else{
                    document.getElementById("div2").innerHTML=data.output;
                    document.getElementById("btn").disabled = false;
                }
            }
            
        }
    }
   }

let select=document.getElementById("select");
       select.addEventListener("change",function(){
        console.log(select.value);
        if(select.value=="Python"){
            language=0;

        }
        if(select.value=="C"){
            language=7;

        }
        if(select.value=="C++"){
            language=77;

        }
        if(select.value=="Javascript"){
            language=4;

        }
        if(select.value=="Java"){
            language=8;

        }
    })