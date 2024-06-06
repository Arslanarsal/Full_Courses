import React, { useContext } from 'react'
import userContext from '../Context/userContext'
import { renderToStaticMarkup } from 'react-dom/server'
function Profile() {
    const { user } = useContext(userContext);

    if (!user) {
        return <div>Please Login</div>
    }
    return <div>Welcome {user}</div>
}

export default Profile
