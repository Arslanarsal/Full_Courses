import React, { useState, useContext } from 'react'
import userContext from "../Context/userContext"

function Login() {
  const [userName, setUserName] = useState('');
  const [password, setPassword] = useState('');

  const { setUser } = useContext(userContext);
  const handleSubmit = (e) => {
    e.preventDefault();
    setUser(userName);
  }
  return (
    <div>
      <h2>Login</h2>
      <input type="text"
        value={userName}
        onChange={(e) => setUserName(e.target.value)}
        placeholder='Username'
      />
      {"  "}
      <input type="text"
        value={password}
        onChange={(e) => setPassword(e.target.value)}
        placeholder='password'
      />
      <br />
      <button onClick={handleSubmit} >Submit</button>
    </div>
  )
}

export default Login
