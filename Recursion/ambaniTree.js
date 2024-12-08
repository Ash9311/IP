let data=[
    
    {
        name:'Dhirubhai Ambani',
        generation:1,
        children:[
            {
                name:'Mukesh Ambani',
                 generation:2,
                children:[
                    {
                    name:'Akash Ambani',
                     generation:3,
                    children:[]
                    },
                    {
                        name:'Ananth Ambani',
                         generation:3,
                        children:[]
                    },
                    {
                        name:'Isha Ambani',
                         generation:3,
                        children:[]
                    }
                    ]
            },
            {
                name:'Anil Ambani',
                 generation:2,
                children:[
                    {
                        name:'Anmol Ambani',
                         generation:3,
                        children:[]
                    }]
            }
            ]
    }
    ]

    let gen3=[];
    function getGen3(data){
        for(let item of data){
              console.log(item.name)
        if(item.generation==3){
            gen3.push(item);
        }
       if(item.children && item.children.length>0){
           getGen3(item.children);
       }
        }
    }

getGen3(data);
console.log(gen3);

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
