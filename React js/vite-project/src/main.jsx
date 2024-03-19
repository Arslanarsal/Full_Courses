import React from 'react'
import ReactDOM from 'react-dom/client'
import App from './App.jsx'

function MyApp() {
  return (
    <h1>Arslan D'ont give up </h1>
  )
}

// const ReactElement = {
//   type: 'a',
//   props: {
//       href: 'https://www.google.com',
//       target: '_Blank'
//   },
//   children: 'Click me to go Google'
// }

const anotherElement = (
  <a href="https://www.google.com" target='_blank'>Visit Google</a>
)

const username = "You are best"; // Variable

const reactElement = React.createElement(
  'a',
  {
    href: 'https://www.google.com',
    target: '_blank'
  },
  'Click here to visit google',
  username
)

ReactDOM.createRoot(document.getElementById('root')).render(

  // <App/>
  // MyApp()
  // anotherElement
  // ReactElement  //This will not run because render function key we are not know
  reactElement
)
