const express = require("express"); 
const app = express();
const port = 3001; // react의 기본값은 3000이니까 3000이 아닌 아무 수
const cors = require("cors");
const bodyParser = require("body-parser");
const mysql = require("mysql"); // mysql 모듈 사용

var connection = mysql.createConnection({
    host : "localhost",
    user : "root", //mysql의 id
    password : "ehd153", //mysql의 password
    database : "sqltest", //사용할 데이터베이스
});

connection.connect();

app.use(bodyParser.urlencoded({ extended: false }));
app.use(bodyParser.json());
app.use(cors());

app.get('/', (req, res) =>{
    res.send('helloJS')
})

app.post("/idplz", (req,res)=>{
    const test = req.body.test;
    const wtest = req.body.wtest;
     console.log(req.body);
    connection.query("INSERT INTO test (test_body,test_writer) values (?,?)",[test,wtest],
    function(err,rows,fields){
        if(err){
            console.log("실패");
            // console.log(err);
        }else{
            console.log("성공");
            // console.log(rows);
        };
    });

    
});

app.listen(port, ()=>{
    console.log(`Connect at http://localhost:${port}`);
})