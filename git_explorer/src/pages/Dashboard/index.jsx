import { useState } from "react";
import { FaSearch } from "react-icons/fa";
import { Container, Content } from './styles'
import { getUserDetails } from '../../api/github'

export const Dashboard = () => {
    const [username, setUserName] = useState('')
    const [loading, setLoading] = useState(false)

    function handleSetUser(event) {
        setUserName(event.target.value)
    }

    async function handleGetDetails() {
        try {
            setLoading(true)
            const result = await getUserDetails(username)

            console.log(result)
        } catch (error) {
            console.error(error.message)
        } finally {
            setLoading(salse)
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

                <button>Buscar <FaSearch /></button>
            </Content>   
        </Container>
    )
}