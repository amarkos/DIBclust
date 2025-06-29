\name{IBcont}
\alias{IBcont}
\title{Cluster Continuous Data Using the Information Bottleneck Algorithm}
\description{
The \code{IBcont} function implements the Information Bottleneck (IB) algorithm
for fuzzy clustering of continuous data. This method optimizes an information-theoretic objective to
preserve relevant information while forming concise and interpretable cluster representations
(Costa, Papatsouma & Markos, 2024).
}
\usage{
IBcont(X, ncl, beta, randinit = NULL, s = -1, scale = TRUE,
       maxiter = 100, nstart = 100, select_features = FALSE,
       verbose = FALSE)
}
\arguments{
  \item{X}{
    A numeric matrix or data frame containing the continuous data to be clustered. All variables should be of type \code{numeric}.
  }
  \item{ncl}{
    An integer specifying the number of clusters to form.
  }
  \item{beta}{
    Regularisation strength.
  }
  \item{randinit}{
    Optional. A vector specifying initial cluster assignments. If \code{NULL}, cluster assignments are initialized randomly.
  }
\item{s}{
A numeric value or vector specifying the bandwidth parameter(s) for continuous variables. The values must be greater than \eqn{0}. The default value is \eqn{-1}, which enables the automatic selection of optimal bandwidth(s).
}
  \item{scale}{
    A logical value indicating whether the continuous variables should be scaled to have unit variance before clustering. Defaults to \code{TRUE}.
  }
  \item{maxiter}{
    The maximum number of iterations allowed for the clustering algorithm. Defaults to \eqn{100}.
  }
  \item{nstart}{
    The number of random initializations to run. The best clustering result (based on the information-theoretic criterion) is returned. Defaults to \code{100}.
  }
  \item{select_features}{
    Logical. If \code{TRUE}, uses an eigengap heuristic for feature selection, potentially improving clustering quality by reducing dimensionality. Defaults to \code{FALSE}.
  }
  \item{verbose}{
    Logical. Default to \code{FALSE} to suppress progress messages. Change to \code{TRUE} to print.
  }
}

\value{
A list containing the following elements:
  \item{Cluster}{A cluster membership matrix.}
  \item{InfoXT}{A numeric value representing the mutual information, \eqn{I(X;T)}, between the original observations weights (\eqn{X}) and the cluster assignments (\eqn{T}).}
  \item{InfoYT}{A numeric value representing the mutual information, \eqn{I(Y;T)}, between the original labels (\eqn{Y}) and the cluster assignments (\eqn{T}).}
  \item{beta}{A numeric value of the regularisation strength beta used.}
  \item{s}{A numeric vector of bandwidth parameters used for the continuous variables.}
  \item{ixt}{A numeric vector tracking the mutual information values between original observation weights and cluster assignments across iterations.}
  \item{iyt}{A numeric vector tracking the mutual information values between original labels and cluster assignments across iterations.}
  \item{losses}{A numeric vector tracking the final loss values across iterations.}
}

\details{
The \code{IBcont} function applies the Information Bottleneck algorithm to do fuzzy clustering of datasets comprising only continuous variables. This method leverages an information-theoretic objective to optimize the trade-off between data compression and the preservation of relevant information about the underlying data distribution.

The function utilizes the Gaussian kernel (Silverman, 1998) for estimating probability densities of continuous features. The kernel is defined as:

\deqn{K_c\left(\frac{x - x'}{s}\right) = \frac{1}{\sqrt{2\pi}} \exp\left\{-\frac{\left(x - x'\right)^2}{2s^2}\right\}, \quad s > 0.}

The bandwidth parameter \eqn{s}, which controls the smoothness of the density estimate, is automatically determined by the algorithm if not provided by the user.
}


\examples{
# Generate simulated continuous data
set.seed(123)
X <- matrix(rnorm(1000), ncol = 5)  # 200 observations, 5 features

# Run IBcont with automatic bandwidth selection and multiple initializations
result <- IBcont(X = X, ncl = 3, beta = 50, s = -1, nstart = 20)

# Print clustering results
print(result$Cluster)       # Cluster membership matrix
print(result$InfoXT)       # Mutual information between X and T
print(result$InfoYT)    # Mutual information between Y and T
}
\seealso{
\code{\link{IBmix}}, \code{\link{IBcat}}
}
\author{
Efthymios Costa, Ioanna Papatsouma, Angelos Markos
}
\references{
Costa, E., Papatsouma, I., & Markos, A. (2024). A Deterministic Information Bottleneck Method for Clustering Mixed-Type Data. \emph{arXiv:2407.03389 [stat.ME]}. Retrieved from https://arxiv.org/abs/2407.03389

Silverman, B. W. (1998). Density estimation for statistics and data analysis (1st ed.). Routledge.
}
\keyword{clustering}
