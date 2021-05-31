import React, { Component } from 'react'
import { HashRouter, Route } from "react-router-dom";
import './App.css';
import Write from "./routes/Write";
export default class App extends Component {
  state = {
    testid : '',
    testbody : "",
    testwriter : "",
  }

  handleChange =(e)=>{
    this.setState({
      [e.target.name] : e.target.value,
    });
  }

///////////////////////////////////////////////////////////////////
  submitId = ()=>{
    
    const post ={
      test : this.state.testbody,
      wtest : this.state.testwriter,
    };
   
    fetch("http://localhost:3001/idplz", {
      method : "post", // 통신방법
      headers : {
        "content-type" : "application/json",
      },
      body : JSON.stringify(post),
    })
    .then((res)=>res.json())
    .then((json)=>{
      //console.log(json);
      this.setState({
        testbody : json.text,
      });
    });
  };
//////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
getId = () => {
  fetch("http://localhost:3001/data", { 
    method: "post", //통신방법
    headers: {
      "content-type": "application/json",
    },
    body: JSON.stringify(),
  })
    .then((res) => res.json())
    .then((json) => {
      console.log(json);
      this.setState({
        testid: json.content_id,
        testbody: json.content,
        testwriter : json.writer
      });
    });
};
////////////////////////////////////////////////////////////////

  render() {
    return (
      // <div>
      //   <input onChange={this.handleChange} name ="testbody"/>
      //   <input onChange={this.handleChange} name ="testwriter"/>
      //   <button onClick = {this.submitId}>Submit</button>
      //   <h1>{this.state.testbody}</h1>
      //   <br></br>
      //   <h1>데이터 가져오기</h1>
      //   <h3>{this.state.testid}</h3>
      //   <h3>{this.state.testwriter}</h3>
      //   <h3>{this.state.testbody}</h3>
      //   <button onClick={this.getId}>가져오기</button>
      // </div>
      <Route path="/write" component={Write}/>
    )
  }
}
