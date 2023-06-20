package main

import (
	  "context"
	  "log"
	  "encoding/json"
	  "net/http"
	 
		  "go.mongodb.org/mongo-driver/bson"
		  "github.com/kamva/mgm/v3"
	    "go.mongodb.org/mongo-driver/bson/primitive"
	    "go.mongodb.org/mongo-driver/mongo"
	    "go.mongodb.org/mongo-driver/mongo/options"
			"github.com/gofiber/fiber/middleware/logger"
		   "github.com/gofiber/fiber"
	
	)
	// Usuario representa o modelo de usuário no banco de dados
	type Usuario struct {
	 IDprimitive.ObjectID     `bson:"_id,omitempty" json:"id"`
	 Nome string              `bson:"nome" json:"nome"`
	ativo bool                `bson:"ativo" json:"ativo"`
	
	
	}
	
	func main () {
	
	 // Conecte ao MongoDB
	 client, err := mongo.Connect(context.Background(), options.Client().ApplyURI("mongodb://localhost:8080"))
	 if err != nil {
	 log.Fatal(err)
	 }
	
	// Verifique se a conexão foi bem-sucedida
	err = client.Ping(context.Background(), nil)
	if err != nil {
		log.Fatal(err)
	}
	// Obtenha o banco de dados e a coleção
	db := client.Database("testdb")
	collection := db.Collection("usuarios")


		// Inicie o Fiber
		app := fiber.New() 
		app.Use (logger.New ())
	
		app.Get("/api/v1/usuario", GetUsuario)
		app.Get("/api/v1/Usuario/:id", GetUsuario)
		app.Post("/api/v1/Usuario", PostUsuario)
		app.Put("/api/v1/Usuario/:id", PutUsuario)
		app.Delete("/api/v1/Usuario/:id", DeleteUsuario)
	
		api.Listen(":8080")



	
		// Obtenha todos os usuários
		app.Get("/usuarios", func(c *fiber.Ctx) {
			var usuarios []Usuario
		cur, err := collection.Find(context.Background(), bson.M{})
		if err != nil {
		c.Status(500).Send(err)
		return
		}
		for cur.Next(context.Background()) {
		var usuario Usuario
		err := cur.Decode(&usuario)
		if err != nil {
		c.Status(500).Send(err)
		return
		}
		usuarios = append(usuarios, usuario)
		}
		c.JSON(usuarios)
		}) 
		
		// Obtenha um usuário por ID
		app.Get("/usuarios/:id", func(c *fiber.Ctx)){
		id, _ := primitive.ObjectIDFromHex(c.Params("id"))
		var usuario Usuario
	 err := collection.FindOne(context.Background(), bson.M{"_id": id}).Decode(&us)
 
		}
		
	 // Adicionando um usuario
	 app.Post("/usuario", func(c *fiber.Ctx) {
		 Usuario := new(usuario)
		 if err := c.BodyParser(usuario); err != nil {
			 c.Status(400).Send(err)
			 return
		 }
		 usuario.ID = c.Params("id")
		 usuario.Created = time.Now()
		 _, err := collection.InsertOne(ctx, usuario)
		 if err != nil {
			 c.Status(500).Send(err)
			 return
		 }
		 c.JSON(usuario)
	 })
 
	 // Atualizando um usuario
	 app.Put("/usuario/:id", func(c *fiber.Ctx)) {
		 usuario := new(usuario)
		 if err := c.BodyParser(usuario); err != nil {
			 c.Status(400).Send(err)
			 return
		 }
		 }
		 usuario.ID = c.Params("id")
		 usuario.Created = time.Now()
		 result, err := collection.ReplaceOne(ctx, bson.M{"_id": usuario.ID}, usuario)
		 if err != nil {
			 c.Status(500).Send(err)
			 return
		 }

					// Converte o ID em ObjectID
			objID, err := primitive.ObjectIDFromHex(id)
			if err != nil {
				c.Status(http.StatusBadRequest).Send(err)
				return
			}

			// Crie o filtro para localizar o usuário com o ID especificado
			filter := bson.M{"_id": objID}

			// Execute a operação de exclusão no banco de dados
			res, err := collection.DeleteOne(context.Background(), filter)
			if err != nil {
				c.Status(http.StatusInternalServerError).Send(err)
				return
			}

			// Verifique se o usuário foi excluído com sucesso
			if res.DeletedCount == 0 {
				c.Status(http.StatusNotFound).Send("Usuário não encontrado")
				return
			}

			// Retorne uma resposta de sucesso
			c.Send("Usuário excluído com sucesso")





		}	
	}
}
	
	
	
	
	

	 
	
	 
		
		 

	  

			
