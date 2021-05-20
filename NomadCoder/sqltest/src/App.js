import React, { Component } from 'react'
import './App.css';
export default class App extends Component {
  state = {
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
  render() {
    return (
      <div>
        <input onChange={this.handleChange} name ="testbody"/>
        <input onChange={this.handleChange} name ="testwriter"/>
        <button onClick = {this.submitId}>Submit</button>
      </div>
    )
  }
}