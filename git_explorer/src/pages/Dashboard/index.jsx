import { useState } from "react";

import {useNavigate} from 'react-router-dom'

import { FaSearch } from "react-icons/fa";
import { Container, Content, ContentLoader } from './styles'
import { getUserDetails } from '../../api/github'
import { BallTriangleGE } from '../../components/loaders/BallTriangleGE'

export const Dashboard = () => {
    const [username, setUserName] = useState('')
    const [loading, setLoading] = useState(false)

    const navigate = useNavigate()

    function handleSetUser(event) {
        setUserName(event.target.value)
    }

    async function handleGetDetails() {
        try {
            setLoading(true)
            const result = await getUserDetails(username)

            navigate('/repositories', {state: { profile: result}})

            console.log(result)
        } catch (error) {
            console.error(error.message)
        } finally {
            setLoading(false)
        }
    }

    return (
        <Container>
            <Content>
                <label htmlFor="nickname">
                    Digite o usuário GitHub
                    <input
                        id="nickname"
                        type="text"
                        placeholder="Digite aqui seu usuário"
                        onChange={handleSetUser}
                    />
                </label>

                {loading}

                <button type="button" onClick={() => handleGetDetails()}>
                    Buscar <FaSearch />
                </button>
            </Content>

            {loading && (
                <ContentLoader>
                    <BallTriangleGE />
                </ContentLoader>
            )}
        </Container>
    )
}
