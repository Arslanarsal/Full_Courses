import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0)
  const [todos, settodos] = useState([{
    title: "this is gitle 1",
    des: "Description of title 1"
  },
  {
    title: "this is gitle 2",
    des: "Description of title 2"
  },
  {
    title: "this is gitle 3",
    des: "Description of title 3"
  },
  ])
  const Todo = ({ todo }) => {
    return (
      <>
        <div style={{ border: '2px solid red', padding:'10px' ,margin:'10px' }} >
          <div>{todo.title}</div>
          <div>{todo.des}</div>
        </div>
      </>
    )
  }

  return (
    <>
      <div>
        <a href="https://vitejs.dev" target="_blank">
          <img src={viteLogo} className="logo" alt="Vite logo" />
        </a>
        <a href="https://react.dev" target="_blank">
          <img src={reactLogo} className="logo react" alt="React logo" />
        </a>
      </div>
      <h1>Vite + React</h1>
      {todos.map((todo) => {
        return <Todo todo={todo} />
      })
      }
      <div className="card">
        <button onClick={() => setCount((count) => count + 1)}>
          count is {count}
        </button>
        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
    </>
  )
}

export default App
