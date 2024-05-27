import React from "react"
import "./card.css"
const Card = (props) => {
    return (
        <>
            <div className="main" >
                <h1>{props.title}</h1>
                <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Ex modi quaerat incidunt hic aspernatur voluptates, porro eligendi illum impedit odit explicabo sit rem molestias. Odio illo praesentium enim tenetur aliquam.</p>
            </div>
        </>
    )
}

export default Card