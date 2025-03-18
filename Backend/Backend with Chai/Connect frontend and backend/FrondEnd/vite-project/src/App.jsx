import { useEffect, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import axios from 'axios'
import './App.css'

function App() {
  const [jokes, setjokes] = useState([])

  useEffect(() => {
    axios.get('/api/jokes')
      .then((responce) => {
        setjokes(responce.data)
      })
      .catch((error) => {
        console.log(error);
      })
  })

  return (
    <>
      <h1>Jokes but question</h1>
      <h1>Jokes : {jokes.length}</h1>

      {
        jokes.map((joke, index) => (
          <div key={joke.id} >
            <p>{joke.question}</p>
            <p> {joke.answer}</p>
          </div>
        ))
      }
    </>
  )
}

export default App
