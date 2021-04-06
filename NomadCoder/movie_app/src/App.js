import React from "react";
import axios from "axios";
import PropTypes from "prop-types";

class App extends React.Component {
    state = {
    //  count: 0
        isLoading: true,
        movies: []
    };

    getMovies = async () => {
        const movies = await axios.get("https://yts-proxy.now.sh/list_movies.json");
    };

    // add = () => {
    //   console.log("add:");
    //   this.setState(current => ({ count: current.count + 1 }));
    // };

    // minus = () => {
    //   console.log("minus:");
    //   this.setState(current => ({ count: current.count - 1 }));
    // };

    componentDidMount() {
    //    console.log("Component rendered");
        // setTimeout(() => {
        //     this.setState({ isLoading: false });
        // }, 6000);
        this.getMovies();
    }

    // componentDidUpdate() {
    //     console.log("I just updated");
    // }

    // componentWillUnmount() {
    //     console.log("Goodbye, cruel world");
    // }

    render() {
        // console.log("I'm rendering");
        // return (
        //     <div>
        //         <h1>The number is: {this.state.count}</h1>
        //         <button onClick={this.add}>Add</button>
        //         <button onClick={this.minus}>Minus</button>
        //     </div>
        // );
        const { isLoading } = this.state;
        return <div>{isLoading ? "Loading..." : "We are ready"}</div>;
    }
}
  
  export default App;