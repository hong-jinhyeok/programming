import React from "react";
import "./Detail.css"

class Detail extends React.Component {
    componentDidMount() {
        const { location, history } = this.props;
        if (location.state === undefined) {
            history.push("/");
        }
    }

    render() {
        const { location } = this.props;
        if (location.state) {
            return (
                <section>
                    <div className="movie">
                        <img src={location.state.poster} alt={location.state.title} title={location.state.title} />
                        <h3>{location.state.title}</h3>
                        <h5>{location.state.year}</h5>
                        <ul>
                            {location.state.genres.map((genre,index) => (
                                <li key={index}>
                                    {genre}
                                </li>
                            ))}
                        </ul>
                        <p>{location.state.summary}</p>
                    </div>
                </section>
            );
        } else {
            return null;
        }
    }
}
export default Detail;