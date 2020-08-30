package server

import (
	"github.com/gin-gonic/gin"
	"github.com/ulule/limiter/v3"
	mgin "github.com/ulule/limiter/v3/drivers/middleware/gin"
	"github.com/ulule/limiter/v3/drivers/store/memory"
)

func rateLimit() (handlerFunc gin.HandlerFunc, err error) {
	var rate limiter.Rate
	if rate, err = limiter.NewRateFromFormatted("20-S"); err != nil {
		return
	}

	var store = memory.NewStore()

	handlerFunc = mgin.NewMiddleware(limiter.New(store, rate))

	return
}
